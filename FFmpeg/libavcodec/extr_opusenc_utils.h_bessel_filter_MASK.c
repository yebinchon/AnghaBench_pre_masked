
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* x; int* y; int* a; int* b; } ;
typedef TYPE_1__ FFBesselFilter ;



__attribute__((used)) static inline float FUNC_0(FFBesselFilter *VAR_0, float VAR_1)
{
    VAR_0->x[2] = VAR_0->x[1];
    VAR_0->x[1] = VAR_0->x[0];
    VAR_0->x[0] = VAR_1;
    VAR_0->y[2] = VAR_0->y[1];
    VAR_0->y[1] = VAR_0->y[0];
    VAR_0->y[0] = VAR_0->a[0]*VAR_0->x[0] + VAR_0->a[1]*VAR_0->x[1] + VAR_0->a[2]*VAR_0->x[2] + VAR_0->b[0]*VAR_0->y[1] + VAR_0->b[1]*VAR_0->y[2];
    return VAR_0->y[0];
}
