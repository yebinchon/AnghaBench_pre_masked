
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ieee754dp ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

ieee754dp FUNC_5(int VAR_4)
{
 u64 VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_0;

 if (VAR_4 == 0)
  return FUNC_4(0);
 if (VAR_4 == 1 || VAR_4 == -1)
  return FUNC_2(VAR_4 < 0);
 if (VAR_4 == 10 || VAR_4 == -10)
  return FUNC_3(VAR_4 < 0);

 VAR_7 = (VAR_4 < 0);
 if (VAR_7) {
  if (VAR_4 == (1 << 31))
   VAR_5 = ((unsigned) 1 << 31);
  else
   VAR_5 = -VAR_4;
 } else {
  VAR_5 = VAR_4;
 }



 VAR_6 = VAR_3;
 while ((VAR_5 >> VAR_3) == 0) {
  VAR_5 <<= 1;
  VAR_6--;
 }
 return FUNC_1(VAR_7, VAR_6 + VAR_1, VAR_5 & ~VAR_2);
}
