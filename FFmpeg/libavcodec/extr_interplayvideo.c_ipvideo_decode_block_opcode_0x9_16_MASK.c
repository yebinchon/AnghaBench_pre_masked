
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int stride; int stream_ptr; int line_inc; scalar_t__ pixel_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    uint16_t VAR_4[4];
    uint16_t *VAR_5 = (uint16_t*)VAR_0->pixel_ptr;


    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
        VAR_4[VAR_2] = FUNC_0(&VAR_0->stream_ptr);

    if (!(VAR_4[0] & 0x8000)) {
        if (!(VAR_4[2] & 0x8000)) {


            for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {

                int VAR_6 = FUNC_0(&VAR_0->stream_ptr);
                for (VAR_2 = 0; VAR_2 < 8; VAR_2++, VAR_6 >>= 2)
                    *VAR_5++ = VAR_4[VAR_6 & 0x03];
                VAR_5 += VAR_0->line_inc;
            }

        } else {
            uint32_t VAR_7;


            VAR_7 = FUNC_1(&VAR_0->stream_ptr);

            for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
                for (VAR_2 = 0; VAR_2 < 8; VAR_2 += 2, VAR_7 >>= 2) {
                    VAR_5[VAR_2 ] =
                    VAR_5[VAR_2 + 1 ] =
                    VAR_5[VAR_2 + VAR_0->stride] =
                    VAR_5[VAR_2 + 1 + VAR_0->stride] = VAR_4[VAR_7 & 0x03];
                }
                VAR_5 += VAR_0->stride * 2;
            }

        }
    } else {
        uint64_t VAR_8;


        VAR_8 = FUNC_2(&VAR_0->stream_ptr);
        if (!(VAR_4[2] & 0x8000)) {
            for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
                for (VAR_2 = 0; VAR_2 < 8; VAR_2 += 2, VAR_8 >>= 2) {
                    VAR_5[VAR_2 ] =
                    VAR_5[VAR_2 + 1] = VAR_4[VAR_8 & 0x03];
                }
                VAR_5 += VAR_0->stride;
            }
        } else {
            for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
                for (VAR_2 = 0; VAR_2 < 8; VAR_2++, VAR_8 >>= 2) {
                    VAR_5[VAR_2 ] =
                    VAR_5[VAR_2 + VAR_0->stride] = VAR_4[VAR_8 & 0x03];
                }
                VAR_5 += VAR_0->stride * 2;
            }
        }
    }


    return 0;
}
