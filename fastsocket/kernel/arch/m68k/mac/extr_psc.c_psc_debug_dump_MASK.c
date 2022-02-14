
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3;

 if (!VAR_2) return;
 for (VAR_3 = 0x30 ; VAR_3 < 0x70 ; VAR_3 += 0x10) {
  FUNC_0("PSC #%d:  IFR = 0x%02X IER = 0x%02X\n",
   VAR_3 >> 4,
   (int) FUNC_1(VAR_1 + VAR_3),
   (int) FUNC_1(VAR_0 + VAR_3));
 }
}
