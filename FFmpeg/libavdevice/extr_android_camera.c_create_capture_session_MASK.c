
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ camera_status_t ;
struct TYPE_8__ {int onActive; int onReady; int onClosed; TYPE_2__* context; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int capture_request; int capture_session; TYPE_5__ capture_session_state_callbacks; int capture_session_output_container; int camera_dev; int camera_output_target; int framerate_range; int image_reader_window; int capture_session_output; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_5__*,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_8)
{
    AndroidCameraCtx *VAR_9 = VAR_8->priv_data;
    camera_status_t VAR_10;

    VAR_10 = FUNC_7(&VAR_9->capture_session_output_container);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to create capture session output container, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    FUNC_9(VAR_9->image_reader_window);

    VAR_10 = FUNC_8(VAR_9->image_reader_window, &VAR_9->capture_session_output);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to create capture session container, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_10 = FUNC_6(VAR_9->capture_session_output_container,
                                             VAR_9->capture_session_output);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to add output to output container, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_10 = FUNC_3(VAR_9->image_reader_window, &VAR_9->camera_output_target);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to create camera output target, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_10 = FUNC_1(VAR_9->camera_dev, VAR_4, &VAR_9->capture_request);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to create capture request, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_10 = FUNC_5(VAR_9->capture_request, VAR_0,
                                       2, VAR_9->framerate_range);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to set target fps range in capture request, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_10 = FUNC_4(VAR_9->capture_request, VAR_9->camera_output_target);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to add capture request capture request, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_9->capture_session_state_callbacks.context = VAR_8;
    VAR_9->capture_session_state_callbacks.onClosed = VAR_6;
    VAR_9->capture_session_state_callbacks.onReady = VAR_7;
    VAR_9->capture_session_state_callbacks.onActive = VAR_5;

    VAR_10 = FUNC_2(VAR_9->camera_dev, VAR_9->capture_session_output_container,
                                             &VAR_9->capture_session_state_callbacks, &VAR_9->capture_session);
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to create capture session, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    VAR_10 = FUNC_0(VAR_9->capture_session, ((void*)0), 1, &VAR_9->capture_request, ((void*)0));
    if (VAR_10 != VAR_1) {
        FUNC_10(VAR_8, VAR_3,
               "Failed to set repeating request on capture session, error: %s.\n",
               FUNC_11(VAR_10));
        return VAR_2;
    }

    return 0;
}
