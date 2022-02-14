
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ccb {int cmd; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ccb *VAR_0, char *VAR_1, u_char *VAR_2)
{
 FUNC_0(VAR_0->cmd, "%s: ", VAR_1);

 FUNC_2(VAR_2);
 FUNC_1("\n");
}
