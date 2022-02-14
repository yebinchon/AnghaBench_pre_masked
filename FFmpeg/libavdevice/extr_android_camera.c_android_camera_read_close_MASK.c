
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ input_queue; int * camera_mgr; int camera_id; int * camera_metadata; int * image_reader; int * camera_dev; int * capture_session_output_container; int * image_reader_window; int * capture_session_output; int * camera_output_target; int * capture_request; int * capture_session; int exit; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__*) ;
 scalar_t__ FUNC_17 (scalar_t__,int *,int ) ;
 int FUNC_18 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_19(AVFormatContext *VAR_2)
{
    AndroidCameraCtx *VAR_3 = VAR_2->priv_data;

    FUNC_13(&VAR_3->exit, 1);

    if (VAR_3->capture_session) {
        FUNC_1(VAR_3->capture_session);



        FUNC_0(VAR_3->capture_session);
        VAR_3->capture_session = ((void*)0);
    }

    if (VAR_3->capture_request) {
        FUNC_7(VAR_3->capture_request, VAR_3->camera_output_target);
        FUNC_6(VAR_3->capture_request);
        VAR_3->capture_request = ((void*)0);
    }

    if (VAR_3->camera_output_target) {
        FUNC_5(VAR_3->camera_output_target);
        VAR_3->camera_output_target = ((void*)0);
    }

    if (VAR_3->capture_session_output) {
        FUNC_9(VAR_3->capture_session_output_container,
                VAR_3->capture_session_output);
        FUNC_10(VAR_3->capture_session_output);
        VAR_3->capture_session_output = ((void*)0);
    }

    if (VAR_3->image_reader_window) {
        FUNC_12(VAR_3->image_reader_window);
        VAR_3->image_reader_window = ((void*)0);
    }

    if (VAR_3->capture_session_output_container) {
        FUNC_8(VAR_3->capture_session_output_container);
        VAR_3->capture_session_output_container = ((void*)0);
    }

    if (VAR_3->camera_dev) {
        FUNC_2(VAR_3->camera_dev);
        VAR_3->camera_dev = ((void*)0);
    }

    if (VAR_3->image_reader) {
        FUNC_11(VAR_3->image_reader);
        VAR_3->image_reader = ((void*)0);
    }

    if (VAR_3->camera_metadata) {
        FUNC_4(VAR_3->camera_metadata);
        VAR_3->camera_metadata = ((void*)0);
    }

    FUNC_14(&VAR_3->camera_id);

    if (VAR_3->camera_mgr) {
        FUNC_3(VAR_3->camera_mgr);
        VAR_3->camera_mgr = ((void*)0);
    }

    if (VAR_3->input_queue) {
        AVPacket VAR_4;
        FUNC_18(VAR_3->input_queue, VAR_0);
        while (FUNC_17(VAR_3->input_queue, &VAR_4, VAR_1) >= 0) {
            FUNC_15(&VAR_4);
        }
        FUNC_16(&VAR_3->input_queue);
    }

    return 0;
}
