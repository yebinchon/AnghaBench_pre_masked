
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_ethhdr {scalar_t__ h_vlan_proto; int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int vlan_id; int * flags; scalar_t__ pkt_length; int id; } ;
struct TYPE_4__ {TYPE_1__ l2; } ;
struct qeth_hdr {TYPE_2__ hdr; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qeth_hdr*,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct qeth_card *VAR_9, struct qeth_hdr *VAR_10,
   struct sk_buff *VAR_11, int VAR_12, int VAR_13)
{
 struct vlan_ethhdr *VAR_14 = (struct vlan_ethhdr *)FUNC_3(VAR_11);

 FUNC_1(VAR_10, 0, sizeof(struct qeth_hdr));
 VAR_10->hdr.l2.id = VAR_2;


 if (VAR_13 == VAR_8)
  VAR_10->hdr.l2.flags[2] |= VAR_4;
 else if (VAR_13 == VAR_7)
  VAR_10->hdr.l2.flags[2] |= VAR_3;
 else
  VAR_10->hdr.l2.flags[2] |= VAR_5;

 VAR_10->hdr.l2.pkt_length = VAR_11->len-VAR_1;



 if (VAR_14->h_vlan_proto == FUNC_0(VAR_0)) {
  VAR_10->hdr.l2.flags[2] |= VAR_6;
  VAR_10->hdr.l2.vlan_id = FUNC_2(VAR_14->h_vlan_TCI);
 }
}
