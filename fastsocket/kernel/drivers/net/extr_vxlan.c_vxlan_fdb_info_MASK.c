
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vxlan_rdst {scalar_t__ remote_ip; scalar_t__ remote_port; scalar_t__ remote_vni; scalar_t__ remote_ifindex; } ;
struct nda_cacheinfo {scalar_t__ ndm_refcnt; void* ndm_updated; scalar_t__ ndm_confirmed; void* ndm_used; } ;
struct vxlan_fdb {scalar_t__ updated; scalar_t__ used; struct nda_cacheinfo eth_addr; int flags; int state; } ;
struct TYPE_4__ {scalar_t__ remote_vni; } ;
struct vxlan_dev {scalar_t__ dst_port; TYPE_2__ default_dst; TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ndmsg {int ndm_type; int ndm_flags; int ndm_ifindex; int ndm_state; int ndm_family; } ;
typedef int ci ;
struct TYPE_3__ {int ifindex; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nda_cacheinfo) ;
 unsigned long VAR_12 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ndmsg*,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct nda_cacheinfo*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndmsg* FUNC_9 (struct nlmsghdr*) ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_13, struct vxlan_dev *VAR_14,
     const struct vxlan_fdb *VAR_15,
     u32 VAR_16, u32 VAR_17, int VAR_18, unsigned int VAR_19,
     const struct vxlan_rdst *VAR_20)
{
 unsigned long VAR_21 = VAR_12;
 struct nda_cacheinfo VAR_22;
 struct nlmsghdr *VAR_23;
 struct ndmsg *VAR_24;
 bool VAR_25, VAR_26;

 VAR_23 = FUNC_11(VAR_13, VAR_16, VAR_17, VAR_18, sizeof(*VAR_24), VAR_19);
 if (VAR_23 == ((void*)0))
  return -VAR_2;

 VAR_24 = FUNC_9(VAR_23);
 FUNC_3(VAR_24, 0, sizeof(*VAR_24));

 VAR_26 = VAR_25 = 1;

 if (VAR_18 == VAR_11) {
  VAR_24->ndm_family = VAR_1;
  VAR_25 = VAR_20->remote_ip != FUNC_0(VAR_4);
  VAR_26 = !FUNC_1(VAR_15->eth_addr);
 } else
  VAR_24->ndm_family = VAR_0;
 VAR_24->ndm_state = VAR_15->state;
 VAR_24->ndm_ifindex = VAR_14->dev->ifindex;
 VAR_24->ndm_flags = VAR_15->flags;
 VAR_24->ndm_type = VAR_6;

 if (VAR_26 && FUNC_4(VAR_13, VAR_8, VAR_3, &VAR_15->eth_addr))
  goto nla_put_failure;

 if (VAR_25 && FUNC_6(VAR_13, VAR_6, VAR_20->remote_ip))
  goto nla_put_failure;

 if (VAR_20->remote_port && VAR_20->remote_port != VAR_14->dst_port &&
     FUNC_5(VAR_13, VAR_9, VAR_20->remote_port))
  goto nla_put_failure;
 if (VAR_20->remote_vni != VAR_14->default_dst.remote_vni &&
     FUNC_7(VAR_13, VAR_10, VAR_20->remote_vni))
  goto nla_put_failure;
 if (VAR_20->remote_ifindex &&
     FUNC_7(VAR_13, VAR_7, VAR_20->remote_ifindex))
  goto nla_put_failure;

 VAR_22.ndm_used = FUNC_2(VAR_21 - VAR_15->used);
 VAR_22.ndm_confirmed = 0;
 VAR_22.ndm_updated = FUNC_2(VAR_21 - VAR_15->updated);
 VAR_22.ndm_refcnt = 0;

 if (FUNC_4(VAR_13, VAR_5, sizeof(VAR_22), &VAR_22))
  goto nla_put_failure;

 return FUNC_10(VAR_13, VAR_23);

nla_put_failure:
 FUNC_8(VAR_13, VAR_23);
 return -VAR_2;
}
