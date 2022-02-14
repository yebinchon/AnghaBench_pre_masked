
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,long) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 long FUNC_2 (char const*,char**,int) ;

bool FUNC_3(const char *VAR_2)
{
 long VAR_3;
 char *VAR_4;
 char VAR_5[VAR_1];

 if (*VAR_2 == '\0')
 {
  return 0;
 }

 VAR_4 = ((void*)0);
 VAR_3 = FUNC_2(VAR_2, &VAR_4, 10);
 if (VAR_4 != ((void*)0) && *VAR_4 != '\0')
 {
  return 0;
 }

 if (VAR_3 <= 0 || VAR_3 > VAR_0)
 {
  return 0;
 }

 FUNC_0(VAR_5, sizeof(VAR_5), "%ld", VAR_3);
 return FUNC_1(VAR_5, VAR_2) == 0;
}
