
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4_kwq_offload_pg {int flags; int l2hdr_nbytes; scalar_t__ vlan_tag; int pg_flags; int host_opaque; int ipid_start; int etype; int sa5; int sa4; int sa3; int sa2; int sa1; int sa0; int da5; int da4; int da3; int da2; int da1; int da0; int op_code; } ;
struct kwqe {int dummy; } ;
struct cnic_sock {scalar_t__ vlan_id; int l5_cid; int * ha; int kwqe1; struct cnic_dev* dev; } ;
struct cnic_dev {int (* submit_kwqes ) (struct cnic_dev*,struct kwqe**,int) ;int * mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct l4_kwq_offload_pg*,int ,int) ;
 int FUNC_1 (struct cnic_dev*,struct kwqe**,int) ;

__attribute__((used)) static int FUNC_2(struct cnic_sock *VAR_7)
{
 struct cnic_dev *VAR_8 = VAR_7->dev;
 struct l4_kwq_offload_pg *VAR_9;
 struct kwqe *VAR_10[1];

 VAR_9 = (struct l4_kwq_offload_pg *) &VAR_7->kwqe1;
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));
 VAR_10[0] = (struct kwqe *) VAR_9;

 VAR_9->op_code = VAR_3;
 VAR_9->flags =
  VAR_6 << VAR_4;
 VAR_9->l2hdr_nbytes = VAR_1;

 VAR_9->da0 = VAR_7->ha[0];
 VAR_9->da1 = VAR_7->ha[1];
 VAR_9->da2 = VAR_7->ha[2];
 VAR_9->da3 = VAR_7->ha[3];
 VAR_9->da4 = VAR_7->ha[4];
 VAR_9->da5 = VAR_7->ha[5];

 VAR_9->sa0 = VAR_8->mac_addr[0];
 VAR_9->sa1 = VAR_8->mac_addr[1];
 VAR_9->sa2 = VAR_8->mac_addr[2];
 VAR_9->sa3 = VAR_8->mac_addr[3];
 VAR_9->sa4 = VAR_8->mac_addr[4];
 VAR_9->sa5 = VAR_8->mac_addr[5];

 VAR_9->etype = VAR_2;
 VAR_9->ipid_start = VAR_0;
 VAR_9->host_opaque = VAR_7->l5_cid;

 if (VAR_7->vlan_id) {
  VAR_9->pg_flags |= VAR_5;
  VAR_9->vlan_tag = VAR_7->vlan_id;
  VAR_9->l2hdr_nbytes += 4;
 }

 return VAR_8->submit_kwqes(VAR_8, VAR_10, 1);
}
