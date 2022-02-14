
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_ccb {int cmd; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct sym_ccb *VAR_0, char *VAR_1, u_char *VAR_2)
{
 if (VAR_1)
  FUNC_2(VAR_0->cmd, "%s: ", VAR_1);
 else
  FUNC_2(VAR_0->cmd, "");

 FUNC_1(VAR_2);
 FUNC_0("\n");
}
