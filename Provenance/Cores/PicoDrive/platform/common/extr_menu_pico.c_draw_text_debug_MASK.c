
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char const*,int) ;

__attribute__((used)) static void FUNC_1(const char *VAR_2, int VAR_3, int VAR_4)
{
 const char *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2;
 while (VAR_3-- > 0)
 {
  while (*VAR_5 && *VAR_5 != '\n')
   VAR_5++;
  if (*VAR_5 == 0 || VAR_5[1] == 0)
   return;
  VAR_5++;
 }

 VAR_2 = VAR_5;
 for (VAR_6 = VAR_4; VAR_6 < VAR_0 / VAR_1; VAR_6++)
 {
  FUNC_0(1, VAR_6 * VAR_1, VAR_2, 0xffff);
  while (*VAR_5 && *VAR_5 != '\n')
   VAR_5++;
  if (*VAR_5 == 0)
   break;
  VAR_5++; VAR_2 = VAR_5;
 }
}
