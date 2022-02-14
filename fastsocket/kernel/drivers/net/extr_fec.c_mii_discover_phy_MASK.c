
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_addr; int phy_id; scalar_t__ phy_speed; scalar_t__ hwp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 void FUNC_1 (int,struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,void (*) (int,struct net_device*)) ;
 int FUNC_3 (int ) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(uint VAR_3, struct net_device *VAR_4)
{
 struct fec_enet_private *VAR_5;
 uint VAR_6;

 VAR_5 = FUNC_4(VAR_4);

 if (VAR_5->phy_addr < 32) {
  if ((VAR_6 = (VAR_3 & 0xffff)) != 0xffff && VAR_6 != 0) {


   VAR_5->phy_id = VAR_6 << 16;
   FUNC_2(VAR_4, FUNC_3(VAR_2),
       FUNC_1);
  } else {
   VAR_5->phy_addr++;
   FUNC_2(VAR_4, FUNC_3(VAR_1),
       FUNC_7);
  }
 } else {
  FUNC_5("FEC: No PHY device found.\n");

  FUNC_6(0, VAR_5->hwp + VAR_0);
  VAR_5->phy_speed = 0;



 }
}
