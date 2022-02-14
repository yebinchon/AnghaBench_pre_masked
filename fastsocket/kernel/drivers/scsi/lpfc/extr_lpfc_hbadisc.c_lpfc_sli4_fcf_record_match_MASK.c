
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct lpfc_hba {int dummy; } ;
struct lpfc_fcf_rec {scalar_t__ priority; int fabric_name; int switch_name; int mac_addr; int vlan_id; } ;
struct fcf_record {scalar_t__ fip_priority; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct fcf_record*) ;
 int FUNC_1 (int ,struct fcf_record*) ;
 int FUNC_2 (int ,struct fcf_record*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(struct lpfc_hba *VAR_1,
      struct lpfc_fcf_rec *VAR_2,
      struct fcf_record *VAR_3,
      uint16_t VAR_4)
{
 if (VAR_4 != VAR_0)
  if (!FUNC_3(VAR_2->vlan_id, VAR_4))
   return 0;
 if (!FUNC_1(VAR_2->mac_addr, VAR_3))
  return 0;
 if (!FUNC_2(VAR_2->switch_name, VAR_3))
  return 0;
 if (!FUNC_0(VAR_2->fabric_name, VAR_3))
  return 0;
 if (VAR_2->priority != VAR_3->fip_priority)
  return 0;
 return 1;
}
