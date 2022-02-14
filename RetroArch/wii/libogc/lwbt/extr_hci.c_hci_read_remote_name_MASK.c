
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
struct hci_inq_res {int psrm; int psm; int co; int bdaddr; struct hci_inq_res* next; } ;
struct bd_addr {int addr; } ;
typedef int err_t ;
struct TYPE_2__ {struct hci_inq_res* ires; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,struct bd_addr*) ;
 struct pbuf* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pbuf*) ;
 struct pbuf* FUNC_4 (struct pbuf*,int ,int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct pbuf*,int ) ;

err_t FUNC_8(struct bd_addr *VAR_8)
{
 u16_t VAR_9;
 struct pbuf *VAR_10 = ((void*)0);
 struct hci_inq_res *VAR_11;
 u8_t VAR_12, VAR_13;

 for(VAR_11=VAR_7->ires;VAR_11!=((void*)0);VAR_11=VAR_11->next) {
  if(FUNC_1(&(VAR_11->bdaddr),VAR_8)) {
   VAR_12 = VAR_11->psrm;
   VAR_13 = VAR_11->psm;
   VAR_9 = VAR_11->co;
   break;
  }
 }

 if(VAR_11==((void*)0)) {
  VAR_12 = 0x01;
  VAR_13 = 0x00;
  VAR_9 = 0x00;
 }

 if((VAR_10=FUNC_2(VAR_6,VAR_4,VAR_5))==((void*)0)) {
  FUNC_0("hci_read_remote_name: Could not allocate memory for pbuf\n");
  return VAR_0;
 }


 VAR_10 = FUNC_4(VAR_10,VAR_3,VAR_2,VAR_4);

 FUNC_6(((u8_t *)VAR_10->payload+4),VAR_8->addr,6);
 ((u8_t*)VAR_10->payload)[10] = VAR_12;
 ((u8_t*)VAR_10->payload)[11] = VAR_13;
 ((u16_t*)VAR_10->payload)[6] = FUNC_5(VAR_9);

 FUNC_7(VAR_10, VAR_10->tot_len);
 FUNC_3(VAR_10);

 return VAR_1;

}
