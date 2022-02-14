
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

unsigned int FUNC_3(u32 VAR_1)
{




 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 if (FUNC_2(VAR_1 == 0)) {
  FUNC_0(1);
  return 0;
 }


 VAR_2 = FUNC_1(VAR_1) - 1;
 VAR_4 = VAR_1 << (31 - VAR_2);
 VAR_3 = (VAR_4 >> 23) & 0xff;
 VAR_5 = ((VAR_4 & 0x7fffff) *
   ((VAR_0[(VAR_3 + 1) & 0xff] -
     VAR_0[VAR_3]) & 0xffff)) >> 15;


 return ((VAR_2 << 24) + (VAR_0[VAR_3] << 8) + VAR_5);
}
