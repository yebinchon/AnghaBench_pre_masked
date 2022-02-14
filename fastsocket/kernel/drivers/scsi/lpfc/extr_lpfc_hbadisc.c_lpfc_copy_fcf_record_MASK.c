
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_fcf_rec {void** switch_name; int priority; void* fcf_indx; void** mac_addr; void** fabric_name; } ;
struct fcf_record {int fip_priority; } ;


 void* FUNC_0 (int ,struct fcf_record*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_1(struct lpfc_fcf_rec *VAR_23,
       struct fcf_record *VAR_24)
{

 VAR_23->fabric_name[0] =
  FUNC_0(VAR_0, VAR_24);
 VAR_23->fabric_name[1] =
  FUNC_0(VAR_1, VAR_24);
 VAR_23->fabric_name[2] =
  FUNC_0(VAR_2, VAR_24);
 VAR_23->fabric_name[3] =
  FUNC_0(VAR_3, VAR_24);
 VAR_23->fabric_name[4] =
  FUNC_0(VAR_4, VAR_24);
 VAR_23->fabric_name[5] =
  FUNC_0(VAR_5, VAR_24);
 VAR_23->fabric_name[6] =
  FUNC_0(VAR_6, VAR_24);
 VAR_23->fabric_name[7] =
  FUNC_0(VAR_7, VAR_24);

 VAR_23->mac_addr[0] = FUNC_0(VAR_9, VAR_24);
 VAR_23->mac_addr[1] = FUNC_0(VAR_10, VAR_24);
 VAR_23->mac_addr[2] = FUNC_0(VAR_11, VAR_24);
 VAR_23->mac_addr[3] = FUNC_0(VAR_12, VAR_24);
 VAR_23->mac_addr[4] = FUNC_0(VAR_13, VAR_24);
 VAR_23->mac_addr[5] = FUNC_0(VAR_14, VAR_24);

 VAR_23->fcf_indx = FUNC_0(VAR_8, VAR_24);

 VAR_23->priority = VAR_24->fip_priority;

 VAR_23->switch_name[0] =
  FUNC_0(VAR_15, VAR_24);
 VAR_23->switch_name[1] =
  FUNC_0(VAR_16, VAR_24);
 VAR_23->switch_name[2] =
  FUNC_0(VAR_17, VAR_24);
 VAR_23->switch_name[3] =
  FUNC_0(VAR_18, VAR_24);
 VAR_23->switch_name[4] =
  FUNC_0(VAR_19, VAR_24);
 VAR_23->switch_name[5] =
  FUNC_0(VAR_20, VAR_24);
 VAR_23->switch_name[6] =
  FUNC_0(VAR_21, VAR_24);
 VAR_23->switch_name[7] =
  FUNC_0(VAR_22, VAR_24);
}
