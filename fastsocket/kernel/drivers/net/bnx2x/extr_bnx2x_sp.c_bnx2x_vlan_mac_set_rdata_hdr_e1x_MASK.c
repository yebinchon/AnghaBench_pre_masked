
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mac_configuration_hdr {int length; int echo; int client_id; scalar_t__ offset; } ;
struct bnx2x_raw_obj {int cid; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_2,
 struct bnx2x_vlan_mac_obj *VAR_3, int VAR_4, int VAR_5,
 struct mac_configuration_hdr *VAR_6)
{
 struct bnx2x_raw_obj *VAR_7 = &VAR_3->raw;

 VAR_6->length = 1;
 VAR_6->offset = (u8)VAR_5;
 VAR_6->client_id = FUNC_0(0xff);
 VAR_6->echo = FUNC_1((VAR_7->cid & VAR_0) |
    (VAR_4 << VAR_1));
}
