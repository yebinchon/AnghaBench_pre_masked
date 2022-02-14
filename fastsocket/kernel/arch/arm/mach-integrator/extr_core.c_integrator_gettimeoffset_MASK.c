
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned long VAR_5 ;

unsigned long FUNC_3(void)
{
 unsigned long VAR_6, VAR_7, VAR_8;







 VAR_7 = FUNC_2(VAR_2 + VAR_3) & 0xffff;
 do {
  VAR_6 = VAR_7;
  VAR_8 = FUNC_1(VAR_4 + VAR_0);
  VAR_7 = FUNC_2(VAR_2 + VAR_3) & 0xffff;
 } while (VAR_7 > VAR_6);




 VAR_6 = VAR_5 - VAR_7;




 if (VAR_8 & (1 << VAR_1))
  VAR_6 += VAR_5;




 return FUNC_0(VAR_6);
}
