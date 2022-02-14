
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int open; } ;
struct net_device {unsigned int base_addr; int name; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ mace_private ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
  unsigned int VAR_3 = VAR_2->base_addr;
  mace_private *VAR_4 = FUNC_1(VAR_2);
  struct pcmcia_device *VAR_5 = VAR_4->p_dev;

  FUNC_0(2, "%s: shutting down ethercard.\n", VAR_2->name);


  FUNC_3(0xFF, VAR_3 + VAR_0 + VAR_1);

  VAR_5->open--;
  FUNC_2(VAR_2);

  return 0;
}
