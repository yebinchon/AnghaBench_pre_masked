
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* pixel_ptr; int stride; int stream_ptr; int line_inc; int avctx; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(IpvideoContext *VAR_2, AVFrame *VAR_3)
{
    int VAR_4, VAR_5;
    unsigned char VAR_6[2];
    unsigned int VAR_7;

    if (FUNC_2(&VAR_2->stream_ptr) < 4) {
        FUNC_0(VAR_2->avctx, VAR_1, "too little data for opcode 0x7\n");
        return VAR_0;
    }


    VAR_6[0] = FUNC_1(&VAR_2->stream_ptr);
    VAR_6[1] = FUNC_1(&VAR_2->stream_ptr);

    if (VAR_6[0] <= VAR_6[1]) {


        for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
            VAR_7 = FUNC_1(&VAR_2->stream_ptr) | 0x100;
            for (; VAR_7 != 1; VAR_7 >>= 1)
                *VAR_2->pixel_ptr++ = VAR_6[VAR_7 & 1];
            VAR_2->pixel_ptr += VAR_2->line_inc;
        }

    } else {


        VAR_7 = FUNC_3(&VAR_2->stream_ptr);
        for (VAR_5 = 0; VAR_5 < 8; VAR_5 += 2) {
            for (VAR_4 = 0; VAR_4 < 8; VAR_4 += 2, VAR_7 >>= 1) {
                VAR_2->pixel_ptr[VAR_4 ] =
                VAR_2->pixel_ptr[VAR_4 + 1 ] =
                VAR_2->pixel_ptr[VAR_4 + VAR_2->stride] =
                VAR_2->pixel_ptr[VAR_4 + 1 + VAR_2->stride] = VAR_6[VAR_7 & 1];
            }
            VAR_2->pixel_ptr += VAR_2->stride * 2;
        }
    }


    return 0;
}
