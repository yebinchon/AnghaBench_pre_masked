
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char,int) ;
 char* VAR_0 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, char **VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 for (VAR_4 = (char*)VAR_1; (VAR_5 = FUNC_0(VAR_0, *VAR_4, VAR_3)) != ((void*)0); ++VAR_4)
  VAR_6 = VAR_6 * VAR_3 + (VAR_5 - VAR_0);

        if (VAR_2) {

                *VAR_2 = VAR_4;
        }

 return VAR_6;
}
