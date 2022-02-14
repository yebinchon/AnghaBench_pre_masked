
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 long FUNC_0 (long,int,int) ;

__attribute__((used)) static u8 FUNC_1(unsigned VAR_0, int VAR_1, int VAR_2)
{
 long VAR_3 = VAR_2 * 1000 - VAR_0 * 10000;
 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_3, 12500, 200000);
  return (u8)((VAR_3 / 12500 - 1) << 4);
 } else {
  VAR_3 = FUNC_0(VAR_3, -400000, -25000);
  return (u8)((VAR_3 / -25000 - 1) << 0);
 }
}
