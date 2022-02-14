
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int open; } ;
struct net_device {unsigned int base_addr; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ mace_private ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
  unsigned int VAR_2 = VAR_1->base_addr;
  mace_private *VAR_3 = FUNC_1(VAR_1);
  struct pcmcia_device *VAR_4 = VAR_3->p_dev;

  if (!FUNC_4(VAR_4))
    return -VAR_0;

  VAR_4->open++;

  FUNC_0(0);

  FUNC_2(VAR_1);
  FUNC_3(VAR_1);

  return 0;
}
