
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_system_interface_addr {scalar_t__ lun; } ;
struct ipmi_lan_addr {scalar_t__ remote_SWID; scalar_t__ local_SWID; scalar_t__ session_handle; scalar_t__ lun; } ;
struct ipmi_ipmb_addr {scalar_t__ slave_addr; scalar_t__ lun; } ;
struct ipmi_addr {scalar_t__ addr_type; scalar_t__ channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ipmi_addr*) ;
 scalar_t__ FUNC_1 (struct ipmi_addr*) ;
 scalar_t__ FUNC_2 (struct ipmi_addr*) ;

__attribute__((used)) static int
FUNC_3(struct ipmi_addr *VAR_1, struct ipmi_addr *VAR_2)
{
 if (VAR_1->addr_type != VAR_2->addr_type)
  return 0;

 if (VAR_1->channel != VAR_2->channel)
  return 0;

 if (VAR_1->addr_type == VAR_0) {
  struct ipmi_system_interface_addr *VAR_3
      = (struct ipmi_system_interface_addr *) VAR_1;
  struct ipmi_system_interface_addr *VAR_4
      = (struct ipmi_system_interface_addr *) VAR_2;
  return (VAR_3->lun == VAR_4->lun);
 }

 if (FUNC_0(VAR_1) || FUNC_1(VAR_1)) {
  struct ipmi_ipmb_addr *VAR_5
      = (struct ipmi_ipmb_addr *) VAR_1;
  struct ipmi_ipmb_addr *VAR_6
      = (struct ipmi_ipmb_addr *) VAR_2;

  return ((VAR_5->slave_addr == VAR_6->slave_addr)
   && (VAR_5->lun == VAR_6->lun));
 }

 if (FUNC_2(VAR_1)) {
  struct ipmi_lan_addr *VAR_7
   = (struct ipmi_lan_addr *) VAR_1;
  struct ipmi_lan_addr *VAR_8
      = (struct ipmi_lan_addr *) VAR_2;

  return ((VAR_7->remote_SWID == VAR_8->remote_SWID)
   && (VAR_7->local_SWID == VAR_8->local_SWID)
   && (VAR_7->session_handle
       == VAR_8->session_handle)
   && (VAR_7->lun == VAR_8->lun));
 }

 return 1;
}
