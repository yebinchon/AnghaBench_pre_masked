
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u64 VAR_2, unsigned long *VAR_3,
     unsigned long *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7 = 0, VAR_8 = 0;

 VAR_5 = (VAR_2 >> VAR_1) & VAR_0;
 if (VAR_5) {
  if (VAR_5 > 6)
   return -1;
  VAR_6 = (VAR_5 - 1) * 2;
  VAR_7 |= 2 << VAR_6;
  VAR_8 |= 1 << VAR_6;
  if (VAR_5 >= 5 && !(VAR_2 == 0x500fa || VAR_2 == 0x600f4))
   return -1;
 }
 if (VAR_5 < 5) {

  VAR_7 |= 0x8000;
  VAR_8 |= 0x1000;
 }
 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;
 return 0;
}
