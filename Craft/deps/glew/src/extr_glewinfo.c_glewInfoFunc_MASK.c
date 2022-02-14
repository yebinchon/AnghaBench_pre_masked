
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLint ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3 (const char* VAR_1, GLint VAR_2)
{
  unsigned int VAR_3;
  FUNC_1(VAR_0, "  %s:", VAR_1);
  for (VAR_3=0; VAR_3<60-FUNC_2(VAR_1); VAR_3++) FUNC_1(VAR_0, " ");
  FUNC_1(VAR_0, "%s\n", VAR_2 ? "MISSING" : "OK");
  FUNC_0(VAR_0);
}
