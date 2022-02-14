
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_client {int root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_client*,char*,...) ;

int
FUNC_2(struct nouveau_client *VAR_0)
{
 int VAR_1;
 FUNC_1(VAR_0, "init running\n");
 VAR_1 = FUNC_0(VAR_0->root);
 FUNC_1(VAR_0, "init completed with %d\n", VAR_1);
 return VAR_1;
}
