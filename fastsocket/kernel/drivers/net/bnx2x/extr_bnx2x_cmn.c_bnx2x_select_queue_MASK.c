
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vlan_ethhdr {int h_vlan_encapsulated_proto; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_proto; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct bnx2x*,int ) ;
 struct bnx2x* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;

u16 FUNC_7(struct net_device *VAR_4, struct sk_buff *VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_5(VAR_4);

 if (FUNC_1(VAR_6) && !FUNC_2(VAR_6)) {
  struct ethhdr *VAR_7 = (struct ethhdr *)VAR_5->data;
  u16 VAR_8 = FUNC_6(VAR_7->h_proto);


  if (VAR_8 == VAR_0) {
   struct vlan_ethhdr *VAR_9 =
    (struct vlan_ethhdr *)VAR_5->data;

   VAR_8 = FUNC_6(VAR_9->h_vlan_encapsulated_proto);
  }


  if ((VAR_8 == VAR_1) || (VAR_8 == VAR_2))
   return FUNC_4(VAR_6, VAR_3);
 }


 return FUNC_3(VAR_4, VAR_5) % FUNC_0(VAR_6);
}
