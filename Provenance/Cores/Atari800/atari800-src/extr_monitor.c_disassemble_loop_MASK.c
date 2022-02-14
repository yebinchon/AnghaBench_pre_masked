
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;
typedef int SBYTE ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static UWORD FUNC_3(UWORD VAR_1)
{
 int VAR_2;
 VAR_2 = VAR_1;
 for (;;) {
  UBYTE VAR_3;
  if (VAR_2 > (UWORD) (VAR_1 + 0x7e)) {
   FUNC_2("Conditional loop containing instruction at %04X not detected\n", VAR_1);
   break;
  }
  VAR_3 = FUNC_0(VAR_2);
  if ((VAR_3 & 0x1f) == 0x10) {

   UWORD VAR_4 = VAR_2 + 2 + (SBYTE) FUNC_0(VAR_2 + 1);
   if (VAR_4 <= VAR_1) {
    VAR_1 = FUNC_1(VAR_4);
    break;
   }
  }
  VAR_2 += VAR_0[VAR_3] & 3;
 }
 return VAR_1;
}
