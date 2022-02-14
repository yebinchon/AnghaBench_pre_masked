
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct pcmcia_device {struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct hostap_cs_priv {int dummy; } ;
struct TYPE_2__ {struct hostap_cs_priv* hw_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hostap_cs_priv*) ;
 struct hostap_interface* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_1)
{
 FUNC_0(VAR_0, "prism2_detach\n");

 FUNC_4((u_long)VAR_1);


 if (VAR_1->priv) {
  struct hostap_cs_priv *VAR_2;
  struct net_device *VAR_3;
  struct hostap_interface *VAR_4;
  VAR_3 = VAR_1->priv;
  VAR_4 = FUNC_2(VAR_3);
  VAR_2 = VAR_4->local->hw_priv;
  FUNC_3(VAR_3);
  FUNC_1(VAR_2);
 }
}
