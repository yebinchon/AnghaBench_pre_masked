
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int work_port_events; int work_port_lock; struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(unsigned long VAR_1)
{
 struct lpfc_vport *VAR_2 = (struct lpfc_vport *) VAR_1;
 struct lpfc_hba *VAR_3 = VAR_2->phba;
 uint32_t VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_2->work_port_lock, VAR_5);
 VAR_4 = VAR_2->work_port_events & VAR_0;
 if (!VAR_4)
  VAR_2->work_port_events |= VAR_0;
 FUNC_2(&VAR_2->work_port_lock, VAR_5);

 if (!VAR_4)
  FUNC_0(VAR_3);
 return;
}
