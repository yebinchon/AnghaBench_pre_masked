
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int perm_hwaddr; int dev; } ;
struct sk_buff {int priority; void* protocol; scalar_t__ mac_header; scalar_t__ network_header; int dev; } ;
struct port {int lacpdu; struct slave* slave; } ;
struct TYPE_2__ {void* h_proto; int h_source; int h_dest; } ;
struct lacpdu_header {int lacpdu; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct port *VAR_6)
{
 struct slave *VAR_7 = VAR_6->slave;
 struct sk_buff *VAR_8;
 struct lacpdu_header *VAR_9;
 int VAR_10 = sizeof(struct lacpdu_header);

 VAR_8 = FUNC_0(VAR_10);
 if (!VAR_8) {
  return -VAR_0;
 }

 VAR_8->dev = VAR_7->dev;
 FUNC_4(VAR_8);
 VAR_8->network_header = VAR_8->mac_header + VAR_2;
 VAR_8->protocol = VAR_3;
 VAR_8->priority = VAR_4;

 VAR_9 = (struct lacpdu_header *)FUNC_3(VAR_8, VAR_10);

 FUNC_2(VAR_9->hdr.h_dest, VAR_5, VAR_1);


 FUNC_2(VAR_9->hdr.h_source, VAR_7->perm_hwaddr, VAR_1);
 VAR_9->hdr.h_proto = VAR_3;

 VAR_9->lacpdu = VAR_6->lacpdu;

 FUNC_1(VAR_8);

 return 0;
}
