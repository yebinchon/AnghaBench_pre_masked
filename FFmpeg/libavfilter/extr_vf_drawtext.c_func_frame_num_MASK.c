
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__* var_values; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVBPrint ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_1, AVBPrint *VAR_2,
                          char *VAR_3, unsigned VAR_4, char **VAR_5, int VAR_6)
{
    DrawTextContext *VAR_7 = VAR_1->priv;

    FUNC_0(VAR_2, "%d", (int)VAR_7->var_values[VAR_0]);
    return 0;
}
