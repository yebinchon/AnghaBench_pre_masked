
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLboolean ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3 (const char* VAR_1, GLboolean VAR_2, GLboolean VAR_3, GLboolean VAR_4)
{
  unsigned int VAR_5;
  FUNC_1(VAR_0, "\n%s:", VAR_1);
  for (VAR_5=0; VAR_5<62-FUNC_2(VAR_1); VAR_5++) FUNC_1(VAR_0, " ");
  FUNC_1(VAR_0, "%s ", VAR_2 ? "OK" : "MISSING");
  if (VAR_2 != VAR_3)
    FUNC_1(VAR_0, "[%s] ", VAR_3 ? "OK" : "MISSING");
  if (VAR_2 != VAR_4)
    FUNC_1(VAR_0, "[%s]\n", VAR_4 ? "OK" : "MISSING");
  else
    FUNC_1(VAR_0, "\n");
  for (VAR_5=0; VAR_5<FUNC_2(VAR_1)+1; VAR_5++) FUNC_1(VAR_0, "-");
  FUNC_1(VAR_0, "\n");
  FUNC_0(VAR_0);
}
