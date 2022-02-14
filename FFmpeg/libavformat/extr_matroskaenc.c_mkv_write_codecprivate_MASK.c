
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ codec_type; unsigned int codec_tag; scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int ,unsigned int) ;
 void* FUNC_12 (int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_14 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_15 (int *,int *,TYPE_1__*,int *) ;
 int FUNC_16 (int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_11, AVIOContext *VAR_12,
                                  AVCodecParameters *VAR_13,
                                  int VAR_14, int VAR_15)
{
    AVIOContext *VAR_16;
    uint8_t *VAR_17;
    int VAR_18, VAR_19;

    VAR_18 = FUNC_6(&VAR_16);
    if (VAR_18 < 0)
        return VAR_18;

    if (VAR_14) {
        VAR_18 = FUNC_15(VAR_11, VAR_12, VAR_13, VAR_16);
    } else if (VAR_13->codec_type == VAR_1) {
        if (VAR_15) {
            if (!VAR_13->codec_tag)
                VAR_13->codec_tag = FUNC_12(VAR_9,
                                                    VAR_13->codec_id);
            if ( FUNC_11(VAR_9, VAR_13->codec_tag) == VAR_13->codec_id
                && (!VAR_13->extradata_size || FUNC_11(VAR_9, FUNC_1(VAR_13->extradata + 4)) != VAR_13->codec_id)
            ) {
                int VAR_20;
                FUNC_8(VAR_16, 0x5a + VAR_13->extradata_size);
                FUNC_9(VAR_16, VAR_13->codec_tag);
                for(VAR_20 = 0; VAR_20 < 0x5a - 8; VAR_20++)
                    FUNC_7(VAR_16, 0);
            }
            FUNC_10(VAR_16, VAR_13->extradata, VAR_13->extradata_size);
        } else {
            if (!FUNC_12(VAR_8, VAR_13->codec_id))
                FUNC_3(VAR_11, VAR_4, "codec %s is not supported by this format\n",
                       FUNC_4(VAR_13->codec_id));

            if (!VAR_13->codec_tag)
                VAR_13->codec_tag = FUNC_12(VAR_8,
                                                  VAR_13->codec_id);
            if (!VAR_13->codec_tag && VAR_13->codec_id != VAR_2) {
                FUNC_3(VAR_11, VAR_3, "No bmp codec tag found for codec %s\n",
                       FUNC_4(VAR_13->codec_id));
                VAR_18 = FUNC_0(VAR_5);
            }

            FUNC_13(VAR_16, VAR_13, 0, 0);
        }
    } else if (VAR_13->codec_type == VAR_0) {
        unsigned int VAR_21;
        VAR_21 = FUNC_12(VAR_10, VAR_13->codec_id);
        if (!VAR_21) {
            FUNC_3(VAR_11, VAR_3, "No wav codec tag found for codec %s\n",
                   FUNC_4(VAR_13->codec_id));
            VAR_18 = FUNC_0(VAR_5);
        }
        if (!VAR_13->codec_tag)
            VAR_13->codec_tag = VAR_21;

        FUNC_14(VAR_11, VAR_16, VAR_13, VAR_6);
    }

    VAR_19 = FUNC_5(VAR_16, &VAR_17);
    if (VAR_19)
        FUNC_16(VAR_12, VAR_7, VAR_17,
                        VAR_19);
    FUNC_2(VAR_17);
    return VAR_18;
}
