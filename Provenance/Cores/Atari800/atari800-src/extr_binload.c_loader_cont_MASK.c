
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;
typedef int UBYTE ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,void (*) ()) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_1) {
  FUNC_4(0x244, 0);
  FUNC_4(0x09, 1);
 }
 else
  VAR_4 += 2;

 FUNC_4(0x2e3, 0xd7);
 do {
  int VAR_8;
  UWORD VAR_9;
  UWORD VAR_10;
  do
   VAR_8 = FUNC_8();
  while (VAR_8 == 0xffff);
  if (VAR_8 < 0)
   return;
  VAR_9 = (UWORD) VAR_8;

  VAR_8 = FUNC_8();
  if (VAR_8 < 0)
   return;
  VAR_10 = (UWORD) VAR_8;

  if (VAR_1) {
   FUNC_5(0x2e0, VAR_9);
   VAR_1 = VAR_7;
  }

  VAR_10++;
  do {
   int VAR_11 = FUNC_7(VAR_0);
   if (VAR_11 == VAR_5) {
    FUNC_6(VAR_0);
    VAR_0 = ((void*)0);
    VAR_3 = FUNC_3(0x2e0);
    if (FUNC_2(0x2e3) != 0xd7) {

     VAR_3--;
     FUNC_4(0x0100 + VAR_4--, VAR_3 >> 8);
     FUNC_4(0x0100 + VAR_4--, VAR_3 & 0xff);
     VAR_3 = FUNC_3(0x2e2);
    }
    return;
   }
   FUNC_1(VAR_9, (UBYTE) VAR_11);
   VAR_9++;
  } while (VAR_9 != VAR_10);
 } while (FUNC_2(0x2e3) == 0xd7);

 VAR_4--;
 FUNC_0((UWORD) (0x100 + VAR_4), VAR_6, FUNC_9);
 VAR_4--;
 FUNC_4(0x0100 + VAR_4--, 0x01);
 FUNC_4(0x0100 + VAR_4, VAR_4 + 1);
 VAR_4--;
 VAR_3 = FUNC_3(0x2e2);
 VAR_2;

 FUNC_4(0x0300, 0x31);
}
