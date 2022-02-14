
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_2__ {scalar_t__ p_encap; int ppp_slot; } ;
typedef TYPE_1__ isdn_net_local ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,struct ifreq*,struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 int VAR_7=0;
 int VAR_8;
 isdn_net_local *VAR_9 = (isdn_net_local *) FUNC_2(VAR_4);


 if (VAR_9->p_encap != VAR_2)
  return -VAR_1;

 switch (VAR_6) {

  case 128:
   VAR_8 = FUNC_3("2.3.7") + 1;
   if (FUNC_0(VAR_5->ifr_data, "2.3.7", VAR_8))
    VAR_7 = -VAR_0;
   break;

  case 129:
   VAR_7 = FUNC_1(VAR_9->ppp_slot, VAR_5, VAR_4);
   break;
  default:
   VAR_7 = -VAR_1;
   break;
 }
 return VAR_7;
}
