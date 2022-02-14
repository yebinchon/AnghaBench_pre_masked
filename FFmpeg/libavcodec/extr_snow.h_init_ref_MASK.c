
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int stride; int uvstride; int *** ref; int *** src; TYPE_1__* avctx; } ;
struct TYPE_6__ {int chroma_h_shift; } ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ SnowContext ;
typedef TYPE_3__ MotionEstContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(MotionEstContext *VAR_0, uint8_t *VAR_1[3], uint8_t *VAR_2[3], uint8_t *VAR_3[3], int VAR_4, int VAR_5, int VAR_6){
    SnowContext *VAR_7 = VAR_0->avctx->priv_data;
    const int VAR_8[3]= {
          VAR_5*VAR_0-> stride + VAR_4,
        ((VAR_5*VAR_0->uvstride + VAR_4)>>VAR_7->chroma_h_shift),
        ((VAR_5*VAR_0->uvstride + VAR_4)>>VAR_7->chroma_h_shift),
    };
    int VAR_9;
    for(VAR_9=0; VAR_9<3; VAR_9++){
        VAR_0->src[0][VAR_9]= VAR_1 [VAR_9];
        VAR_0->ref[0][VAR_9]= VAR_2 [VAR_9] + VAR_8[VAR_9];
    }
    FUNC_0(!VAR_6);
}
