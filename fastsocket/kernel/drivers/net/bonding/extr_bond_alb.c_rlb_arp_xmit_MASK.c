
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rlb_update_delay_counter; } ;
struct bonding {TYPE_1__ alb_info; } ;
struct arp_pkt {scalar_t__ op_code; int ip_src; int mac_src; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct arp_pkt* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 struct slave* FUNC_4 (struct sk_buff*,struct bonding*) ;
 int FUNC_5 (struct bonding*,int ) ;

__attribute__((used)) static struct slave *FUNC_6(struct sk_buff *VAR_4, struct bonding *VAR_5)
{
 struct arp_pkt *VAR_6 = FUNC_0(VAR_4);
 struct slave *VAR_7 = ((void*)0);

 if (VAR_6->op_code == FUNC_1(VAR_0)) {



  VAR_7 = FUNC_4(VAR_4, VAR_5);
  if (VAR_7) {
   FUNC_2(VAR_6->mac_src,VAR_7->dev->dev_addr, VAR_2);
  }
  FUNC_3("Server sent ARP Reply packet\n");
 } else if (VAR_6->op_code == FUNC_1(VAR_1)) {





  FUNC_4(VAR_4, VAR_5);




  VAR_5->alb_info.rlb_update_delay_counter = VAR_3;






  FUNC_5(VAR_5, VAR_6->ip_src);
  FUNC_3("Server sent ARP Request packet\n");
 }

 return VAR_7;
}
