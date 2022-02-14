
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,int ,int) ;
 scalar_t__ FUNC_1 (char,int ,int) ;

unsigned long
FUNC_2(char *VAR_0, char *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 char VAR_4;
 unsigned VAR_5;

 for (; VAR_2; --VAR_2) {
  if (FUNC_0(VAR_4, VAR_1++, sizeof(char)))
   break;
  if (FUNC_1(VAR_4, VAR_0++, sizeof(char)))
   break;
 }

 for (VAR_4 = 0, VAR_5 = VAR_2; VAR_3 && VAR_5; --VAR_5)
  if (FUNC_1(VAR_4, VAR_0++, sizeof(char)))
   break;
 return VAR_2;
}
