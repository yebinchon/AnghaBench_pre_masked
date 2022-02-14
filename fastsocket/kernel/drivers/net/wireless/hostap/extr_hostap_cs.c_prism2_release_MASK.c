
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct pcmcia_device {struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {int shutdown; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_4(u_long VAR_1)
{
 struct pcmcia_device *VAR_2 = (struct pcmcia_device *)VAR_1;

 FUNC_0(VAR_0, "prism2_release\n");

 if (VAR_2->priv) {
  struct net_device *VAR_3 = VAR_2->priv;
  struct hostap_interface *VAR_4;

  VAR_4 = FUNC_1(VAR_3);
  FUNC_3(VAR_3, 0);
  VAR_4->local->shutdown = 1;
 }

 FUNC_2(VAR_2);
 FUNC_0(VAR_0, "release - done\n");
}
