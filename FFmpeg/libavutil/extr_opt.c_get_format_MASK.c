
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVOptionType { ____Placeholder_AVOptionType } AVOptionType ;
struct TYPE_3__ {int type; int offset; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,char*,char const*,char const*) ;
 TYPE_1__* FUNC_2 (void*,char const*,int *,int ,int,void**) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, const char *VAR_4, int VAR_5, int *VAR_6,
                      enum AVOptionType VAR_7, const char *VAR_8)
{
    void *VAR_9, *VAR_10;
    const AVOption *VAR_11 = FUNC_2(VAR_3, VAR_4, ((void*)0), 0, VAR_5, &VAR_10);
    if (!VAR_11 || !VAR_10)
        return VAR_0;
    if (VAR_11->type != VAR_7) {
        FUNC_1(VAR_3, VAR_1,
               "The value for option '%s' is not a %s format.\n", VAR_8, VAR_4);
        return FUNC_0(VAR_2);
    }

    VAR_9 = ((uint8_t*)VAR_10) + VAR_11->offset;
    *VAR_6 = *(int *)VAR_9;
    return 0;
}
