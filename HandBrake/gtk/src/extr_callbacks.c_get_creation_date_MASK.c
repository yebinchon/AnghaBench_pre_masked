
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
struct stat {int st_mtime; } ;


 scalar_t__ FUNC_0 (char const*,struct stat*) ;
 struct tm* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,struct tm*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char const*,struct tm*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char*
FUNC_6(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
    char VAR_3[11] = "";
    if (VAR_1 != ((void*)0) && FUNC_5(VAR_1) > 1)
    {
        struct tm VAR_4;
        if (FUNC_2(VAR_1, &VAR_4))
        {
            FUNC_4(VAR_3, 11, VAR_0, &VAR_4);
        }
    }
    else
    {
        struct stat VAR_5;
        if (FUNC_0(VAR_2, &VAR_5) == 0){
            struct tm *VAR_6;
            VAR_6 = FUNC_1(&(VAR_5.st_mtime));
            FUNC_4(VAR_3, 11, VAR_0, VAR_6);
        }
    }
    return FUNC_3(VAR_3);
}
