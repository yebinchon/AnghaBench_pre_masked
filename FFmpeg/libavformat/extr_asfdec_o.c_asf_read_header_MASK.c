
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ff_asf_guid ;
struct TYPE_33__ {scalar_t__ offset; scalar_t__ unknown_offset; int is_header; int b_flags; int nb_streams; TYPE_4__* asf_sd; TYPE_1__** asf_st; int first_packet_offset; scalar_t__ data_reached; scalar_t__ is_simple_index; scalar_t__ preroll; } ;
struct TYPE_32__ {TYPE_6__** streams; TYPE_7__* pb; TYPE_9__* priv_data; } ;
struct TYPE_31__ {int seekable; } ;
struct TYPE_26__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_30__ {TYPE_2__ sample_aspect_ratio; int metadata; } ;
struct TYPE_29__ {int (* read_object ) (TYPE_8__*,TYPE_5__ const*) ;} ;
struct TYPE_27__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_28__ {char* langs; TYPE_3__ aspect_ratio; int asf_met; } ;
struct TYPE_25__ {size_t lang_idx; size_t index; } ;
typedef TYPE_5__ GUIDParseTable ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVIOContext ;
typedef TYPE_8__ AVFormatContext ;
typedef TYPE_9__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_7__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,int ,int ) ;
 int FUNC_6 (TYPE_7__*,int) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 TYPE_5__* FUNC_10 (int ) ;
 TYPE_6__* FUNC_11 (TYPE_8__*,int) ;
 int FUNC_12 (TYPE_8__*,char const*,int *) ;
 int FUNC_13 (TYPE_8__*,TYPE_5__ const*) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_9)
{
    ASFContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    const GUIDParseTable *VAR_12 = ((void*)0);
    ff_asf_guid VAR_13;
    int VAR_14, VAR_15;
    uint64_t VAR_16;

    VAR_10->preroll = 0;
    VAR_10->is_simple_index = 0;
    FUNC_8(VAR_11, &VAR_13);
    if (FUNC_9(&VAR_13, &VAR_8))
        return VAR_3;
    FUNC_6(VAR_11, 8);
    FUNC_6(VAR_11, 6);
    VAR_10->data_reached = 0;





    while (1) {

        if (FUNC_7(VAR_11) == VAR_10->offset)
            break;
        VAR_10->offset = FUNC_7(VAR_11);
        if ((VAR_15 = FUNC_8(VAR_11, &VAR_13)) < 0) {
            if (VAR_15 == VAR_2 && VAR_10->data_reached)
                break;
            else
                goto failed;
        }
        VAR_12 = FUNC_10(VAR_13);
        if (VAR_12) {
            VAR_10->unknown_offset = VAR_10->offset;
            VAR_10->is_header = 1;
            if ((VAR_15 = VAR_12->read_object(VAR_9, VAR_12)) < 0)
                goto failed;
        } else {
            VAR_16 = FUNC_4(VAR_11);
            FUNC_0(VAR_11, VAR_10->offset, VAR_16);
        }
        if (VAR_10->data_reached &&
            (!(VAR_11->seekable & VAR_4) ||
             (VAR_10->b_flags & VAR_0)))
            break;
    }

    if (!VAR_10->data_reached) {
        FUNC_3(VAR_9, VAR_6, "Data Object was not found.\n");
        VAR_15 = VAR_3;
        goto failed;
    }
    if (VAR_11->seekable & VAR_4)
        FUNC_5(VAR_11, VAR_10->first_packet_offset, VAR_7);

    for (VAR_14 = 0; VAR_14 < VAR_10->nb_streams; VAR_14++) {
        const char *VAR_17 = VAR_10->asf_sd[VAR_10->asf_st[VAR_14]->lang_idx].langs;
        AVStream *VAR_18 = VAR_9->streams[VAR_10->asf_st[VAR_14]->index];
        FUNC_12(VAR_9, VAR_17, &VAR_18->metadata);
    }

    for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
        AVStream *VAR_19 = ((void*)0);

        VAR_19 = FUNC_11(VAR_9, VAR_14);
        if (VAR_19) {
            FUNC_2(&VAR_19->metadata, VAR_10->asf_sd[VAR_14].asf_met, VAR_5);
            if (VAR_10->asf_sd[VAR_14].aspect_ratio.num > 0 && VAR_10->asf_sd[VAR_14].aspect_ratio.den > 0) {
                VAR_19->sample_aspect_ratio.num = VAR_10->asf_sd[VAR_14].aspect_ratio.num;
                VAR_19->sample_aspect_ratio.den = VAR_10->asf_sd[VAR_14].aspect_ratio.den;
            }
        }
    }

    return 0;

failed:
    FUNC_1(VAR_9);
    return VAR_15;
}
