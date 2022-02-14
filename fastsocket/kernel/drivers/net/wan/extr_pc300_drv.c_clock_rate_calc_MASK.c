
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, u32 VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;

 *VAR_2 = 0;

 if (VAR_0 == 0)
  return (0);

 for (VAR_3 = 0, VAR_5 = 1; VAR_3 <= 9; VAR_3++, VAR_5 <<= 1) {
  if ((VAR_4 = VAR_1 / VAR_5 / VAR_0) <= 0xff) {
   *VAR_2 = VAR_3;
   break;
  }
 }

 if (VAR_4 <= 0xff) {
  VAR_6 = ((VAR_0 - (VAR_1 / VAR_5 / VAR_0)) / VAR_0) * 1000;

  if (VAR_6 < -10 || VAR_6 > 10)
   return (-1);
  else
   return (VAR_4);
 } else {
  return (-1);
 }
}
