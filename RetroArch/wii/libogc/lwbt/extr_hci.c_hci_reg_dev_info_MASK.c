
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8_t ;
typedef int u16_t ;
struct hci_inq_res {int * next; int co; void* psm; void* psrm; int cod; int bdaddr; } ;
struct bd_addr {int dummy; } ;
typedef int err_t ;
struct TYPE_2__ {int ires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct hci_inq_res*) ;
 int FUNC_1 (int *,struct bd_addr*) ;
 struct hci_inq_res* FUNC_2 (int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,void**,int) ;

err_t FUNC_4(struct bd_addr *VAR_5,u8_t *VAR_6,u8_t VAR_7,u8_t VAR_8,u16_t VAR_9)
{
 struct hci_inq_res *VAR_10;

 if(VAR_3==((void*)0)) return VAR_2;

 if((VAR_10=FUNC_2(&VAR_4))!=((void*)0)) {
  FUNC_1(&(VAR_10->bdaddr),VAR_5);
  FUNC_3(VAR_10->cod,VAR_6,3);
  VAR_10->psrm = VAR_7;
  VAR_10->psm = VAR_8;
  VAR_10->co = VAR_9;
  VAR_10->next = ((void*)0);

  FUNC_0(&(VAR_3->ires),VAR_10);
  return VAR_1;
 }
 return VAR_0;
}
