
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* weights; size_t num_syms; int* cum_prob; } ;
typedef TYPE_1__ Model ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(Model *VAR_0)
{
    int VAR_1;

    VAR_1 = 2 * VAR_0->weights[VAR_0->num_syms] - 1;
    VAR_1 = ((VAR_1 >> 1) + 4 * VAR_0->cum_prob[0]) / VAR_1;

    return FUNC_0(VAR_1, 0x3FFF);
}
