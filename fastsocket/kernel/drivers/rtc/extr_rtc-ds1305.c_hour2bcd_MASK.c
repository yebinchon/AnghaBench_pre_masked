
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(bool VAR_2, int VAR_3)
{
 if (VAR_2) {
  VAR_3++;
  if (VAR_3 <= 12)
   return VAR_0 | FUNC_0(VAR_3);
  VAR_3 -= 12;
  return VAR_0 | VAR_1 | FUNC_0(VAR_3);
 }
 return FUNC_0(VAR_3);
}
