
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_timer_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nv04_timer_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_1, bool VAR_2)
{
 struct nv04_timer_priv *VAR_3 = (void *)VAR_1;
 FUNC_1(VAR_3, VAR_0, 0x00000000);
 return FUNC_0(&VAR_3->base, VAR_2);
}
