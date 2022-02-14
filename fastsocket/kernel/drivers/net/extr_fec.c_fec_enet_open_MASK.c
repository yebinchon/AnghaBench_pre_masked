
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int link; int opened; TYPE_1__* phy; scalar_t__ sequence_done; } ;
struct TYPE_2__ {int startup; int config; int ack_int; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;





 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2->sequence_done = 0;
 VAR_2->link = 0;

 FUNC_1(VAR_1, 1);

 if (VAR_2->phy) {
  FUNC_2(VAR_1, VAR_2->phy->ack_int);
  FUNC_2(VAR_1, VAR_2->phy->config);
  FUNC_2(VAR_1, VAR_0);
  while(!VAR_2->sequence_done)
   FUNC_5();

  FUNC_2(VAR_1, VAR_2->phy->startup);
 }





 VAR_2->link = 1;

 FUNC_4(VAR_1);
 VAR_2->opened = 1;
 return 0;
}
