
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,scalar_t__) ;

void FUNC_5(unsigned VAR_3, int VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_2(VAR_6);
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_2 + VAR_1 + FUNC_0(VAR_3) *
     VAR_0);
  FUNC_4(VAR_5 | (1 << (VAR_3 & 0x07)), VAR_2 + VAR_1 +
    FUNC_0(VAR_3) * VAR_0);
 } else {
  VAR_5 = FUNC_3(VAR_2 + VAR_1 + FUNC_0(VAR_3) *
     VAR_0);
  FUNC_4(VAR_5 & ~(1 << (VAR_3 & 0x07)), VAR_2 + VAR_1 +
    FUNC_0(VAR_3) * VAR_0);
 }
 FUNC_1(VAR_6);
}
