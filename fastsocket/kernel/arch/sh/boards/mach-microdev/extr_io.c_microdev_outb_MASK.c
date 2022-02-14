
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned short FUNC_1 (unsigned long const) ;
 int FUNC_2 (unsigned short,unsigned long const) ;
 int FUNC_3 (unsigned char,unsigned long) ;

void FUNC_4(unsigned char VAR_3, unsigned long VAR_4)
{
 if ((VAR_4 >= VAR_0) &&
     (VAR_4 < VAR_0 + VAR_1)) {




  if (VAR_4 % 2 == 1) {

   const unsigned long VAR_5 = VAR_4-1;
   unsigned short VAR_6;
   VAR_6 = FUNC_1(VAR_5);
   VAR_6 = (VAR_6 & 0xffu) | (VAR_3 << 8);
   FUNC_2(VAR_6, VAR_5);
  } else {

   unsigned short VAR_7;
   VAR_7 = FUNC_1(VAR_4);
   VAR_7 = (VAR_7 & 0xff00u) | (VAR_3);
   FUNC_2(VAR_7, VAR_4);
  }
 } else {
  *(volatile unsigned char*)FUNC_0(VAR_4) = VAR_3;
 }
}
