
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stride; scalar_t__ pixel_ptr; int stream_ptr; int avctx; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,unsigned char,int) ;

__attribute__((used)) static int FUNC_4(IpvideoContext *VAR_2, AVFrame *VAR_3)
{
    int VAR_4;
    unsigned char VAR_5[2];

    if (FUNC_2(&VAR_2->stream_ptr) < 4) {
        FUNC_0(VAR_2->avctx, VAR_1, "too little data for opcode 0xD\n");
        return VAR_0;
    }


    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        if (!(VAR_4 & 3)) {
            VAR_5[0] = FUNC_1(&VAR_2->stream_ptr);
            VAR_5[1] = FUNC_1(&VAR_2->stream_ptr);
        }
        FUNC_3(VAR_2->pixel_ptr, VAR_5[0], 4);
        FUNC_3(VAR_2->pixel_ptr + 4, VAR_5[1], 4);
        VAR_2->pixel_ptr += VAR_2->stride;
    }


    return 0;
}
