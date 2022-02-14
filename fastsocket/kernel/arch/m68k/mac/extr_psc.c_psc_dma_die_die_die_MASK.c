
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2;

 FUNC_0("Killing all PSC DMA channels...");
 for (VAR_2 = 0 ; VAR_2 < 9 ; VAR_2++) {
  FUNC_1(VAR_1 + (VAR_2 << 4), 0x8800);
  FUNC_1(VAR_1 + (VAR_2 << 4), 0x1000);
  FUNC_1(VAR_0 + (VAR_2 << 5), 0x1100);
  FUNC_1(VAR_0 + (VAR_2 << 5) + 0x10, 0x1100);
 }
 FUNC_0("done!\n");
}
