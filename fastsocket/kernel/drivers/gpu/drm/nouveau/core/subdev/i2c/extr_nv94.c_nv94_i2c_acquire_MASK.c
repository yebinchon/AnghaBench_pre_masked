
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_i2c_priv {int dummy; } ;
struct nv50_i2c_port {int data; scalar_t__ ctrl; } ;
struct nouveau_i2c_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ engine; } ;


 int FUNC_0 (struct nv50_i2c_priv*,scalar_t__,int,int) ;
 TYPE_1__* FUNC_1 (struct nouveau_i2c_port*) ;

void
FUNC_2(struct nouveau_i2c_port *VAR_0)
{
 struct nv50_i2c_priv *VAR_1 = (void *)FUNC_1(VAR_0)->engine;
 struct nv50_i2c_port *VAR_2 = (void *)VAR_0;
 if (VAR_2->ctrl) {
  FUNC_0(VAR_1, VAR_2->ctrl + 0x0c, 0x00000001, 0x00000000);
  FUNC_0(VAR_1, VAR_2->ctrl + 0x00, 0x0000f003, VAR_2->data);
 }
}
