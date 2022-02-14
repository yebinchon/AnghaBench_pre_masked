
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

uint32_t
FUNC_5(uint32_t VAR_4)
{
 uint32_t VAR_5 = 0;

 if (VAR_4 & VAR_1)
  VAR_5 += FUNC_1();

 if (VAR_4 & (VAR_0 | VAR_2)) {
  uint64_t VAR_6 = FUNC_2(VAR_4);
  VAR_5 += FUNC_0(VAR_6);
 }

 if ((VAR_4 & VAR_3) && !FUNC_3())
  VAR_5 += FUNC_4();

 return VAR_5;
}
