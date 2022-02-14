
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvc0_copy_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nvc0_copy_priv*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1)
{
 struct nvc0_copy_priv *VAR_2 = (void *)VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->base);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2, 0x084, FUNC_1(VAR_1) - VAR_0);
 return 0;
}
