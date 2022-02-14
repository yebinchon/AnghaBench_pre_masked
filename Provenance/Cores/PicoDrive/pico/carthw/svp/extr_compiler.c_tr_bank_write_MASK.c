
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(int VAR_1)
{
 int VAR_2 = 7;
 if (VAR_1 > 0x7f) {
  if (VAR_0[1] != (0x100000|((VAR_1&0x180)<<1))) {
   FUNC_0(1,7,30/2,(VAR_1&0x180)>>1);
   VAR_0[1] = 0x100000|((VAR_1&0x180)<<1);
  }
  VAR_2 = 1;
 }
 FUNC_1(0,VAR_2,(VAR_1&0x7f)<<1);
}
