
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ type; int offset; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 TYPE_1__* FUNC_2 (void*,char const*,int *,int ,int,void**) ;

int FUNC_3(void *VAR_4, const char *VAR_5, int VAR_6, int64_t *VAR_7)
{
    void *VAR_8, *VAR_9;
    const AVOption *VAR_10 = FUNC_2(VAR_4, VAR_5, ((void*)0), 0, VAR_6, &VAR_9);
    if (!VAR_10 || !VAR_9)
        return VAR_0;
    if (VAR_10->type != VAR_2) {
        FUNC_1(VAR_4, VAR_1,
               "The value for option '%s' is not a channel layout.\n", VAR_5);
        return FUNC_0(VAR_3);
    }

    VAR_8 = ((uint8_t*)VAR_9) + VAR_10->offset;
    *VAR_7 = *(int64_t *)VAR_8;
    return 0;
}
