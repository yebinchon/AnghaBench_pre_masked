
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ SSIMContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0)
{
    SSIMContext *VAR_1 = VAR_0->priv;
    return FUNC_0(&VAR_1->fs);
}
