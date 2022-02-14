
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_7__ {scalar_t__ codec_id; int ff_fmt; int v4l2_fmt; } ;
struct TYPE_6__ {scalar_t__ video_codec_id; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int*,int*,int ) ;
 TYPE_2__* VAR_4 ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5,
                           enum AVPixelFormat VAR_6,
                           int *VAR_7,
                           int *VAR_8,
                           uint32_t *VAR_9,
                           enum AVCodecID *VAR_10)
{
    int VAR_11, VAR_12;

    *VAR_9 = FUNC_7(VAR_6, VAR_5->video_codec_id);

    if (*VAR_9) {
        VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_8, *VAR_9);
        if (VAR_11 < 0) {
            *VAR_9 = 0;
            if (VAR_11 != FUNC_0(VAR_3))
                return VAR_11;
        }
    }

    if (!*VAR_9) {
        for (VAR_12 = 0; VAR_4[VAR_12].codec_id != VAR_0; VAR_12++) {
            if (VAR_5->video_codec_id == VAR_0 ||
                VAR_4[VAR_12].codec_id == VAR_5->video_codec_id) {
                FUNC_3(VAR_5, VAR_1, "Trying to set codec:%s pix_fmt:%s\n",
                       FUNC_5(VAR_4[VAR_12].codec_id),
                       (char *)FUNC_4(FUNC_2(VAR_4[VAR_12].ff_fmt), "none"));

                *VAR_9 = VAR_4[VAR_12].v4l2_fmt;
                VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_8, *VAR_9);
                if (VAR_11 >= 0)
                    break;
                else if (VAR_11 != FUNC_0(VAR_3))
                    return VAR_11;
                *VAR_9 = 0;
            }
        }

        if (*VAR_9 == 0) {
            FUNC_3(VAR_5, VAR_2, "Cannot find a proper format for "
                   "codec '%s' (id %d), pixel format '%s' (id %d)\n",
                   FUNC_5(VAR_5->video_codec_id), VAR_5->video_codec_id,
                   (char *)FUNC_4(FUNC_2(VAR_6), "none"), VAR_6);
            VAR_11 = FUNC_0(VAR_3);
        }
    }

    *VAR_10 = FUNC_8(*VAR_9);
    if (*VAR_10 == VAR_0)
        FUNC_1(VAR_11 == FUNC_0(VAR_3));
    return VAR_11;
}
