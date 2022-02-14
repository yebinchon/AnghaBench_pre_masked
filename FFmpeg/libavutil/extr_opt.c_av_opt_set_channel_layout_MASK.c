
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ type; int offset; int name; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,char*,int ) ;
 TYPE_1__* FUNC_2 (void*,char const*,int *,int ,int,void**) ;

int FUNC_3(void *VAR_4, const char *VAR_5, int64_t VAR_6, int VAR_7)
{
    void *VAR_8;
    const AVOption *VAR_9 = FUNC_2(VAR_4, VAR_5, ((void*)0), 0, VAR_7, &VAR_8);

    if (!VAR_9 || !VAR_8)
        return VAR_0;
    if (VAR_9->type != VAR_2) {
        FUNC_1(VAR_4, VAR_1,
               "The value set by option '%s' is not a channel layout.\n", VAR_9->name);
        return FUNC_0(VAR_3);
    }
    *(int64_t *)(((uint8_t *)VAR_8) + VAR_9->offset) = VAR_6;
    return 0;
}
