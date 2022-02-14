
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {scalar_t__ stride; int pixel_ptr; int stream_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(IpvideoContext *VAR_0, AVFrame *VAR_1, int16_t VAR_2)
{
    int VAR_3;

    if (!VAR_2) {
        for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
            FUNC_0(&VAR_0->stream_ptr, VAR_0->pixel_ptr, 8);
            VAR_0->pixel_ptr += VAR_0->stride;
        }
    }
}
