
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16_t ;
struct pbuf {struct hci_acl_hdr* payload; } ;
struct hci_link {int connhdl; int bdaddr; struct hci_link* next; } ;
struct hci_acl_hdr {int len; int connhdl_pb_bc; } ;
struct TYPE_2__ {scalar_t__ host_num_acl; scalar_t__ flow; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pbuf*) ;
 int FUNC_1 (struct pbuf*,int ) ;
 struct hci_link* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct pbuf*,int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct pbuf *VAR_4)
{
 struct hci_acl_hdr *VAR_5;
 struct hci_link *VAR_6;
 u16_t VAR_7;

 VAR_5 = VAR_4->payload;
 FUNC_1(VAR_4, -VAR_0);

 VAR_7 = FUNC_4(VAR_5->connhdl_pb_bc) & 0x0FFF;

 if(VAR_3->flow) {



  --VAR_3->host_num_acl;
  if(VAR_3->host_num_acl == 0) {
   FUNC_2(VAR_7, VAR_1);
   VAR_3->host_num_acl = VAR_1;
  }
 }

 for(VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
  if(VAR_6->connhdl == VAR_7) {
   break;
  }
 }

 if(VAR_6 != ((void*)0)) {
  if(FUNC_4(VAR_5->len)) {

   FUNC_3(VAR_4, &(VAR_6->bdaddr));
  } else {
   FUNC_0(VAR_4);
  }
 } else {
  FUNC_0(VAR_4);
 }
}
