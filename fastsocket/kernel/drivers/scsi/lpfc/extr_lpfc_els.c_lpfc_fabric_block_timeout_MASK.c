
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {TYPE_1__* pport; } ;
struct TYPE_2__ {int work_port_events; int work_port_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(unsigned long VAR_1)
{
 struct lpfc_hba *VAR_2 = (struct lpfc_hba *) VAR_1;
 unsigned long VAR_3;
 uint32_t VAR_4;

 FUNC_1(&VAR_2->pport->work_port_lock, VAR_3);
 VAR_4 = VAR_2->pport->work_port_events & VAR_0;
 if (!VAR_4)
  VAR_2->pport->work_port_events |= VAR_0;
 FUNC_2(&VAR_2->pport->work_port_lock, VAR_3);

 if (!VAR_4)
  FUNC_0(VAR_2);
 return;
}
