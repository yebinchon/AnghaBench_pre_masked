
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;
 for (VAR_1 = 0x101 + VAR_0; VAR_1 < 0x200; ) {
  if (VAR_1 < 0x1ff) {
   UWORD VAR_2 = (UWORD) (FUNC_1(VAR_1) - 2);
   if (FUNC_0(VAR_2) == 0x20) {
    FUNC_2("%04X: %02X %02X  %04X: JSR %04X\n",
     VAR_1, FUNC_0(VAR_1), FUNC_0(VAR_1 + 1), VAR_2,
     FUNC_1(VAR_2 + 1));
    VAR_1 += 2;
    continue;
   }
  }
  FUNC_2("%04X: %02X\n", VAR_1, FUNC_0(VAR_1));
  VAR_1++;
 }
}
