
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {int nb_nals; TYPE_2__* nals; } ;
struct TYPE_18__ {TYPE_1__* par_in; TYPE_3__* priv_data; } ;
struct TYPE_17__ {int * data; } ;
struct TYPE_16__ {int size; int * data; TYPE_5__* buf; } ;
struct TYPE_15__ {scalar_t__ remove; TYPE_7__ h2645_pkt; } ;
struct TYPE_14__ {int const type; scalar_t__ raw_size; int raw_data; } ;
struct TYPE_13__ {int codec_id; } ;
typedef TYPE_2__ H2645NAL ;
typedef TYPE_3__ ExtractExtradataContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVBufferRef ;
typedef TYPE_6__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int const*) ;





 TYPE_5__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__**) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_7__*,int *,int,TYPE_6__*,int ,int ,int ,int,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int const*,int,int const) ;

__attribute__((used)) static int FUNC_10(AVBSFContext *VAR_4, AVPacket *VAR_5,
                                   uint8_t **VAR_6, int *VAR_7)
{
    static const int VAR_8[] = {
        128, 129, 130,
    };
    static const int VAR_9[] = {
        131, 132,
    };

    ExtractExtradataContext *VAR_10 = VAR_4->priv_data;

    int VAR_11 = 0, VAR_12 = 0;
    const int *VAR_13;
    int VAR_14;
    int VAR_15, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

    if (VAR_4->par_in->codec_id == VAR_1) {
        VAR_13 = VAR_8;
        VAR_14 = FUNC_2(VAR_8);
    } else {
        VAR_13 = VAR_9;
        VAR_14 = FUNC_2(VAR_9);
    }

    VAR_18 = FUNC_6(&VAR_10->h2645_pkt, VAR_5->data, VAR_5->size,
                                VAR_4, 0, 0, VAR_4->par_in->codec_id, 1, 0);
    if (VAR_18 < 0)
        return VAR_18;

    for (VAR_15 = 0; VAR_15 < VAR_10->h2645_pkt.nb_nals; VAR_15++) {
        H2645NAL *VAR_19 = &VAR_10->h2645_pkt.nals[VAR_15];
        if (FUNC_9(VAR_13, VAR_14, VAR_19->type)) {
            VAR_11 += VAR_19->raw_size + 3;
            if (VAR_4->par_in->codec_id == VAR_1) {
                if (VAR_19->type == 129) VAR_16 = 1;
                if (VAR_19->type == 128) VAR_17 = 1;
            } else {
                if (VAR_19->type == 131) VAR_16 = 1;
            }
        } else if (VAR_10->remove) {
            VAR_12 += VAR_19->raw_size + 3;
        }
    }

    if (VAR_11 &&
        ((VAR_4->par_in->codec_id == VAR_1 && VAR_16 && VAR_17) ||
         (VAR_4->par_in->codec_id == VAR_0 && VAR_16))) {
        AVBufferRef *VAR_20;
        uint8_t *VAR_21, *VAR_22;

        if (VAR_10->remove) {
            VAR_20 = FUNC_3(VAR_12 + VAR_2);
            if (!VAR_20) {
                return FUNC_0(VAR_3);
            }
            FUNC_8(VAR_20->data + VAR_12, 0, VAR_2);

            VAR_22 = VAR_20->data;
        }

        VAR_21 = FUNC_5(VAR_11 + VAR_2);
        if (!VAR_21) {
            FUNC_4(&VAR_20);
            return FUNC_0(VAR_3);
        }
        FUNC_8(VAR_21 + VAR_11, 0, VAR_2);

        *VAR_6 = VAR_21;
        *VAR_7 = VAR_11;

        for (VAR_15 = 0; VAR_15 < VAR_10->h2645_pkt.nb_nals; VAR_15++) {
            H2645NAL *VAR_23 = &VAR_10->h2645_pkt.nals[VAR_15];
            if (FUNC_9(VAR_13, VAR_14,
                             VAR_23->type)) {
                FUNC_1(VAR_21, 1);
                FUNC_7(VAR_21 + 3, VAR_23->raw_data, VAR_23->raw_size);
                VAR_21 += 3 + VAR_23->raw_size;
            } else if (VAR_10->remove) {
                FUNC_1(VAR_22, 1);
                FUNC_7(VAR_22 + 3, VAR_23->raw_data, VAR_23->raw_size);
                VAR_22 += 3 + VAR_23->raw_size;
            }
        }

        if (VAR_10->remove) {
            FUNC_4(&VAR_5->buf);
            VAR_5->buf = VAR_20;
            VAR_5->data = VAR_20->data;
            VAR_5->size = VAR_12;
        }
    }

    return 0;
}
