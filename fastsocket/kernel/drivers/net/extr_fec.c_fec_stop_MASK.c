
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int phy_speed; scalar_t__ hwp; scalar_t__ link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_7)
{
 struct fec_enet_private *VAR_8 = FUNC_0(VAR_7);


 if (VAR_8->link) {
  FUNC_4(1, VAR_8->hwp + VAR_6);
  FUNC_3(10);
  if (!(FUNC_2(VAR_8->hwp + VAR_3) & VAR_1))
   FUNC_1("fec_stop : Graceful transmit stop did not complete !\n");
 }


 FUNC_4(1, VAR_8->hwp + VAR_0);
 FUNC_3(10);


 FUNC_4(VAR_2, VAR_8->hwp + VAR_3);

 FUNC_4(VAR_2, VAR_8->hwp + VAR_4);
 FUNC_4(VAR_8->phy_speed, VAR_8->hwp + VAR_5);
}
