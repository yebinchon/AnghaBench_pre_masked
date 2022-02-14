
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; scalar_t__ priv; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 struct net_device * VAR_3 = (struct net_device *) VAR_2->priv;
 FUNC_2(VAR_3);

 if (VAR_2->open)
  FUNC_1(VAR_3);


 FUNC_0(VAR_3->base_addr, VAR_0 & (~VAR_1));

 return 0;
}
