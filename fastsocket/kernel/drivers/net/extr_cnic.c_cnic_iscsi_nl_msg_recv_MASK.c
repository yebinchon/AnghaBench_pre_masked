
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int v4_addr; int v6_addr; } ;
struct iscsi_path {TYPE_1__ src; int * mac_addr; int vlan_id; int handle; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct cnic_sock {int flags; int * ha; int * src_ip; int vlan_id; } ;
struct cnic_local {struct cnic_sock* csk_tbl; int * ulp_ops; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_local*,struct cnic_sock*,int ) ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_sock*) ;
 int FUNC_5 (struct cnic_sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct cnic_dev *VAR_9, u32 VAR_10,
      char *VAR_11, u16 VAR_12)
{
 int VAR_13 = -VAR_1;

 switch (VAR_10) {
 case 128: {
  struct cnic_local *VAR_14;
  u32 VAR_15;
  struct cnic_sock *VAR_16;
  struct iscsi_path *VAR_17;

  if (VAR_12 < sizeof(*VAR_17))
   break;

  VAR_17 = (struct iscsi_path *) VAR_11;
  VAR_14 = VAR_9->cnic_priv;
  VAR_15 = (u32) VAR_17->handle;
  if (VAR_15 >= VAR_4)
   break;

  FUNC_9();
  if (!FUNC_8(VAR_14->ulp_ops[VAR_0])) {
   VAR_13 = -VAR_2;
   FUNC_10();
   break;
  }
  VAR_16 = &VAR_14->csk_tbl[VAR_15];
  FUNC_4(VAR_16);
  if (FUNC_3(VAR_16) &&
      FUNC_11(VAR_5, &VAR_16->flags)) {

   VAR_16->vlan_id = VAR_17->vlan_id;

   FUNC_7(VAR_16->ha, VAR_17->mac_addr, 6);
   if (FUNC_11(VAR_6, &VAR_16->flags))
    FUNC_7(&VAR_16->src_ip[0], &VAR_17->src.v6_addr,
           sizeof(struct in6_addr));
   else
    FUNC_7(&VAR_16->src_ip[0], &VAR_17->src.v4_addr,
           sizeof(struct in_addr));

   if (FUNC_6(VAR_16->ha)) {
    FUNC_1(VAR_16);
   } else if (!FUNC_11(VAR_8, &VAR_16->flags) &&
    !FUNC_11(VAR_7, &VAR_16->flags)) {

    FUNC_2(VAR_14, VAR_16,
     VAR_3);
    FUNC_0(VAR_5, &VAR_16->flags);
   }
  }
  FUNC_5(VAR_16);
  FUNC_10();
  VAR_13 = 0;
 }
 }

 return VAR_13;
}
