
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iscsi_mac; } ;
struct bnx2x {int iscsi_l2_mac_obj; TYPE_1__ cnic_eth_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct bnx2x*,int ,int *,int,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2)
{
 unsigned long VAR_3 = 0;

 FUNC_0(VAR_1, &VAR_3);
 return FUNC_1(VAR_2, VAR_2->cnic_eth_dev.iscsi_mac,
     &VAR_2->iscsi_l2_mac_obj, 1,
     VAR_0, &VAR_3);
}
