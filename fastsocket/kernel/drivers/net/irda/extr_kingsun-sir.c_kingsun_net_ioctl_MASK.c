
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kingsun_cb {int receiving; int netdev; } ;
struct ifreq {int dummy; } ;
struct if_irda_req {int ifr_receiving; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct kingsun_cb* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct ifreq *VAR_5,
        int VAR_6)
{
 struct if_irda_req *VAR_7 = (struct if_irda_req *) VAR_5;
 struct kingsun_cb *VAR_8 = FUNC_2(VAR_4);
 int VAR_9 = 0;

 switch (VAR_6) {
 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_2;


  if (FUNC_3(VAR_8->netdev))

   VAR_9 = -VAR_1;
  break;

 case 128:
  if (!FUNC_0(VAR_0))
   return -VAR_2;


  if (FUNC_4(VAR_8->netdev))
   FUNC_1(VAR_8->netdev, VAR_3);
  break;

 case 130:

  VAR_7->ifr_receiving = VAR_8->receiving;
  break;

 default:
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
