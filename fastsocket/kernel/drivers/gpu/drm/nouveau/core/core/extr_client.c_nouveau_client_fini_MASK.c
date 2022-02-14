
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_client {int root; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nouveau_client*,char*,char const*,...) ;

int
FUNC_2(struct nouveau_client *VAR_0, bool VAR_1)
{
 const char *VAR_2[2] = { "fini", "suspend" };
 int VAR_3;

 FUNC_1(VAR_0, "%s running\n", VAR_2[VAR_1]);
 VAR_3 = FUNC_0(VAR_0->root, VAR_1);
 FUNC_1(VAR_0, "%s completed with %d\n", VAR_2[VAR_1], VAR_3);
 return VAR_3;
}
