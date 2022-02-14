
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int stride; int uvstride; int *** ref; int *** src; } ;
typedef TYPE_1__ MotionEstContext ;



__attribute__((used)) static inline void FUNC_0(MotionEstContext *VAR_0, uint8_t *VAR_1[3], uint8_t *VAR_2[3], uint8_t *VAR_3[3], int VAR_4, int VAR_5, int VAR_6){
    const int VAR_7[3]= {
          VAR_5*VAR_0-> stride + VAR_4,
        ((VAR_5*VAR_0->uvstride + VAR_4)>>1),
        ((VAR_5*VAR_0->uvstride + VAR_4)>>1),
    };
    int VAR_8;
    for(VAR_8=0; VAR_8<3; VAR_8++){
        VAR_0->src[0][VAR_8]= VAR_1 [VAR_8] + VAR_7[VAR_8];
        VAR_0->ref[0][VAR_8]= VAR_2 [VAR_8] + VAR_7[VAR_8];
    }
    if(VAR_6){
        for(VAR_8=0; VAR_8<3; VAR_8++){
            VAR_0->ref[VAR_6][VAR_8]= VAR_3[VAR_8] + VAR_7[VAR_8];
        }
    }
}
