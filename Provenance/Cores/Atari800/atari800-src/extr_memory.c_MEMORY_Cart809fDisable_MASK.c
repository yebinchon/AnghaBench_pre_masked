
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int VAR_4 ;

void FUNC_3(void)
{
 if (VAR_3) {
  if (VAR_2 > 32) {
   FUNC_2(VAR_1 + 0x8000, VAR_4, 0x2000);
   FUNC_0(0x8000, 0x9fff);
  }
  else
   FUNC_1(0x8000, 0xff, 0x2000);
  VAR_3 = VAR_0;
 }
}
