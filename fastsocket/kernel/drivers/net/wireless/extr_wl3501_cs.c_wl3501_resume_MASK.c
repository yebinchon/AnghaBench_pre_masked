
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->priv;

 FUNC_2(FUNC_0(VAR_2), VAR_0);
 if (VAR_1->open) {
  FUNC_3(VAR_2);
  FUNC_1(VAR_2);
 }

 return 0;
}
