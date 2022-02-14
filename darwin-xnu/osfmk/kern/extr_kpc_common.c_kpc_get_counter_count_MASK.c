
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

uint32_t
FUNC_3(uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;

 if (VAR_3 & VAR_1)
  VAR_4 += FUNC_0();

 if (VAR_3 & (VAR_0 | VAR_2)) {
  uint64_t VAR_5 = FUNC_1(VAR_3);
  uint32_t VAR_6 = FUNC_2(VAR_5);
  VAR_4 += VAR_6;
 }

 return VAR_4;
}
