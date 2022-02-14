
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ff_asf_guid ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_20__ {int codec_type; } ;
struct TYPE_19__ {int nb_streams; int offset; TYPE_4__** asf_st; } ;
struct TYPE_15__ {scalar_t__ data_size; int avpkt; } ;
struct TYPE_18__ {int stream_index; int type; int span; void* virtual_pkt_len; void* virtual_chunk_len; TYPE_1__ pkt; scalar_t__ indexed; int index; } ;
struct TYPE_17__ {int * pb; TYPE_5__* priv_data; } ;
struct TYPE_16__ {int id; TYPE_8__* codecpar; int index; } ;
typedef int GUIDParseTable ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFStream ;
typedef TYPE_5__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 TYPE_4__* FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_2__*,int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_3__*,int *,TYPE_8__*,int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_12, const GUIDParseTable *VAR_13)
{
    ASFContext *VAR_14 = VAR_12->priv_data;
    AVIOContext *VAR_15 = VAR_12->pb;
    uint64_t VAR_16;
    uint32_t VAR_17, VAR_18;
    uint16_t VAR_19;
    ff_asf_guid VAR_20;
    enum AVMediaType VAR_21;
    int VAR_22, VAR_23;
    uint8_t VAR_24;
    AVStream *VAR_25;
    ASFStream *VAR_26;


    if (VAR_14->nb_streams >= VAR_0)
        return VAR_2;

    VAR_16 = FUNC_9(VAR_15);
    FUNC_12(VAR_15, &VAR_20);
    if (!FUNC_14(&VAR_20, &VAR_7))
        VAR_21 = 129;
    else if (!FUNC_14(&VAR_20, &VAR_11))
        VAR_21 = 128;
    else if (!FUNC_14(&VAR_20, &VAR_10))
        VAR_21 = 128;
    else if (!FUNC_14(&VAR_20, &VAR_8))
        VAR_21 = VAR_3;
    else if (!FUNC_14(&VAR_20,
                         &VAR_9))
        VAR_21 = VAR_4;
    else
        return VAR_2;

    FUNC_12(VAR_15, &VAR_20);
    FUNC_10(VAR_15, 8);
    VAR_18 = FUNC_8(VAR_15);
    VAR_17 = FUNC_8(VAR_15);
    VAR_19 = FUNC_7(VAR_15);

    VAR_24 = VAR_19 & VAR_1;
    for (VAR_22 = 0; VAR_22 < VAR_14->nb_streams; VAR_22++)
        if (VAR_24 == VAR_14->asf_st[VAR_22]->stream_index) {
            FUNC_3(VAR_12, VAR_5,
                   "Duplicate stream found, this stream will be ignored.\n");
            FUNC_1(VAR_15, VAR_14->offset, VAR_16);
            return 0;
        }

    VAR_25 = FUNC_5(VAR_12, ((void*)0));
    if (!VAR_25)
        return FUNC_0(VAR_6);
    FUNC_11(VAR_25, 32, 1, 1000);
    VAR_25->codecpar->codec_type = VAR_21;
    VAR_14->asf_st[VAR_14->nb_streams] = FUNC_4(sizeof(*VAR_26));
    if (!VAR_14->asf_st[VAR_14->nb_streams])
        return FUNC_0(VAR_6);
    VAR_26 = VAR_14->asf_st[VAR_14->nb_streams];
    VAR_14->nb_streams++;
    VAR_26->stream_index = VAR_24;
    VAR_26->index = VAR_25->index;
    VAR_26->indexed = 0;
    VAR_25->id = VAR_19 & VAR_1;
    FUNC_2(&VAR_26->pkt.avpkt);
    VAR_26->pkt.data_size = 0;
    FUNC_10(VAR_15, 4);

    switch (VAR_21) {
    case 129:
        VAR_26->type = 129;
        if ((VAR_23 = FUNC_13(VAR_12, VAR_15, VAR_25->codecpar, VAR_18, 0)) < 0)
            return VAR_23;
        break;
    case 128:
        VAR_26->type = 128;
        if ((VAR_23 = FUNC_15(VAR_15, VAR_25)) < 0)
            return VAR_23;
        break;
    default:
        FUNC_10(VAR_15, VAR_18);
        break;
    }

    if (VAR_17) {
        if (VAR_21 == 129) {
            uint8_t VAR_27 = FUNC_6(VAR_15);
            if (VAR_27 > 1) {
                VAR_26->span = VAR_27;
                VAR_26->virtual_pkt_len = FUNC_7(VAR_15);
                VAR_26->virtual_chunk_len = FUNC_7(VAR_15);
                if (!VAR_26->virtual_chunk_len || !VAR_26->virtual_pkt_len)
                    return VAR_2;
                FUNC_10(VAR_15, VAR_17 - 5);
            } else
                FUNC_10(VAR_15, VAR_17 - 1);
        } else
            FUNC_10(VAR_15, VAR_17);
    }

    FUNC_1(VAR_15, VAR_14->offset, VAR_16);

    return 0;
}
