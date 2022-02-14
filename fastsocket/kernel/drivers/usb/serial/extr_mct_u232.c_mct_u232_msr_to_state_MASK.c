
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char*,unsigned char,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int *VAR_8,
      unsigned char VAR_9)
{

 if (VAR_9 & VAR_2)
  *VAR_8 |= VAR_6;
 else
  *VAR_8 &= ~VAR_6;
 if (VAR_9 & VAR_1)
  *VAR_8 |= VAR_5;
 else
  *VAR_8 &= ~VAR_5;
 if (VAR_9 & VAR_3)
  *VAR_8 |= VAR_7;
 else
  *VAR_8 &= ~VAR_7;
 if (VAR_9 & VAR_0)
  *VAR_8 |= VAR_4;
 else
  *VAR_8 &= ~VAR_4;
 FUNC_0("msr_to_state: msr=0x%x ==> state=0x%x", VAR_9, *VAR_8);
}
