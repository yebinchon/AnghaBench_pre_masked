
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {struct net_device* priv; scalar_t__ win; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ dingo_ccr; scalar_t__ dingo; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void
FUNC_4(struct pcmcia_device *VAR_0)
{
 FUNC_0(0, "release(0x%p)\n", VAR_0);

 if (VAR_0->win) {
  struct net_device *VAR_1 = VAR_0->priv;
  local_info_t *VAR_2 = FUNC_2(VAR_1);
  if (VAR_2->dingo)
   FUNC_1(VAR_2->dingo_ccr - 0x0800);
 }
 FUNC_3(VAR_0);
}
