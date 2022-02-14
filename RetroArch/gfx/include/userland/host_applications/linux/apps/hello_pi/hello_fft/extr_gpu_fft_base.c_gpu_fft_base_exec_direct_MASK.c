
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GPU_FFT_BASE {int* peri; int* vc_unifs; int vc_code; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

unsigned FUNC_0 (
    struct GPU_FFT_BASE *VAR_8,
    int VAR_9) {

    unsigned VAR_10, VAR_11;

    VAR_8->peri[VAR_0] = 0;
    VAR_8->peri[VAR_2] = 0;
    VAR_8->peri[VAR_1] = -1;

    VAR_8->peri[VAR_3] = 1<<2;
    VAR_8->peri[VAR_4] = -1;

    VAR_8->peri[VAR_5] = (1<<7) | (1<<8) | (1<<16);

    for (VAR_10=0; VAR_10<VAR_9; VAR_10++) {
        VAR_8->peri[VAR_7] = VAR_8->vc_unifs[VAR_10];
        VAR_8->peri[VAR_6] = VAR_8->vc_code;
    }


    for (;;) {
        if (((VAR_8->peri[VAR_5]>>16) & 0xff) == VAR_9) break;
    }

    return 0;
}
