
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8_t ;
typedef scalar_t__ u16_t ;
struct inquiry_info_ex {int psrm; int psm; int co; int cod; int bdaddr; } ;
struct hci_pcb {int dummy; } ;
struct TYPE_4__ {int* addr; } ;
struct hci_inq_res {int* cod; int psrm; int psm; int co; struct hci_inq_res* next; TYPE_2__ bdaddr; } ;
struct bt_state {int dummy; } ;
typedef int err_t ;
struct TYPE_3__ {int num_founddevs; scalar_t__ num_maxdevs; struct inquiry_info_ex* info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bt_state*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct inquiry_info_ex*) ;
 int FUNC_3 (int,int,scalar_t__,int (*) (void*,struct hci_pcb*,struct hci_inq_res*,scalar_t__)) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (char*,int,...) ;

err_t FUNC_7(void *VAR_3,struct hci_pcb *VAR_4,struct hci_inq_res *VAR_5,u16_t VAR_6)
{
 u8_t VAR_7;
 struct hci_inq_res *VAR_8;
 struct bt_state *VAR_9 = (struct bt_state*)VAR_3;

 if(VAR_6==VAR_1) {
  if(VAR_5!=((void*)0)) {

   if(VAR_2.info!=((void*)0)) FUNC_2(VAR_2.info);
   VAR_2.info = ((void*)0);
   VAR_2.num_maxdevs = 0;
   VAR_2.num_founddevs = 0;

   VAR_8 = VAR_5;
   while(VAR_8!=((void*)0)) {
    VAR_2.num_founddevs++;
    VAR_8 = VAR_8->next;
   }

   VAR_8 = VAR_5;
   VAR_2.info = (struct inquiry_info_ex*)FUNC_4(sizeof(struct inquiry_info_ex)*VAR_2.num_founddevs);
   for(VAR_7=0;VAR_7<VAR_2.num_founddevs && VAR_8!=((void*)0);VAR_7++) {
    FUNC_1(&(VAR_2.info[VAR_7].bdaddr),&(VAR_8->bdaddr));
    FUNC_5(VAR_2.info[VAR_7].cod,VAR_8->cod,3);
    VAR_2.info[VAR_7].psrm = VAR_8->psrm;
    VAR_2.info[VAR_7].psm = VAR_8->psm;
    VAR_2.info[VAR_7].co = VAR_8->co;

    FUNC_6("bdaddr: %02x:%02x:%02x:%02x:%02x:%02x\n",VAR_8->bdaddr.addr[0],VAR_8->bdaddr.addr[1],VAR_8->bdaddr.addr[2],VAR_8->bdaddr.addr[3],VAR_8->bdaddr.addr[4],VAR_8->bdaddr.addr[5]);
    FUNC_6("cod:    %02x%02x%02x\n",VAR_8->cod[0],VAR_8->cod[1],VAR_8->cod[2]);
    FUNC_6("psrm:   %02x\n",VAR_8->psrm);
    FUNC_6("psm:   %02x\n",VAR_8->psm);
    FUNC_6("co:   %04x\n",VAR_8->co);
    VAR_8 = VAR_8->next;
   }
   FUNC_0(VAR_9,VAR_0);
  } else
   FUNC_3(0x009E8B33,0x03,VAR_2.num_maxdevs,FUNC_7);
 }
 return VAR_0;
}
