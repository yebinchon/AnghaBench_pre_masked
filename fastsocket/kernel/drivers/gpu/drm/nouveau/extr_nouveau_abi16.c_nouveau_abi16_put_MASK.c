
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_cli {int mutex; } ;
struct nouveau_abi16 {scalar_t__ client; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct nouveau_abi16 *VAR_0, int VAR_1)
{
 struct nouveau_cli *VAR_2 = (void *)VAR_0->client;
 FUNC_0(&VAR_2->mutex);
 return VAR_1;
}
