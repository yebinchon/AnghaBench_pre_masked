
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_1("    ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++)
  FUNC_1("%.2x", VAR_0[VAR_2]);

 FUNC_1("\n    ");
 for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2]))
   FUNC_1("%c", VAR_0[VAR_2]);
  else
   FUNC_1(".");
 }
 FUNC_1("\n");
}
