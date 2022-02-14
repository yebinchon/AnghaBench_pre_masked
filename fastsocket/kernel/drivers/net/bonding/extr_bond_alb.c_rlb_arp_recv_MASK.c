
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct packet_type {int dummy; } ;
struct net_device {int priv_flags; int flags; } ;
struct bonding {int dummy; } ;
struct arp_pkt {scalar_t__ op_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int * FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 struct bonding* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct bonding*,struct arp_pkt*) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 struct net_device* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_8, struct net_device *VAR_9, struct packet_type *VAR_10, struct net_device *VAR_11)
{
 struct bonding *VAR_12;
 struct arp_pkt *VAR_13 = (struct arp_pkt *)VAR_8->data;
 int VAR_14 = VAR_5;

 if (FUNC_2(VAR_9) != &VAR_7)
  goto out;

 while (VAR_9->priv_flags & VAR_2)
  VAR_9 = FUNC_9(VAR_9);

 if (!(VAR_9->priv_flags & VAR_3) ||
     !(VAR_9->flags & VAR_4))
  goto out;

 if (!VAR_13) {
  FUNC_5("Packet has no ARP data\n");
  goto out;
 }

 VAR_8 = FUNC_8(VAR_8, VAR_1);
 if (!VAR_8)
  goto out;

 if (!FUNC_6(VAR_8, FUNC_0(VAR_9)))
  goto out;

 if (VAR_8->len < sizeof(struct arp_pkt)) {
  FUNC_5("Packet is too small to be an ARP\n");
  goto out;
 }

 if (VAR_13->op_code == FUNC_3(VAR_0)) {

  VAR_12 = FUNC_4(VAR_9);
  FUNC_7(VAR_12, VAR_13);
  FUNC_5("Server received an ARP Reply from client\n");
 }

 VAR_14 = VAR_6;

out:
 FUNC_1(VAR_8);

 return VAR_14;
}
