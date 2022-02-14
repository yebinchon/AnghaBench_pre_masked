
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {int hw_frames_ctx; } ;
struct TYPE_11__ {int initial_pool_size; int height; int width; int sw_format; int format; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 char* FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_6, AVBufferRef *VAR_7)
{
    AVBufferRef *VAR_8;
    AVHWFramesContext *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (!(VAR_8 = FUNC_4(VAR_7))) {
        FUNC_6(VAR_4, "Failed to create VAAPI frame context.\n");
        return -1;
    }
    VAR_9 = (AVHWFramesContext *)(VAR_8->data);
    VAR_9->format = VAR_1;
    VAR_9->sw_format = VAR_0;
    VAR_9->width = VAR_5;
    VAR_9->height = VAR_3;
    VAR_9->initial_pool_size = 20;
    if ((VAR_10 = FUNC_5(VAR_8)) < 0) {
        FUNC_6(VAR_4, "Failed to initialize VAAPI frame context."
                "Error code: %s\n",FUNC_3(VAR_10));
        FUNC_2(&VAR_8);
        return VAR_10;
    }
    VAR_6->hw_frames_ctx = FUNC_1(VAR_8);
    if (!VAR_6->hw_frames_ctx)
        VAR_10 = FUNC_0(VAR_2);

    FUNC_2(&VAR_8);
    return VAR_10;
}
