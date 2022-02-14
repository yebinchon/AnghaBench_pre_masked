
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct sa1100_irda {TYPE_1__ rx_buff; int open; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct if_irda_req {int ifr_receiving; int ifr_baudrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sa1100_irda*) ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 struct sa1100_irda* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sa1100_irda*,int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct if_irda_req *VAR_8 = (struct if_irda_req *)VAR_6;
 struct sa1100_irda *VAR_9 = FUNC_3(VAR_5);
 int VAR_10 = -VAR_1;

 switch (VAR_7) {
 case 129:
  if (FUNC_1(VAR_0)) {




   if (VAR_9->open) {
    VAR_10 = FUNC_5(VAR_9,
      VAR_8->ifr_baudrate);
   } else {
    FUNC_4("sa1100_irda_ioctl: SIOCSBANDWIDTH: !netif_running\n");
    VAR_10 = 0;
   }
  }
  break;

 case 128:
  VAR_10 = -VAR_2;
  if (FUNC_1(VAR_0)) {
   FUNC_2(VAR_5, VAR_4);
   VAR_10 = 0;
  }
  break;

 case 130:
  VAR_8->ifr_receiving = FUNC_0(VAR_9) ? 0
     : VAR_9->rx_buff.state != VAR_3;
  break;

 default:
  break;
 }

 return VAR_10;
}
