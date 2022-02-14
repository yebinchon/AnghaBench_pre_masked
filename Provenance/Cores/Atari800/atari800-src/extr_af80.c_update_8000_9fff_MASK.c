
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_2) return;
 if (VAR_3) {
  FUNC_1(VAR_0 + 0x8000, 0xff, 0x2000);
 }
 else {
  int VAR_5;
  for (VAR_5=0; VAR_5<32; VAR_5++) {
  FUNC_0(VAR_0 + 0x8000 + (VAR_5<<8), VAR_1 + (VAR_4<<8), 0x100);
  }
 }
}
