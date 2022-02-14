
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_3 ;

void
FUNC_2(int VAR_4, int VAR_5)
{
 int VAR_6 = 1;
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 if (VAR_4 == -1) {

  VAR_4 = (1U << (VAR_2-1)) - 1;
 }

 while (VAR_4) {
  if (VAR_4 & 0x1) {
   VAR_9 = FUNC_0(VAR_3, VAR_6, VAR_5);
   if (VAR_9 == VAR_1) {
    VAR_7++;
   }
   if (VAR_9 != VAR_0) {
    VAR_8++;
   }
  }

  VAR_6++;
  VAR_4 >>= 1;
 }
 FUNC_1("KASan: TEST SUMMARY %d/%d passed\n", VAR_7, VAR_8);
}
