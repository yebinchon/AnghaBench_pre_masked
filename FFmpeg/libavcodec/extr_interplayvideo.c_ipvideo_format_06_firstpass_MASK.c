
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int second_last_frame; TYPE_1__* avctx; scalar_t__ stride; int pixel_ptr; int stream_ptr; } ;
struct TYPE_5__ {int frame_number; } ;
typedef TYPE_2__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(IpvideoContext *VAR_0, AVFrame *VAR_1, int16_t VAR_2)
{
    int VAR_3;

    if (!VAR_2) {
        for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
            FUNC_0(&VAR_0->stream_ptr, VAR_0->pixel_ptr, 8);
            VAR_0->pixel_ptr += VAR_0->stride;
        }
    } else {

        if (VAR_0->avctx->frame_number > 2)
            FUNC_1(VAR_0, VAR_0->second_last_frame, VAR_1, 0, 0);
    }
}
