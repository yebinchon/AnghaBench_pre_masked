
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVOptionType { ____Placeholder_AVOptionType } AVOptionType ;
struct TYPE_3__ {int type; int offset; int max; int min; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (void*,int ,char*,...) ;
 TYPE_1__* FUNC_4 (void*,char const*,int *,int ,int,void**) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, const char *VAR_5, int VAR_6, int VAR_7,
                      enum AVOptionType VAR_8, const char *VAR_9, int VAR_10)
{
    void *VAR_11;
    const AVOption *VAR_12 = FUNC_4(VAR_4, VAR_5, ((void*)0), 0,
                                     VAR_7, &VAR_11);
    int VAR_13, VAR_14;

    if (!VAR_12 || !VAR_11)
        return VAR_0;
    if (VAR_12->type != VAR_8) {
        FUNC_3(VAR_4, VAR_1,
               "The value set by option '%s' is not a %s format", VAR_5, VAR_9);
        return FUNC_0(VAR_2);
    }

    VAR_13 = FUNC_1(VAR_12->min, -1);
    VAR_14 = FUNC_2(VAR_12->max, VAR_10-1);

    if (VAR_6 < VAR_13 || VAR_6 > VAR_14) {
        FUNC_3(VAR_4, VAR_1,
               "Value %d for parameter '%s' out of %s format range [%d - %d]\n",
               VAR_6, VAR_5, VAR_9, VAR_13, VAR_14);
        return FUNC_0(VAR_3);
    }
    *(int *)(((uint8_t *)VAR_11) + VAR_12->offset) = VAR_6;
    return 0;
}
