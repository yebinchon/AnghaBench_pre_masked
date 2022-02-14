
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* src; } ;
struct TYPE_6__ {int ppsrc; int const eof; } ;
typedef TYPE_1__ DecimateContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_3)
{
    int VAR_4;
    AVFilterContext *VAR_5 = VAR_3->src;
    DecimateContext *VAR_6 = VAR_5->priv;
    const uint32_t VAR_7 = 1<<VAR_2 | VAR_6->ppsrc<<VAR_1;

    if ((VAR_6->eof & VAR_7) == VAR_7)
        return VAR_0;
    if ((VAR_4 = FUNC_0(VAR_5, VAR_2)) < 0)
        return VAR_4;
    if (VAR_6->ppsrc && (VAR_4 = FUNC_0(VAR_5, VAR_1)) < 0)
        return VAR_4;
    return 0;
}
