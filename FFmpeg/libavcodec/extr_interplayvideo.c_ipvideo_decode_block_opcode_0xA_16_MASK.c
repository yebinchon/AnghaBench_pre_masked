
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_3__ {int stride; int stream_ptr; int line_inc; scalar_t__ pixel_ptr; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static int FUNC_4(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    uint16_t VAR_4[8];
    int VAR_5 = 0;
    uint16_t *VAR_6 = (uint16_t*)VAR_0->pixel_ptr;

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
        VAR_4[VAR_2] = FUNC_0(&VAR_0->stream_ptr);



    if (!(VAR_4[0] & 0x8000)) {


        for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {

            if (!(VAR_3 & 3)) {
                if (VAR_3)
                    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
                        VAR_4[VAR_2] = FUNC_0(&VAR_0->stream_ptr);
                VAR_5 = FUNC_1(&VAR_0->stream_ptr);
            }

            for (VAR_2 = 0; VAR_2 < 4; VAR_2++, VAR_5 >>= 2)
                *VAR_6++ = VAR_4[VAR_5 & 0x03];

            VAR_6 += VAR_0->stride - 4;

            if (VAR_3 == 7) VAR_6 -= 8 * VAR_0->stride - 4;
        }

    } else {

        int VAR_7;
        uint64_t VAR_8 = FUNC_2(&VAR_0->stream_ptr);

        for (VAR_2 = 4; VAR_2 < 8; VAR_2++)
            VAR_4[VAR_2] = FUNC_0(&VAR_0->stream_ptr);
        VAR_7 = !(VAR_4[4] & 0x8000);




        for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
            for (VAR_2 = 0; VAR_2 < 4; VAR_2++, VAR_8 >>= 2)
                *VAR_6++ = VAR_4[VAR_8 & 0x03];

            if (VAR_7) {
                VAR_6 += VAR_0->stride - 4;

                if (VAR_3 == 7) VAR_6 -= 8 * VAR_0->stride - 4;
            } else if (VAR_3 & 1) VAR_6 += VAR_0->line_inc;


            if (VAR_3 == 7) {
                FUNC_3(VAR_4, VAR_4 + 4, 8);
                VAR_8 = FUNC_2(&VAR_0->stream_ptr);
            }
        }
    }


    return 0;
}
