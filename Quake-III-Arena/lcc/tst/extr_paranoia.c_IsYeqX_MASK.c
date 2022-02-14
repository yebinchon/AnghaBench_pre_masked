
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,...) ;

FUNC_2()
{
 if (VAR_4 != VAR_3) {
  if (VAR_1 <= 0) {
   if (VAR_5 == VAR_6 && VAR_2 <= VAR_6)
    FUNC_1("WARNING:  computing\n");
   else FUNC_0(VAR_0, "computing\n");
   FUNC_1("\t(%.17e) ^ (%.17e)\n", VAR_5, VAR_2);
   FUNC_1("\tyielded %.17e;\n", VAR_4);
   FUNC_1("\twhich compared unequal to correct %.17e ;\n",
    VAR_3);
   FUNC_1("\t\tthey differ by %.17e .\n", VAR_4 - VAR_3);
   }
  VAR_1 = VAR_1 + 1;
  }
 }
