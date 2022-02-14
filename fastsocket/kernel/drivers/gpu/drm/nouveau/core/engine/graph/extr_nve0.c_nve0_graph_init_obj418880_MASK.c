
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvc0_graph_priv {TYPE_1__* unk4188b8; TYPE_2__* unk4188b4; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int addr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nvc0_graph_priv*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct nvc0_graph_priv *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0, FUNC_0(0x0880), 0x00000000);
 FUNC_1(VAR_0, FUNC_0(0x08a4), 0x00000000);
 for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
  FUNC_1(VAR_0, FUNC_0(0x0888) + (VAR_1 * 4), 0x00000000);
 FUNC_1(VAR_0, FUNC_0(0x08b4), VAR_0->unk4188b4->addr >> 8);
 FUNC_1(VAR_0, FUNC_0(0x08b8), VAR_0->unk4188b8->addr >> 8);
}
