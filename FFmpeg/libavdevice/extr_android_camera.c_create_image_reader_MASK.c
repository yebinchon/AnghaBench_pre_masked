
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ media_status_t ;
struct TYPE_8__ {int onImageAvailable; TYPE_2__* context; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int image_reader_window; int image_reader; TYPE_5__ image_listener; int height; int width; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_6)
{
    AndroidCameraCtx *VAR_7 = VAR_6->priv_data;
    media_status_t VAR_8;

    VAR_8 = FUNC_1(VAR_7->width, VAR_7->height, VAR_3,
                           VAR_4, &VAR_7->image_reader);
    if (VAR_8 != VAR_0) {
        FUNC_3(VAR_6, VAR_2,
               "Failed to create image reader, error: %s.\n", FUNC_4(VAR_8));
        return VAR_1;
    }

    VAR_7->image_listener.context = VAR_6;
    VAR_7->image_listener.onImageAvailable = VAR_5;

    VAR_8 = FUNC_2(VAR_7->image_reader, &VAR_7->image_listener);
    if (VAR_8 != VAR_0) {
        FUNC_3(VAR_6, VAR_2,
               "Failed to set image listener on image reader, error: %s.\n",
               FUNC_4(VAR_8));
        return VAR_1;
    }

    VAR_8 = FUNC_0(VAR_7->image_reader, &VAR_7->image_reader_window);
    if (VAR_8 != VAR_0) {
        FUNC_3(VAR_6, VAR_2,
               "Could not get image reader window, error: %s.\n",
               FUNC_4(VAR_8));
        return VAR_1;
    }

    return 0;
}
