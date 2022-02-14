
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {scalar_t__ remote_ifindex; scalar_t__ remote_ip; scalar_t__ remote_vni; } ;
struct vxlan_dev {int ttl; int tos; int flags; int dst_port; scalar_t__ addrmax; scalar_t__ age_interval; scalar_t__ saddr; int port_max; int port_min; struct vxlan_rdst default_dst; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ifla_vxlan_port_range {int high; int low; } ;
typedef int ports ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct ifla_vxlan_port_range*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_21, const struct net_device *VAR_22)
{
 const struct vxlan_dev *VAR_23 = FUNC_1(VAR_22);
 const struct vxlan_rdst *VAR_24 = &VAR_23->default_dst;
 struct ifla_vxlan_port_range VAR_25 = {
  .low = FUNC_0(VAR_23->port_min),
  .high = FUNC_0(VAR_23->port_max),
 };

 if (FUNC_5(VAR_21, VAR_3, VAR_24->remote_vni))
  goto nla_put_failure;

 if (VAR_24->remote_ip && FUNC_4(VAR_21, VAR_2, VAR_24->remote_ip))
  goto nla_put_failure;

 if (VAR_24->remote_ifindex && FUNC_5(VAR_21, VAR_8, VAR_24->remote_ifindex))
  goto nla_put_failure;

 if (VAR_23->saddr && FUNC_4(VAR_21, VAR_9, VAR_23->saddr))
  goto nla_put_failure;

 if (FUNC_6(VAR_21, VAR_15, VAR_23->ttl) ||
     FUNC_6(VAR_21, VAR_14, VAR_23->tos) ||
     FUNC_6(VAR_21, VAR_6,
   !!(VAR_23->flags & VAR_18)) ||
     FUNC_6(VAR_21, VAR_12,
   !!(VAR_23->flags & VAR_19)) ||
     FUNC_6(VAR_21, VAR_13, !!(VAR_23->flags & VAR_20)) ||
     FUNC_6(VAR_21, VAR_4,
   !!(VAR_23->flags & VAR_16)) ||
     FUNC_6(VAR_21, VAR_5,
   !!(VAR_23->flags & VAR_17)) ||
     FUNC_5(VAR_21, VAR_1, VAR_23->age_interval) ||
     FUNC_5(VAR_21, VAR_7, VAR_23->addrmax) ||
     FUNC_3(VAR_21, VAR_10, VAR_23->dst_port))
  goto nla_put_failure;

 if (FUNC_2(VAR_21, VAR_11, sizeof(VAR_25), &VAR_25))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
