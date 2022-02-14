
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct video_data {int interlaced; int fd; } ;
struct TYPE_6__ {int width; int height; scalar_t__ field; int pixelformat; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct TYPE_8__ {struct video_data* priv_data; } ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_8, int *VAR_9, int *VAR_10,
                       uint32_t VAR_11)
{
    struct video_data *VAR_12 = VAR_8->priv_data;
    struct v4l2_format VAR_13 = { .type = VAR_3 };
    int VAR_14 = 0;

    VAR_13.fmt.pix.width = *VAR_9;
    VAR_13.fmt.pix.height = *VAR_10;
    VAR_13.fmt.pix.pixelformat = VAR_11;
    VAR_13.fmt.pix.field = VAR_4;



    if (FUNC_2(VAR_12->fd, VAR_6, &VAR_13) < 0)
        VAR_14 = FUNC_0(VAR_7);

    if ((*VAR_9 != VAR_13.fmt.pix.width) || (*VAR_10 != VAR_13.fmt.pix.height)) {
        FUNC_1(VAR_8, VAR_1,
               "The V4L2 driver changed the video from %dx%d to %dx%d\n",
               *VAR_9, *VAR_10, VAR_13.fmt.pix.width, VAR_13.fmt.pix.height);
        *VAR_9 = VAR_13.fmt.pix.width;
        *VAR_10 = VAR_13.fmt.pix.height;
    }

    if (VAR_11 != VAR_13.fmt.pix.pixelformat) {
        FUNC_1(VAR_8, VAR_0,
               "The V4L2 driver changed the pixel format "
               "from 0x%08X to 0x%08X\n",
               VAR_11, VAR_13.fmt.pix.pixelformat);
        VAR_14 = FUNC_0(VAR_2);
    }

    if (VAR_13.fmt.pix.field == VAR_5) {
        FUNC_1(VAR_8, VAR_0,
               "The V4L2 driver is using the interlaced mode\n");
        VAR_12->interlaced = 1;
    }

    return VAR_14;
}
