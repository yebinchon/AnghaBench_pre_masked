
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
struct hci_inq_res {struct hci_inq_res* next; } ;
typedef int err_t ;
struct TYPE_2__ {int (* inq_complete ) (void*,struct hci_pcb*,struct hci_inq_res*,int ) ;struct hci_inq_res* ires; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct hci_inq_res*) ;
 struct pbuf* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pbuf*) ;
 struct pbuf* FUNC_4 (struct pbuf*,int ,int ,int ) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pbuf*,int ) ;

err_t FUNC_7(u32_t VAR_9,u16_t VAR_10,u16_t VAR_11,u8_t VAR_12,u8_t VAR_13,err_t (*VAR_14)(void *VAR_15,struct hci_pcb *VAR_16,struct hci_inq_res *VAR_17,u16_t VAR_18))
{
 struct pbuf *VAR_19 = ((void*)0);
 struct hci_inq_res *VAR_20;


 while(VAR_7->ires != ((void*)0)) {
  VAR_20 = VAR_7->ires;
  VAR_7->ires = VAR_7->ires->next;
  FUNC_1(&VAR_8,VAR_20);
 }

 VAR_7->inq_complete = VAR_14;
 if((VAR_19=FUNC_2(VAR_6,VAR_4,VAR_5))==((void*)0)) {
  FUNC_0("hci_periodic_inquiry: Could not allocate memory for pbuf\n");
  return VAR_0;
 }


 VAR_19 = FUNC_4(VAR_19,VAR_3,VAR_2,VAR_4);


 ((u16_t*)VAR_19->payload)[2] = FUNC_5(VAR_11);
 ((u16_t*)VAR_19->payload)[3] = FUNC_5(VAR_10);
 ((u8_t*)VAR_19->payload)[8] = (VAR_9&0xff);
 ((u8_t*)VAR_19->payload)[9] = (VAR_9>>8);
 ((u8_t*)VAR_19->payload)[10] = (VAR_9>>16);

 ((u8_t*)VAR_19->payload)[11] = VAR_12;
 ((u8_t*)VAR_19->payload)[12] = VAR_13;

 FUNC_6(VAR_19,VAR_19->tot_len);
 FUNC_3(VAR_19);

 return VAR_1;
}
