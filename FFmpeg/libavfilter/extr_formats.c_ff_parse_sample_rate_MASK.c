
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 double FUNC_2 (char const*,char**) ;

int FUNC_3(int *VAR_3, const char *VAR_4, void *VAR_5)
{
    char *VAR_6;
    double VAR_7 = FUNC_2(VAR_4, &VAR_6);
    if (*VAR_6 || VAR_7 < 1 || (int)VAR_7 != VAR_7 || VAR_7 > VAR_2) {
        FUNC_1(VAR_5, VAR_0, "Invalid sample rate '%s'\n", VAR_4);
        return FUNC_0(VAR_1);
    }
    *VAR_3 = VAR_7;
    return 0;
}
