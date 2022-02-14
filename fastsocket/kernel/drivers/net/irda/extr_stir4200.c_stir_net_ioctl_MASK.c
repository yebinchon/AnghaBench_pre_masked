
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stir_cb {int receiving; int netdev; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct if_irda_req {int ifr_receiving; int ifr_baudrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stir_cb*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct stir_cb* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct if_irda_req *VAR_7 = (struct if_irda_req *) VAR_5;
 struct stir_cb *VAR_8 = FUNC_3(VAR_4);
 int VAR_9 = 0;

 switch (VAR_6) {
 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_2;


  if (FUNC_4(VAR_8->netdev))
   VAR_9 = FUNC_1(VAR_8, VAR_7->ifr_baudrate);
  break;

 case 128:
  if (!FUNC_0(VAR_0))
   return -VAR_2;


  if (FUNC_5(VAR_8->netdev))
   FUNC_2(VAR_8->netdev, VAR_3);
  break;

 case 130:

  VAR_7->ifr_receiving = VAR_8->receiving;
  break;

 default:
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
