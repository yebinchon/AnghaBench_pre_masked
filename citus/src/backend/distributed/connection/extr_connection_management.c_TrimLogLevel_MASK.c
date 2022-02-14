
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 size_t FUNC_1 (char*) ;

char *
FUNC_2(const char *VAR_0)
{
 char *VAR_1 = FUNC_0(VAR_0);
 size_t VAR_2;

 VAR_2 = 0;
 while (VAR_2 < FUNC_1(VAR_1) && VAR_1[VAR_2] != ':')
 {
  VAR_2++;
 }

 do {
  VAR_2++;
 } while (VAR_2 < FUNC_1(VAR_1) && VAR_1[VAR_2] == ' ');

 return VAR_1 + VAR_2;
}
