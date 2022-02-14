
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int nb_iterations; int kernel; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_1__ OCVContext ;
typedef int IplImage ;
typedef TYPE_2__ DilateContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0, IplImage *VAR_1, IplImage *VAR_2)
{
    OCVContext *VAR_3 = VAR_0->priv;
    DilateContext *VAR_4 = VAR_3->priv;
    FUNC_0(VAR_1, VAR_2, VAR_4->kernel, VAR_4->nb_iterations);
}
