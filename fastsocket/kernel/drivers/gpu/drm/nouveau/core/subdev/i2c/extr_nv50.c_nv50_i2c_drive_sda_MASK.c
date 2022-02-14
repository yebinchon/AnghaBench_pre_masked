
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_i2c_priv {int dummy; } ;
struct nv50_i2c_port {int state; int addr; } ;
struct nouveau_i2c_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ engine; } ;


 TYPE_1__* FUNC_0 (struct nouveau_i2c_port*) ;
 int FUNC_1 (struct nv50_i2c_priv*,int ,int) ;

void
FUNC_2(struct nouveau_i2c_port *VAR_0, int VAR_1)
{
 struct nv50_i2c_priv *VAR_2 = (void *)FUNC_0(VAR_0)->engine;
 struct nv50_i2c_port *VAR_3 = (void *)VAR_0;
 if (VAR_1) VAR_3->state |= 0x02;
 else VAR_3->state &= 0xfd;
 FUNC_1(VAR_2, VAR_3->addr, VAR_3->state);
}
