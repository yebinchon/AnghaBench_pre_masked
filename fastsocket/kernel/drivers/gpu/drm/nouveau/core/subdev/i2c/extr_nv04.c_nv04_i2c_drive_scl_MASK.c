
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nv04_i2c_priv {int dummy; } ;
struct nv04_i2c_port {int drive; } ;
struct nouveau_i2c_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ engine; } ;


 TYPE_1__* FUNC_0 (struct nouveau_i2c_port*) ;
 int FUNC_1 (struct nv04_i2c_priv*,int ,int ) ;
 int FUNC_2 (struct nv04_i2c_priv*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_i2c_port *VAR_0, int VAR_1)
{
 struct nv04_i2c_priv *VAR_2 = (void *)FUNC_0(VAR_0)->engine;
 struct nv04_i2c_port *VAR_3 = (void *)VAR_0;
 u8 VAR_4 = FUNC_1(VAR_2, 0, VAR_3->drive);
 if (VAR_1) VAR_4 |= 0x20;
 else VAR_4 &= 0xdf;
 FUNC_2(VAR_2, 0, VAR_3->drive, VAR_4 | 0x01);
}
