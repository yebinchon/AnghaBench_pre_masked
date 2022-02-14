
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (void*,int ,char*,char const*) ;
 int FUNC_4 (char const*,char**,int ) ;

int FUNC_5(int *VAR_3, const char *VAR_4, void *VAR_5)
{
    char *VAR_6;
    int VAR_7 = FUNC_2(VAR_4);
    if (VAR_7 == VAR_1) {
        VAR_7 = FUNC_4(VAR_4, &VAR_6, 0);
        if (*VAR_6 || FUNC_1(VAR_7)<=0) {
            FUNC_3(VAR_5, VAR_0, "Invalid sample format '%s'\n", VAR_4);
            return FUNC_0(VAR_2);
        }
    }
    *VAR_3 = VAR_7;
    return 0;
}
