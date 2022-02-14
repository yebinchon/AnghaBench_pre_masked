
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stride; scalar_t__** src; scalar_t__** ref; } ;
typedef TYPE_1__ MotionEstContext ;



__attribute__((used)) static inline void FUNC_0(MotionEstContext *VAR_0){
    const int VAR_1= VAR_0->stride;

    VAR_0->ref[1][0] = VAR_0->ref[0][0] + 8;
    VAR_0->ref[2][0] = VAR_0->ref[0][0] + 8*VAR_1;
    VAR_0->ref[3][0] = VAR_0->ref[2][0] + 8;
    VAR_0->src[1][0] = VAR_0->src[0][0] + 8;
    VAR_0->src[2][0] = VAR_0->src[0][0] + 8*VAR_1;
    VAR_0->src[3][0] = VAR_0->src[2][0] + 8;
}
