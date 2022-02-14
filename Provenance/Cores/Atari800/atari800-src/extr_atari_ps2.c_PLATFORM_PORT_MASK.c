
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;

int FUNC_1(int VAR_8)
{
 int VAR_9 = 0xff;
 if (VAR_8 == 0) {
  int VAR_10 = FUNC_0();
  if (VAR_10 & VAR_5)
   VAR_9 &= 0xf0 | VAR_2;
  if (VAR_10 & VAR_6)
   VAR_9 &= 0xf0 | VAR_3;
  if (VAR_10 & VAR_7)
   VAR_9 &= 0xf0 | VAR_1;
  if (VAR_10 & VAR_4)
   VAR_9 &= 0xf0 | VAR_0;
 }
 return VAR_9;
}
