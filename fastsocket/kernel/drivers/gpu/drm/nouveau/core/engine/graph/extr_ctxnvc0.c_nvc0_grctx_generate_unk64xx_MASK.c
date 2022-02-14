
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvc0_graph_priv {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 TYPE_1__* FUNC_0 (struct nvc0_graph_priv*) ;
 int FUNC_1 (struct nvc0_graph_priv*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvc0_graph_priv *VAR_0)
{

 FUNC_1(VAR_0, 0x4064a8, 0x00000000);
 FUNC_1(VAR_0, 0x4064ac, 0x00003fff);
 FUNC_1(VAR_0, 0x4064b4, 0x00000000);
 FUNC_1(VAR_0, 0x4064b8, 0x00000000);
 if (FUNC_0(VAR_0)->chipset == 0xd9)
  FUNC_1(VAR_0, 0x4064bc, 0x00000000);
 if (FUNC_0(VAR_0)->chipset == 0xc1 ||
     FUNC_0(VAR_0)->chipset == 0xd9) {
  FUNC_1(VAR_0, 0x4064c0, 0x80140078);
  FUNC_1(VAR_0, 0x4064c4, 0x0086ffff);
 }
}
