
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv4e_i2c_priv {int dummy; } ;
struct nv4e_i2c_port {int addr; } ;
struct nouveau_i2c_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ engine; } ;


 int FUNC_0 (struct nv4e_i2c_priv*,int ,int,int) ;
 TYPE_1__* FUNC_1 (struct nouveau_i2c_port*) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_i2c_port *VAR_0, int VAR_1)
{
 struct nv4e_i2c_priv *VAR_2 = (void *)FUNC_1(VAR_0)->engine;
 struct nv4e_i2c_port *VAR_3 = (void *)VAR_0;
 FUNC_0(VAR_2, VAR_3->addr, 0x1f, VAR_1 ? 0x11 : 0x01);
}
