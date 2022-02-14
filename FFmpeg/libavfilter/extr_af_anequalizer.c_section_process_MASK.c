
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double b0; int b1; int* num; int* denum; int a1; int b2; int a2; int b3; int a3; int b4; int a4; } ;
typedef TYPE_1__ FoSection ;



__attribute__((used)) static inline double FUNC_0(FoSection *VAR_0, double VAR_1)
{
    double VAR_2;

    VAR_2 = VAR_0->b0 * VAR_1;
    VAR_2+= VAR_0->b1 * VAR_0->num[0] - VAR_0->denum[0] * VAR_0->a1;
    VAR_2+= VAR_0->b2 * VAR_0->num[1] - VAR_0->denum[1] * VAR_0->a2;
    VAR_2+= VAR_0->b3 * VAR_0->num[2] - VAR_0->denum[2] * VAR_0->a3;
    VAR_2+= VAR_0->b4 * VAR_0->num[3] - VAR_0->denum[3] * VAR_0->a4;

    VAR_0->num[3] = VAR_0->num[2];
    VAR_0->num[2] = VAR_0->num[1];
    VAR_0->num[1] = VAR_0->num[0];
    VAR_0->num[0] = VAR_1;

    VAR_0->denum[3] = VAR_0->denum[2];
    VAR_0->denum[2] = VAR_0->denum[1];
    VAR_0->denum[1] = VAR_0->denum[0];
    VAR_0->denum[0] = VAR_2;

    return VAR_2;
}
