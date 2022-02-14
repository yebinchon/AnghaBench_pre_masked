
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
struct hci_link_key {struct hci_link_key* next; } ;
typedef int err_t ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ bdaddr; struct hci_link_key* keyres; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct hci_link_key*) ;
 struct pbuf* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pbuf*) ;
 struct pbuf* FUNC_4 (struct pbuf*,int ,int ,int ) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (struct pbuf*,int ) ;

err_t FUNC_7()
{
 struct pbuf *VAR_9 = ((void*)0);
 struct hci_link_key *VAR_10;


 while(VAR_7->keyres != ((void*)0)) {
  VAR_10 = VAR_7->keyres;
  VAR_7->keyres = VAR_7->keyres->next;
  FUNC_1(&VAR_8,VAR_10);
 }

 if((VAR_9=FUNC_2(VAR_6,VAR_4,VAR_5))==((void*)0)) {
  FUNC_0("hci_read_stored_link_keys: Could not allocate memory for pbuf\n");
  return VAR_0;
 }

 VAR_9 = FUNC_4(VAR_9,VAR_3,VAR_2,VAR_4);

 FUNC_5((void*)((u8_t*)VAR_9->payload + 4),VAR_7->bdaddr.addr,6);
 ((u8_t*)VAR_9->payload)[10] = 1;

 FUNC_6(VAR_9,VAR_9->tot_len);
 FUNC_3(VAR_9);

 return VAR_1;
}
