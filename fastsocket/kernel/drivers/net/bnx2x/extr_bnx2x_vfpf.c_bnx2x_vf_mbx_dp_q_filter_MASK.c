
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfpf_q_mac_vlan_filter {int flags; int mac; int vlan_tag; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_2, int VAR_3, int VAR_4,
           struct vfpf_q_mac_vlan_filter *VAR_5)
{
 FUNC_0(VAR_3, "MAC-VLAN[%d] -- flags=0x%x\n", VAR_4, VAR_5->flags);
 if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_3, ", vlan=%d", VAR_5->vlan_tag);
 if (VAR_5->flags & VAR_0)
  FUNC_1(VAR_3, ", MAC=%pM", VAR_5->mac);
 FUNC_1(VAR_3, "\n");
}
