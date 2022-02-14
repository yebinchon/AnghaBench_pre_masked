
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int stride; int stream_ptr; scalar_t__ pixel_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    uint16_t *VAR_4 = (uint16_t*)VAR_0->pixel_ptr;


    for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
        for (VAR_2 = 0; VAR_2 < 8; VAR_2 += 2) {
            VAR_4[VAR_2 ] =
            VAR_4[VAR_2 + 1 ] =
            VAR_4[VAR_2 + VAR_0->stride] =
            VAR_4[VAR_2 + 1 + VAR_0->stride] = FUNC_0(&VAR_0->stream_ptr);
        }
        VAR_4 += VAR_0->stride * 2;
    }


    return 0;
}
