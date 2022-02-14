
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u16 VAR_1, u16 VAR_2,
         u16 *VAR_3, u16 *VAR_4)
{
 if (!VAR_3 || !VAR_4)
  return -VAR_0;


 if (VAR_2 > 0) {
  if (VAR_2 > 4)
   return -VAR_0;
  *VAR_3 = VAR_2 - 1;
 } else {
  *VAR_3 = VAR_1;
  *VAR_4 = 1;
 }
 return 0;
}
