
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ hw_frames_ctx; scalar_t__ pixbuf; } ;
typedef TYPE_2__ VTHWFrame ;
struct TYPE_8__ {int hw_frames_ctx; int ** data; scalar_t__ crop_bottom; scalar_t__ crop_top; scalar_t__ crop_left; scalar_t__ crop_right; TYPE_1__** buf; } ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (void*,int ,char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, AVFrame *VAR_4)
{
    VTHWFrame *VAR_5 = (VTHWFrame *)VAR_4->buf[0]->data;

    if (!VAR_5->pixbuf) {
        FUNC_4(VAR_3, VAR_1, "No frame decoded?\n");
        FUNC_3(VAR_4);
        return VAR_0;
    }

    VAR_4->crop_right = 0;
    VAR_4->crop_left = 0;
    VAR_4->crop_top = 0;
    VAR_4->crop_bottom = 0;

    VAR_4->data[3] = (uint8_t*)VAR_5->pixbuf;

    if (VAR_5->hw_frames_ctx) {
        FUNC_2(&VAR_4->hw_frames_ctx);
        VAR_4->hw_frames_ctx = FUNC_1(VAR_5->hw_frames_ctx);
        if (!VAR_4->hw_frames_ctx)
            return FUNC_0(VAR_2);
    }

    return 0;
}
