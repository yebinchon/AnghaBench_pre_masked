
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uwb_rc_evt_dev_addr_mgmt {int dummy; } ;
struct uwb_rc {int dummy; } ;
struct uwb_mac_addr {int* data; } ;
struct uwb_dev_addr {int* data; } ;
typedef enum uwb_addr_type { ____Placeholder_uwb_addr_type } uwb_addr_type ;


 int VAR_0 ;


 int FUNC_0 (struct uwb_rc*,int,int const*,struct uwb_rc_evt_dev_addr_mgmt*) ;

__attribute__((used)) static int FUNC_1(struct uwb_rc *VAR_1,
      const void *VAR_2, enum uwb_addr_type VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0x1;
 const struct uwb_dev_addr *VAR_6 = VAR_2;
 const struct uwb_mac_addr *VAR_7 = VAR_2;
 struct uwb_rc_evt_dev_addr_mgmt VAR_8;
 const u8 *VAR_9;

 VAR_4 = -VAR_0;
 switch (VAR_3) {
 case 129:
  VAR_9 = VAR_6->data;
  break;
 case 128:
  VAR_9 = VAR_7->data;
  VAR_5 |= 0x2;
  break;
 default:
  return VAR_4;
 }
 return FUNC_0(VAR_1, VAR_5, VAR_9, &VAR_8);
}
