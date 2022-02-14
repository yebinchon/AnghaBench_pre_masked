
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UWORD ;
typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,void (*) ()) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,scalar_t__) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_10(void)
{
 if (VAR_7 == ((void*)0))
  return;
 if (VAR_0) {
  FUNC_6(0x244, 0);
  FUNC_6(0x09, 1);
 }
 else
  VAR_3 += 2;

 FUNC_6(0x2e3, 0xd7);
 do {
  int VAR_11;
  UWORD VAR_12;
  UWORD VAR_13;
  do
   VAR_11 = FUNC_0();
  while (VAR_11 == 0xffff);
  if (VAR_11 < 0)
   return;
  VAR_12 = (UWORD) VAR_11;

  VAR_11 = FUNC_0();
  if (VAR_11 < 0)
   return;
  VAR_13 = (UWORD) VAR_11;

  if (VAR_8)
   FUNC_2("H: Load: From %04X to %04X", VAR_12, VAR_13);

  if (VAR_0) {
   if (VAR_10)
    FUNC_7(0x2e0, VAR_12);
   VAR_0 = VAR_6;
  }

  VAR_13++;
  do {
   int VAR_14 = FUNC_9(VAR_7);
   if (VAR_14 == VAR_4) {
    FUNC_8(VAR_7);
    VAR_7 = ((void*)0);
    if (VAR_10)
     VAR_2 = FUNC_5(0x2e0);
    if (VAR_9 && (FUNC_4(0x2e3) != 0xd7)) {

     VAR_2--;
     FUNC_6(0x0100 + VAR_3--, VAR_2 >> 8);
     FUNC_6(0x0100 + VAR_3--, VAR_2 & 0xff);
     VAR_2 = FUNC_5(0x2e2);
    }
    return;
   }
   FUNC_3(VAR_12, (UBYTE) VAR_14);
   VAR_12++;
  } while (VAR_12 != VAR_13);
 } while (!VAR_9 || FUNC_4(0x2e3) == 0xd7);

 VAR_3--;
 FUNC_1((UWORD) (0x100 + VAR_3), VAR_5, FUNC_10);
 VAR_3--;
 FUNC_6(0x0100 + VAR_3--, 0x01);
 FUNC_6(0x0100 + VAR_3, VAR_3 + 1);
 VAR_3--;
 VAR_2 = FUNC_5(0x2e2);
 VAR_1;

 FUNC_6(0x0300, 0x31);
}
