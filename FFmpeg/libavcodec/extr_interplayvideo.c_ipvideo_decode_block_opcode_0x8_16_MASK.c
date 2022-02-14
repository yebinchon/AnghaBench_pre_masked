
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int stride; int line_inc; int stream_ptr; scalar_t__ pixel_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 void* FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    uint16_t VAR_4[4];
    unsigned int VAR_5 = 0;
    uint16_t *VAR_6 = (uint16_t*)VAR_0->pixel_ptr;



    VAR_4[0] = FUNC_0(&VAR_0->stream_ptr);
    VAR_4[1] = FUNC_0(&VAR_0->stream_ptr);

    if (!(VAR_4[0] & 0x8000)) {

        for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {

            if (!(VAR_3 & 3)) {
                if (VAR_3) {
                    VAR_4[0] = FUNC_0(&VAR_0->stream_ptr);
                    VAR_4[1] = FUNC_0(&VAR_0->stream_ptr);
                }
                VAR_5 = FUNC_0(&VAR_0->stream_ptr);
            }

            for (VAR_2 = 0; VAR_2 < 4; VAR_2++, VAR_5 >>= 1)
                *VAR_6++ = VAR_4[VAR_5 & 1];
            VAR_6 += VAR_0->stride - 4;

            if (VAR_3 == 7) VAR_6 -= 8 * VAR_0->stride - 4;
        }

    } else {

        VAR_5 = FUNC_1(&VAR_0->stream_ptr);
        VAR_4[2] = FUNC_0(&VAR_0->stream_ptr);
        VAR_4[3] = FUNC_0(&VAR_0->stream_ptr);

        if (!(VAR_4[2] & 0x8000)) {



            for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
                for (VAR_2 = 0; VAR_2 < 4; VAR_2++, VAR_5 >>= 1)
                    *VAR_6++ = VAR_4[VAR_5 & 1];
                VAR_6 += VAR_0->stride - 4;

                if (VAR_3 == 7) {
                    VAR_6 -= 8 * VAR_0->stride - 4;
                    VAR_4[0] = VAR_4[2];
                    VAR_4[1] = VAR_4[3];
                    VAR_5 = FUNC_1(&VAR_0->stream_ptr);
                }
            }

        } else {



            for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
                if (VAR_3 == 4) {
                    VAR_4[0] = VAR_4[2];
                    VAR_4[1] = VAR_4[3];
                    VAR_5 = FUNC_1(&VAR_0->stream_ptr);
                }

                for (VAR_2 = 0; VAR_2 < 8; VAR_2++, VAR_5 >>= 1)
                    *VAR_6++ = VAR_4[VAR_5 & 1];
                VAR_6 += VAR_0->line_inc;
            }
        }
    }


    return 0;
}
