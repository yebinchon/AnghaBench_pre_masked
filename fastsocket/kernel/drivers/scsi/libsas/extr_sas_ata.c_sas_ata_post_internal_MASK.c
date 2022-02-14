
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int * uldd_task; } ;
struct ata_queued_cmd {int flags; int err_mask; struct sas_task* lldd_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sas_task*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_2)
{
 if (VAR_2->flags & VAR_1)
  VAR_2->err_mask |= VAR_0;

 if (VAR_2->err_mask) {
  struct sas_task *VAR_3 = VAR_2->lldd_task;

  VAR_2->lldd_task = ((void*)0);
  if (!VAR_3)
   return;
  VAR_3->uldd_task = ((void*)0);
  FUNC_0(VAR_3);
 }
}
