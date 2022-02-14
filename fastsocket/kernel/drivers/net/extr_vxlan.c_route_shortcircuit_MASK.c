
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_dev {int flags; } ;
struct sk_buff {int dummy; } ;
struct net_device {int addr_len; } ;
struct neighbour {int ha; } ;
struct iphdr {int daddr; } ;
struct TYPE_2__ {int h_dest; int h_source; int h_proto; } ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct neighbour* FUNC_5 (int *,int *,struct net_device*) ;
 int FUNC_6 (struct neighbour*) ;
 struct vxlan_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct net_device*,int ) ;

__attribute__((used)) static bool FUNC_11(struct net_device *VAR_2, struct sk_buff *VAR_3)
{
 struct vxlan_dev *VAR_4 = FUNC_7(VAR_2);
 struct neighbour *VAR_5;
 struct iphdr *VAR_6;

 if (FUNC_3(FUNC_1(VAR_3)->h_dest))
  return 0;

 VAR_5 = ((void*)0);
 switch (FUNC_8(FUNC_1(VAR_3)->h_proto)) {
 case 128:
  if (!FUNC_9(VAR_3, sizeof(struct iphdr)))
   return 0;
  VAR_6 = FUNC_2(VAR_3);
  VAR_5 = FUNC_5(&VAR_1, &VAR_6->daddr, VAR_2);
  break;
 default:
  return 0;
 }

 if (VAR_5) {
  bool VAR_7;

  VAR_7 = FUNC_0(FUNC_1(VAR_3)->h_dest, VAR_5->ha) != 0;
  if (VAR_7) {
   FUNC_4(FUNC_1(VAR_3)->h_source, FUNC_1(VAR_3)->h_dest,
    VAR_2->addr_len);
   FUNC_4(FUNC_1(VAR_3)->h_dest, VAR_5->ha, VAR_2->addr_len);
  }
  FUNC_6(VAR_5);
  return VAR_7;
 } else if (VAR_4->flags & VAR_0)
  FUNC_10(VAR_2, VAR_6->daddr);
 return 0;
}
