
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_8__ {TYPE_5__ frame_rate; TYPE_1__* dst; } ;
struct TYPE_7__ {scalar_t__* var_values; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_2__ EQContext ;
typedef TYPE_3__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_3)
{
    EQContext *VAR_4 = VAR_3->dst->priv;

    VAR_4->var_values[VAR_1] = 0;
    VAR_4->var_values[VAR_2] = VAR_3->frame_rate.num == 0 || VAR_3->frame_rate.den == 0 ?
        VAR_0 : FUNC_0(VAR_3->frame_rate);

    return 0;
}
