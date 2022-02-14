
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vxlanhdr {int vx_vni; int vx_flags; } ;
struct vxlan_sock {TYPE_3__* sock; } ;
struct udphdr {scalar_t__ check; int len; void* source; void* dest; } ;
struct sk_buff {int encapsulation; int len; scalar_t__ vlan_tci; } ;
struct TYPE_4__ {int header_len; int dev; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
typedef int __u8 ;
typedef int __be32 ;
typedef void* __be16 ;
struct TYPE_6__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct iphdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net*,struct rtable*,struct sk_buff*,int ,int ,int ,int ,int ,void*,struct iphdr const*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 struct udphdr* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ,struct sk_buff*) ;

int FUNC_16(struct net *VAR_5, struct vxlan_sock *VAR_6,
     struct rtable *VAR_7, struct sk_buff *VAR_8,
     __be32 VAR_9, __be32 VAR_10, __u8 VAR_11, __u8 VAR_12, __be16 VAR_13,
     __be16 VAR_14, __be16 VAR_15, __be32 VAR_16)
{
 struct vxlanhdr *VAR_17;
 struct udphdr *VAR_18;
 int VAR_19;
 int VAR_20;
 const struct iphdr *VAR_21;

 if (!VAR_8->encapsulation) {

  VAR_8->encapsulation = 1;
 }

 VAR_19 = FUNC_0(VAR_7->u.dst.dev) + VAR_7->u.dst.header_len
   + VAR_4 + sizeof(struct iphdr)
   + (FUNC_14(VAR_8) ? VAR_2 : 0);


 VAR_20 = FUNC_9(VAR_8, VAR_19);
 if (FUNC_12(VAR_20))
  return VAR_20;

 if (FUNC_14(VAR_8)) {
  if (FUNC_1(!FUNC_3(VAR_8,
         FUNC_13(VAR_8))))
   return -VAR_0;

  VAR_8->vlan_tci = 0;
 }

 VAR_21 = FUNC_7(VAR_8);

 VAR_17 = (struct vxlanhdr *) FUNC_2(VAR_8, sizeof(*VAR_17));
 VAR_17->vx_flags = FUNC_5(VAR_3);
 VAR_17->vx_vni = VAR_16;

 FUNC_2(VAR_8, sizeof(*VAR_18));
 FUNC_10(VAR_8);
 VAR_18 = FUNC_11(VAR_8);

 VAR_18->dest = VAR_15;
 VAR_18->source = VAR_14;

 VAR_18->len = FUNC_6(VAR_8->len);
 VAR_18->check = 0;

 FUNC_15(VAR_6->sock->sk, VAR_8);

 VAR_20 = FUNC_4(VAR_8);
 if (VAR_20)
  return VAR_20;

 return FUNC_8(VAR_5, VAR_7, VAR_8, VAR_9, VAR_10,
   VAR_1, VAR_11, VAR_12, VAR_13, VAR_21);
}
