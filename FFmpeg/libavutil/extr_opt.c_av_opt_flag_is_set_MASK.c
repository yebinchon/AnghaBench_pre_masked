
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int i64; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ default_val; int * unit; } ;
typedef TYPE_2__ AVOption ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (void*,char const*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (void*,char const*,int ,int*) ;

int FUNC_2(void *VAR_1, const char *VAR_2, const char *VAR_3)
{
    const AVOption *VAR_4 = FUNC_0(VAR_1, VAR_2, ((void*)0), 0, 0);
    const AVOption *VAR_5 = FUNC_0(VAR_1, VAR_3,
                                        VAR_4 ? VAR_4->unit : ((void*)0), 0, 0);
    int64_t VAR_6;

    if (!VAR_4 || !VAR_5 || VAR_5->type != VAR_0 ||
        FUNC_1(VAR_1, VAR_2, 0, &VAR_6) < 0)
        return 0;
    return VAR_6 & VAR_5->default_val.i64;
}
