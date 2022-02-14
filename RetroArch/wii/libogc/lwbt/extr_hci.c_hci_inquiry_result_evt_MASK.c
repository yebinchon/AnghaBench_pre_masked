
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct pbuf {scalar_t__ payload; } ;
struct hci_inq_res {int psrm; int psm; int * next; int co; int cod; int bdaddr; } ;
struct bd_addr {int dummy; } ;
struct TYPE_2__ {int ires; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct hci_inq_res*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct bd_addr*) ;
 struct hci_inq_res* FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static void FUNC_6(struct pbuf *VAR_3)
{
 u8_t VAR_4;
 u32_t VAR_5,VAR_6;
 struct bd_addr *VAR_7;
 struct hci_inq_res *VAR_8;

 VAR_4 = ((u8_t*)VAR_3->payload)[0];

 for(VAR_5=0;VAR_5<VAR_4 && VAR_5<VAR_0;VAR_5++) {
  VAR_6 = (VAR_5*14);
  VAR_7 = (void*)(((u8_t*)VAR_3->payload)+(1+VAR_6));
  if((VAR_8=FUNC_3(&VAR_2))!=((void*)0)) {
   FUNC_2(&(VAR_8->bdaddr),VAR_7);
   VAR_8->psrm = ((u8_t*)VAR_3->payload)[7+VAR_6];
   VAR_8->psm = ((u8_t*)VAR_3->payload)[8+VAR_6];
   FUNC_5(VAR_8->cod,((u8_t*)VAR_3->payload)+10+VAR_6,3);
   VAR_8->co = FUNC_4(*((u16_t*)(((u8_t*)VAR_3->payload)+13+VAR_6)));
   VAR_8->next = ((void*)0);

   FUNC_1(&(VAR_1->ires),VAR_8);
  } else
   FUNC_0("hci_inquriy_result_evt: Could not allocate memory for inquiry result\n");
 }

}
