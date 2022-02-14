
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
struct hci_link {int connhdl; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pbuf*) ;
 struct pbuf* FUNC_3 (struct pbuf*,int ,int ,int ) ;
 struct hci_link* FUNC_4 (struct bd_addr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pbuf*,int ) ;

err_t FUNC_7(struct bd_addr *VAR_8, u16_t VAR_9)
{
 struct pbuf *VAR_10;
 struct hci_link *VAR_11;


 VAR_11 = FUNC_4(VAR_8);

 if(VAR_11 == ((void*)0)) {
  FUNC_0("hci_write_link_policy_settings: ACL connection does not exist\n");
  return VAR_0;
 }

 if( (VAR_10 = FUNC_1(VAR_7, VAR_5, VAR_6)) == ((void*)0)) {
  FUNC_0("hci_write_link_policy_settings: Could not allocate memory for pbuf\n");
  return VAR_1;
 }

 VAR_10 = FUNC_3(VAR_10, VAR_4, VAR_3, VAR_5);


 ((u16_t *)VAR_10->payload)[2] = FUNC_5(VAR_11->connhdl);
 ((u16_t *)VAR_10->payload)[3] = FUNC_5(VAR_9);

 FUNC_6(VAR_10, VAR_10->tot_len);
 FUNC_2(VAR_10);
 return VAR_2;
}
