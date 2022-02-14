
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int name; int max; int min; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, const AVOption *VAR_4, const char *VAR_5, uint8_t *VAR_6,
                          int VAR_7, int ((*VAR_8)(const char *)), const char *VAR_9)
{
    int VAR_10, VAR_11, VAR_12;

    if (!VAR_5 || !FUNC_4(VAR_5, "none")) {
        VAR_10 = -1;
    } else {
        VAR_10 = VAR_8(VAR_5);
        if (VAR_10 == -1) {
            char *VAR_13;
            VAR_10 = FUNC_5(VAR_5, &VAR_13, 0);
            if (*VAR_13 || (unsigned)VAR_10 >= VAR_7) {
                FUNC_3(VAR_3, VAR_0,
                       "Unable to parse option value \"%s\" as %s\n", VAR_5, VAR_9);
                return FUNC_0(VAR_1);
            }
        }
    }

    VAR_11 = FUNC_1(VAR_4->min, -1);
    VAR_12 = FUNC_2(VAR_4->max, VAR_7-1);


    if(VAR_11 == 0 && VAR_12 == 0) {
        VAR_11 = -1;
        VAR_12 = VAR_7-1;
    }

    if (VAR_10 < VAR_11 || VAR_10 > VAR_12) {
        FUNC_3(VAR_3, VAR_0,
               "Value %d for parameter '%s' out of %s format range [%d - %d]\n",
               VAR_10, VAR_4->name, VAR_9, VAR_11, VAR_12);
        return FUNC_0(VAR_2);
    }

    *(int *)VAR_6 = VAR_10;
    return 0;
}
