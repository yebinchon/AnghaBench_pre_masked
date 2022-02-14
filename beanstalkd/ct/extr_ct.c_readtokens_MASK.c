
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int VAR_3 ;
 char* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char**,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5()
{
    int VAR_5 = 1;
    char VAR_6, *VAR_7;
    char *VAR_8 = FUNC_1("MAKEFLAGS");
    if (VAR_8 == ((void*)0))
        return VAR_5;
    if ((VAR_7 = FUNC_3(VAR_8, " --jobserver-fds="))) {
        VAR_3 = (int)FUNC_4(VAR_7+17, &VAR_7, 10);
        VAR_4 = (int)FUNC_4(VAR_7+1, ((void*)0), 10);
    }
    if (VAR_3 >= 0) {
        FUNC_0(VAR_3, VAR_1, FUNC_0(VAR_3, VAR_0)|VAR_2);
        while (FUNC_2(VAR_3, &VAR_6, 1) > 0) {
            VAR_5++;
        }
    }
    return VAR_5;
}
