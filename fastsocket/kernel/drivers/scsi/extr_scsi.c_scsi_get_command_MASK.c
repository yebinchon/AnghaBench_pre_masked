
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; int list_lock; int cmd_list; int host; } ;
struct scsi_cmnd {int jiffies_at_alloc; int list; struct scsi_device* device; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct scsi_cmnd* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

struct scsi_cmnd *FUNC_8(struct scsi_device *VAR_1, gfp_t VAR_2)
{
 struct scsi_cmnd *VAR_3;


 if (!FUNC_2(&VAR_1->sdev_gendev))
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_1->host, VAR_2);

 if (FUNC_3(VAR_3 != ((void*)0))) {
  unsigned long VAR_4;

  VAR_3->device = VAR_1;
  FUNC_0(&VAR_3->list);
  FUNC_6(&VAR_1->list_lock, VAR_4);
  FUNC_4(&VAR_3->list, &VAR_1->cmd_list);
  FUNC_7(&VAR_1->list_lock, VAR_4);
  VAR_3->jiffies_at_alloc = VAR_0;
 } else
  FUNC_5(&VAR_1->sdev_gendev);

 return VAR_3;
}
