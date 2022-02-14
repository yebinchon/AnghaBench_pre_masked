
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int priv; TYPE_1__* filter; } ;
struct TYPE_4__ {int priv_class; } ;
typedef int AVOption ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,char const*,int *,int,int ,int *) ;
 int FUNC_2 (int ,char const*,char const*,int ) ;

int FUNC_3(AVFilterContext *VAR_4, const char *VAR_5,
                              const char *VAR_6, char *VAR_7, int VAR_8, int VAR_9)
{
    const AVOption *VAR_10;

    if (!VAR_4->filter->priv_class)
        return 0;
    VAR_10 = FUNC_1(VAR_4->priv, VAR_5, ((void*)0), VAR_1 | VAR_0, VAR_2, ((void*)0));
    if (!VAR_10)
        return FUNC_0(VAR_3);
    return FUNC_2(VAR_4->priv, VAR_5, VAR_6, 0);
}
