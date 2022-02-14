
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct video_data {int fd; } ;
struct v4l2_fmtdesc {int flags; int pixelformat; int description; int index; int type; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {struct video_data* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVCodecDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,struct v4l2_fmtdesc*) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_7, int VAR_8)
{
    const struct video_data *VAR_9 = VAR_7->priv_data;
    struct v4l2_fmtdesc VAR_10 = { .type = VAR_1 };

    while(!FUNC_6(VAR_9->fd, VAR_6, &VAR_10)) {
        enum AVCodecID VAR_11 = FUNC_3(VAR_10.pixelformat);
        enum AVPixelFormat VAR_12 = FUNC_4(VAR_10.pixelformat, VAR_11);

        VAR_10.index++;

        if (!(VAR_10.flags & VAR_2) &&
            VAR_8 & VAR_5) {
            const char *VAR_13 = FUNC_0(VAR_12);
            FUNC_1(VAR_7, VAR_0, "Raw       : %11s : %20s :",
                   VAR_13 ? VAR_13 : "Unsupported",
                   VAR_10.description);
        } else if (VAR_10.flags & VAR_2 &&
                   VAR_8 & VAR_4) {
            const AVCodecDescriptor *VAR_14 = FUNC_2(VAR_11);
            FUNC_1(VAR_7, VAR_0, "Compressed: %11s : %20s :",
                   VAR_14 ? VAR_14->name : "Unsupported",
                   VAR_10.description);
        } else {
            continue;
        }
        FUNC_1(VAR_7, VAR_0, "\n");
    }
}
