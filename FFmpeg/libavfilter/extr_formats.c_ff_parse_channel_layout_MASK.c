
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,scalar_t__*,int*) ;
 int FUNC_2 (void*,int ,char*,char const*) ;

int FUNC_3(int64_t *VAR_2, int *VAR_3, const char *VAR_4,
                            void *VAR_5)
{
    int64_t VAR_6;
    int VAR_7;

    if (FUNC_1(VAR_4, &VAR_6, &VAR_7) < 0) {
        FUNC_2(VAR_5, VAR_0, "Invalid channel layout '%s'\n", VAR_4);
        return FUNC_0(VAR_1);
    }
    if (!VAR_6 && !VAR_3) {
        FUNC_2(VAR_5, VAR_0, "Unknown channel layout '%s' is not supported.\n", VAR_4);
        return FUNC_0(VAR_1);
    }
    *VAR_2 = VAR_6;
    if (VAR_3)
        *VAR_3 = VAR_7;

    return 0;
}
