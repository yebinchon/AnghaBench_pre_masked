
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf2 ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char const*,char const*) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1)
{
    char VAR_2[200], VAR_3[200];
    FUNC_1(VAR_2, sizeof(VAR_2), VAR_0, VAR_1);
    FUNC_2("%s\n", VAR_2);
    if (VAR_0) {

        FUNC_3(VAR_3, sizeof(VAR_3), "%s", VAR_0);
        FUNC_1(VAR_3, sizeof(VAR_3), VAR_3, VAR_1);
        if (FUNC_4(VAR_2, VAR_3)) {
            FUNC_2("In-place handling of %s + %s failed\n", VAR_0, VAR_1);
            FUNC_0(1);
        }
    }
}
