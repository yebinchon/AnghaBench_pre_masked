
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ priv; } ;
struct net_device {int dummy; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ num_dev_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *) VAR_3->priv;
 int VAR_5 = 0;
 struct hostap_interface *VAR_6 = ((void*)0);

 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4);

 FUNC_0(VAR_0, "%s: CS_EVENT_PM_RESUME\n", VAR_2);

 if (VAR_6 && VAR_6->local)
  VAR_5 = VAR_6->local->num_dev_open > 0;

 FUNC_5(VAR_4, 1);
 FUNC_4(VAR_4, VAR_5 ? 0 : 1);
 if (VAR_5) {
  FUNC_2(VAR_4);
  FUNC_3(VAR_4);
 }

 return 0;
}
