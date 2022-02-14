
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct linkkey_info {int key; int bdaddr; } ;
struct hci_pcb {struct hci_link_key* keyres; } ;
struct hci_link_key {struct hci_link_key* next; int key; int bdaddr; } ;
struct bt_state {scalar_t__ num_maxdevs; scalar_t__ usrdata; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__,struct hci_link_key*,...) ;
 scalar_t__ FUNC_1 (struct bt_state*,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int) ;

err_t FUNC_4(void *VAR_6,struct hci_pcb *VAR_7,u8_t VAR_8,u8_t VAR_9,u8_t VAR_10)
{
 u8_t VAR_11 = 0;
 struct hci_link_key *VAR_12;
 struct linkkey_info *VAR_13;
 struct bt_state *VAR_14 = (struct bt_state*)VAR_6;

 if(!VAR_7) return VAR_0;

 FUNC_0("bte_read_stored_link_key_complete(%02x,%p)\n",VAR_10,VAR_7->keyres);

 if(VAR_14==((void*)0)) return VAR_2;
 if(!(VAR_8==VAR_3 && VAR_9==VAR_4)) return FUNC_1(VAR_14,VAR_0);

 if(VAR_10==VAR_5) {
  VAR_13 = (struct linkkey_info*)VAR_14->usrdata;
  if(VAR_7->keyres!=((void*)0) && VAR_13!=((void*)0)) {
   for(VAR_11=0,VAR_12=VAR_7->keyres;VAR_11<VAR_14->num_maxdevs && VAR_12!=((void*)0);VAR_11++) {
    FUNC_2(&(VAR_13[VAR_11].bdaddr),&(VAR_12->bdaddr));
    FUNC_3(VAR_13[VAR_11].key,VAR_12->key,16);

    VAR_12 = VAR_12->next;
   }
  }
  FUNC_0("bte_read_stored_link_key_complete(%02x,%p,%d)\n",VAR_10,VAR_7->keyres,VAR_11);
  FUNC_1(VAR_14,VAR_11);
  return VAR_1;
 }

 return FUNC_1(VAR_14,VAR_2);
}
