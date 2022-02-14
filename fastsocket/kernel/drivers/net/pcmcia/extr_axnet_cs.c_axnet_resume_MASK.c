
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->priv;

 if (VAR_0->open) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, 1);
  FUNC_2(VAR_1);
 }

 return 0;
}
