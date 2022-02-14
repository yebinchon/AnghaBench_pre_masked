
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
typedef TYPE_1__ TInterlaceContext ;
typedef TYPE_2__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_2)
{
    TInterlaceContext *VAR_3 = VAR_2->priv;

    if (VAR_3->mode <= VAR_0)
        VAR_3->mode += VAR_1;

    return 0;
}
