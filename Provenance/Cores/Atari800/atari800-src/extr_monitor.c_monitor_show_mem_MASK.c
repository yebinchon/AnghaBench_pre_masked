
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef char UBYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(UWORD *VAR_0)
{
 int VAR_1 = 16;
 FUNC_1(VAR_0);
 do {
  int VAR_2;
  FUNC_2("%04X: ", *VAR_0);
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
   FUNC_2("%02X ", FUNC_0((UWORD) (*VAR_0 + VAR_2)));
  FUNC_3(' ');
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
   UBYTE VAR_3;
   VAR_3 = FUNC_0(*VAR_0);
   (*VAR_0)++;
   FUNC_3((VAR_3 >= ' ' && VAR_3 <= 'z' && VAR_3 != '\x60') ? VAR_3 : '.');
  }
  FUNC_3('\n');
 } while (--VAR_1 > 0);
}
