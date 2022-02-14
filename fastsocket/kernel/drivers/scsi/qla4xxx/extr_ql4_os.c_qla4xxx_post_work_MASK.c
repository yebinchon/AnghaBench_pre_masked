
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int work_lock; int work_list; } ;
struct qla4_work_evt {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct scsi_qla_host *VAR_0,
        struct qla4_work_evt *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->work_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->work_list);
 FUNC_3(&VAR_0->work_lock, VAR_2);
 FUNC_1(VAR_0);
}
