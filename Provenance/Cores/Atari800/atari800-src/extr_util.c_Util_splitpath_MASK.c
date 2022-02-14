
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_1, char *VAR_2, char *VAR_3)
{
 const char *VAR_4;

 for (VAR_4 = VAR_1 + FUNC_2(VAR_1) - 2; VAR_4 >= VAR_1; VAR_4--) {
  if (*VAR_4 == VAR_0




     ) {
   if (VAR_2 != ((void*)0)) {
    int VAR_5 = VAR_4 - VAR_1;
    if (VAR_4 == VAR_1 || (VAR_4 == VAR_1 + 2 && VAR_1[1] == ':'))

     VAR_5++;
    FUNC_0(VAR_2, VAR_1, VAR_5);
    VAR_2[VAR_5] = '\0';
   }
   if (VAR_3 != ((void*)0))
    FUNC_1(VAR_3, VAR_4 + 1);
   return;
  }
 }

 if (VAR_2 != ((void*)0))
  VAR_2[0] = '\0';
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3, VAR_1);
}
