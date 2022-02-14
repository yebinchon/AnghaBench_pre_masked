
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_iocbq {int iocb_flag; int list; } ;
struct TYPE_2__ {size_t last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {TYPE_1__ sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t,size_t) ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_2(struct lpfc_hba *VAR_3,
        struct lpfc_sli_ring *VAR_4, uint16_t VAR_5)
{
 struct lpfc_iocbq *VAR_6;

 if (VAR_5 != 0 && VAR_5 <= VAR_3->sli.last_iotag) {
  VAR_6 = VAR_3->sli.iocbq_lookup[VAR_5];
  if (VAR_6->iocb_flag & VAR_2) {

   FUNC_0(&VAR_6->list);
   VAR_6->iocb_flag &= ~VAR_2;
   return VAR_6;
  }
 }
 FUNC_1(VAR_3, VAR_0, VAR_1,
   "0372 iotag x%x is out off range: max iotag (x%x)\n",
   VAR_5, VAR_3->sli.last_iotag);
 return ((void*)0);
}
