
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ AVOption ;


 TYPE_1__* FUNC_0 (void*,char const*,char const*,int,int) ;

__attribute__((used)) static const AVOption *FUNC_1(void *VAR_0, const char *VAR_1, const char *VAR_2,
                            int VAR_3, int VAR_4)
{
    const AVOption *VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if(VAR_5 && !VAR_5->flags)
        return ((void*)0);
    return VAR_5;
}
