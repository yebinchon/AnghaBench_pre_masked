
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int stride; int stream_ptr; int line_inc; scalar_t__ pixel_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    uint16_t VAR_4[2];
    unsigned int VAR_5;
    uint16_t *VAR_6 = (uint16_t*)VAR_0->pixel_ptr;


    VAR_4[0] = FUNC_1(&VAR_0->stream_ptr);
    VAR_4[1] = FUNC_1(&VAR_0->stream_ptr);

    if (!(VAR_4[0] & 0x8000)) {

        for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
            VAR_5 = FUNC_0(&VAR_0->stream_ptr) | 0x100;
            for (; VAR_5 != 1; VAR_5 >>= 1)
                *VAR_6++ = VAR_4[VAR_5 & 1];
            VAR_6 += VAR_0->line_inc;
        }

    } else {

        VAR_5 = FUNC_1(&VAR_0->stream_ptr);
        for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
            for (VAR_2 = 0; VAR_2 < 8; VAR_2 += 2, VAR_5 >>= 1) {
                VAR_6[VAR_2 ] =
                VAR_6[VAR_2 + 1 ] =
                VAR_6[VAR_2 + VAR_0->stride] =
                VAR_6[VAR_2 + 1 + VAR_0->stride] = VAR_4[VAR_5 & 1];
            }
            VAR_6 += VAR_0->stride * 2;
        }
    }

    return 0;
}
