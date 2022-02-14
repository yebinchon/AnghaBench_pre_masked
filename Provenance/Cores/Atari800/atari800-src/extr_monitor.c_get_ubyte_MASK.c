
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef scalar_t__ UBYTE ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(UBYTE *VAR_0)
{
 UWORD VAR_1;
 if (!FUNC_0(&VAR_1) || VAR_1 > 0xff)
  FUNC_1("Invalid argument!\n");
 else
  *VAR_0 = (UBYTE) VAR_1;
}
