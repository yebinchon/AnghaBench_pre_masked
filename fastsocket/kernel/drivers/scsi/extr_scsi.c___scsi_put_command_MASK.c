
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int list; } ;
struct device {int dummy; } ;
struct Scsi_Host {int cmd_pool; int free_list_lock; int free_list; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ,struct scsi_cmnd*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(struct Scsi_Host *VAR_0, struct scsi_cmnd *VAR_1,
   struct device *VAR_2)
{
 unsigned long VAR_3;


 FUNC_5(&VAR_0->free_list_lock, VAR_3);
 if (FUNC_7(FUNC_2(&VAR_0->free_list))) {
  FUNC_1(&VAR_1->list, &VAR_0->free_list);
  VAR_1 = ((void*)0);
 }
 FUNC_6(&VAR_0->free_list_lock, VAR_3);

 if (FUNC_0(VAR_1 != ((void*)0)))
  FUNC_4(VAR_0->cmd_pool, VAR_1);

 FUNC_3(VAR_2);
}
