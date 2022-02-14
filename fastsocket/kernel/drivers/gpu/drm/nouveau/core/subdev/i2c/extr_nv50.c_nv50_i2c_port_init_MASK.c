
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_i2c_priv {int dummy; } ;
struct nv50_i2c_port {int base; int state; int addr; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_i2c_priv*,int ,int ) ;

int
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv50_i2c_priv *VAR_1 = (void *)VAR_0->engine;
 struct nv50_i2c_port *VAR_2 = (void *)VAR_0;
 FUNC_1(VAR_1, VAR_2->addr, VAR_2->state);
 return FUNC_0(&VAR_2->base);
}
