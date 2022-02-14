
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct video_data {int fd; } ;
struct v4l2_capability {char* card; } ;
struct dirent {char* d_name; } ;
typedef int device_name ;
struct TYPE_13__ {struct TYPE_13__* device_description; struct TYPE_13__* device_name; } ;
struct TYPE_12__ {int nb_devices; int devices; } ;
struct TYPE_11__ {struct video_data* priv_data; } ;
typedef int DIR ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDeviceInfoList ;
typedef TYPE_3__ AVDeviceInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ) ;
 TYPE_3__* FUNC_5 (int) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int VAR_4 ;
 int * FUNC_9 (char*) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int,int ,struct v4l2_capability*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_5, AVDeviceInfoList *VAR_6)
{
    struct video_data *VAR_7 = VAR_5->priv_data;
    DIR *VAR_8;
    struct dirent *VAR_9;
    AVDeviceInfo *VAR_10 = ((void*)0);
    struct v4l2_capability VAR_11;
    int VAR_12 = 0;

    if (!VAR_6)
        return FUNC_0(VAR_1);

    VAR_8 = FUNC_9("/dev");
    if (!VAR_8) {
        VAR_12 = FUNC_0(VAR_4);
        FUNC_4(VAR_5, VAR_0, "Couldn't open the directory: %s\n", FUNC_2(VAR_12));
        return VAR_12;
    }
    while ((VAR_9 = FUNC_10(VAR_8))) {
        char VAR_13[256];

        if (!FUNC_14(VAR_9->d_name))
            continue;

        FUNC_11(VAR_13, sizeof(VAR_13), "/dev/%s", VAR_9->d_name);
        if ((VAR_7->fd = FUNC_8(VAR_5, VAR_13)) < 0)
            continue;

        if (FUNC_13(VAR_7->fd, VAR_3, &VAR_11) < 0) {
            VAR_12 = FUNC_0(VAR_4);
            FUNC_4(VAR_5, VAR_0, "ioctl(VIDIOC_QUERYCAP): %s\n", FUNC_2(VAR_12));
            goto fail;
        }

        VAR_10 = FUNC_5(sizeof(AVDeviceInfo));
        if (!VAR_10) {
            VAR_12 = FUNC_0(VAR_2);
            goto fail;
        }
        VAR_10->device_name = FUNC_6(VAR_13);
        VAR_10->device_description = FUNC_6(VAR_11.card);
        if (!VAR_10->device_name || !VAR_10->device_description) {
            VAR_12 = FUNC_0(VAR_2);
            goto fail;
        }

        if ((VAR_12 = FUNC_1(&VAR_6->devices,
                                          &VAR_6->nb_devices, VAR_10)) < 0)
            goto fail;

        FUNC_12(VAR_7->fd);
        VAR_7->fd = -1;
        continue;

      fail:
        if (VAR_10) {
            FUNC_3(&VAR_10->device_name);
            FUNC_3(&VAR_10->device_description);
            FUNC_3(&VAR_10);
        }
        if (VAR_7->fd >= 0)
            FUNC_12(VAR_7->fd);
        VAR_7->fd = -1;
        break;
    }
    FUNC_7(VAR_8);
    return VAR_12;
}
