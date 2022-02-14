
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {scalar_t__ duplex; int flow_ctrl; int dev; int line_speed; scalar_t__ link_up; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct bnx2 *VAR_3)
{
 if (VAR_3->link_up) {
  FUNC_5(VAR_3->dev);
  FUNC_3(VAR_3->dev, "NIC %s Link is Up, %d Mbps %s duplex",
       FUNC_1(VAR_3),
       VAR_3->line_speed,
       VAR_3->duplex == VAR_0 ? "full" : "half");

  if (VAR_3->flow_ctrl) {
   if (VAR_3->flow_ctrl & VAR_1) {
    FUNC_6(", receive ");
    if (VAR_3->flow_ctrl & VAR_2)
     FUNC_6("& transmit ");
   }
   else {
    FUNC_6(", transmit ");
   }
   FUNC_6("flow control ON");
  }
  FUNC_6("\n");
 } else {
  FUNC_4(VAR_3->dev);
  FUNC_2(VAR_3->dev, "NIC %s Link is Down\n",
      FUNC_1(VAR_3));
 }

 FUNC_0(VAR_3);
}
