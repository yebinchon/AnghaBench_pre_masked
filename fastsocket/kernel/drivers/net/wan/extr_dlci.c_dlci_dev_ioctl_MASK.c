
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ dev_addr; } ;
struct ifreq {int ifr_data; int ifr_slave; } ;
struct dlci_local {TYPE_1__* slave; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 struct dlci_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct dlci_local *VAR_7;

 if (!FUNC_0(VAR_0))
  return(-VAR_3);

 VAR_7 = FUNC_2(VAR_4);

 switch(VAR_6)
 {
  case 129:
   if (!*(short *)(VAR_4->dev_addr))
    return(-VAR_1);

   FUNC_3(VAR_5->ifr_slave, VAR_7->slave->name, sizeof(VAR_5->ifr_slave));
   break;

  case 130:
  case 128:
   if (!*(short *)(VAR_4->dev_addr))
    return(-VAR_1);

   return(FUNC_1(VAR_4, VAR_5->ifr_data, VAR_6 == 130));
   break;

  default:
   return(-VAR_2);
 }
 return(0);
}
