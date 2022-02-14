
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef scalar_t__ UBYTE ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 UWORD *VAR_2 = (UWORD *) VAR_0;
 int VAR_3;

 FUNC_0(VAR_2, VAR_1);

 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--) {
  int VAR_4 = ((int) (((UBYTE *) VAR_2)[VAR_3]) - 0x80) * 0x100;

  if (VAR_4 > 32767)
   VAR_4 = 32767;
  else if (VAR_4 < -32768)
   VAR_4 = -32768;

  VAR_2[VAR_3] = VAR_4;
 }
}
