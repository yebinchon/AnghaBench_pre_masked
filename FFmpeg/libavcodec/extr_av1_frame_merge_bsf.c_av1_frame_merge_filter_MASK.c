
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_25__ {size_t idx; TYPE_2__* frag; int cbc; TYPE_3__* pkt; TYPE_3__* in; } ;
struct TYPE_24__ {TYPE_5__* priv_data; } ;
struct TYPE_23__ {scalar_t__ pts; int data; } ;
struct TYPE_22__ {scalar_t__ nb_units; TYPE_1__* units; } ;
struct TYPE_21__ {scalar_t__ type; int content_ref; int content; } ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVBSFContext ;
typedef TYPE_5__ AV1FMergeContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*,int,scalar_t__,int ,int ) ;
 int FUNC_8 (int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(AVBSFContext *VAR_6, AVPacket *VAR_7)
{
    AV1FMergeContext *VAR_8 = VAR_6->priv_data;
    CodedBitstreamFragment *VAR_9 = &VAR_8->frag[VAR_8->idx], *VAR_10 = &VAR_8->frag[!VAR_8->idx];
    AVPacket *VAR_11 = VAR_8->in, *VAR_12 = VAR_8->pkt;
    int VAR_13, VAR_14;

    VAR_13 = FUNC_5(VAR_6, VAR_11);
    if (VAR_13 < 0) {
        if (VAR_13 == VAR_1 && VAR_10->nb_units > 0)
            goto eof;
        return VAR_13;
    }

    VAR_13 = FUNC_8(VAR_8->cbc, VAR_9, VAR_11);
    if (VAR_13 < 0) {
        FUNC_2(VAR_6, VAR_3, "Failed to read packet.\n");
        goto fail;
    }

    if (VAR_9->nb_units == 0) {
        FUNC_2(VAR_6, VAR_3, "No OBU in packet.\n");
        VAR_13 = VAR_2;
        goto fail;
    }

    if (VAR_10->nb_units == 0 && VAR_9->units[0].type != VAR_0) {
        FUNC_2(VAR_6, VAR_3, "Missing Temporal Delimiter.\n");
        VAR_13 = VAR_2;
        goto fail;
    }

    for (VAR_14 = 1; VAR_14 < VAR_9->nb_units; VAR_14++) {
        if (VAR_9->units[VAR_14].type == VAR_0) {
            FUNC_2(VAR_6, VAR_3, "Temporal Delimiter in the middle of a packet.\n");
            VAR_13 = VAR_2;
            goto fail;
        }
    }

    if (VAR_10->nb_units > 0 && VAR_9->units[0].type == VAR_0) {
eof:
        VAR_13 = FUNC_9(VAR_8->cbc, VAR_12, VAR_10);
        if (VAR_13 < 0) {
            FUNC_2(VAR_6, VAR_3, "Failed to write packet.\n");
            goto fail;
        }
        FUNC_3(VAR_7, VAR_12);


        VAR_8->idx = !VAR_8->idx;
    } else {
        for (VAR_14 = 0; VAR_14 < VAR_9->nb_units; VAR_14++) {
            VAR_13 = FUNC_7(VAR_8->cbc, VAR_10, -1, VAR_9->units[VAR_14].type,
                                             VAR_9->units[VAR_14].content, VAR_9->units[VAR_14].content_ref);
            if (VAR_13 < 0)
                goto fail;
        }

        VAR_13 = FUNC_0(VAR_5);
    }


    if (!VAR_12->data && VAR_11->pts != VAR_4)
        FUNC_3(VAR_12, VAR_11);
    else
        FUNC_4(VAR_11);

    FUNC_6(VAR_8->cbc, &VAR_8->frag[VAR_8->idx]);

fail:
    if (VAR_13 < 0 && VAR_13 != FUNC_0(VAR_5))
        FUNC_1(VAR_6);

    return VAR_13;
}
