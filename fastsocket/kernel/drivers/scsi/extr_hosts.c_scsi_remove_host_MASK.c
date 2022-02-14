
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int shost_gendev; int shost_dev; int host_lock; int scan_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct Scsi_Host*) ;
 scalar_t__ FUNC_6 (struct Scsi_Host*,int ) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct Scsi_Host *VAR_4)
{
 unsigned long VAR_5;
 FUNC_3(&VAR_4->scan_mutex);
 FUNC_8(VAR_4->host_lock, VAR_5);
 if (FUNC_6(VAR_4, VAR_0))
  if (FUNC_6(VAR_4, VAR_1)) {
   FUNC_9(VAR_4->host_lock, VAR_5);
   FUNC_4(&VAR_4->scan_mutex);
   return;
  }
 FUNC_9(VAR_4->host_lock, VAR_5);
 FUNC_5(VAR_4);
 FUNC_4(&VAR_4->scan_mutex);
 FUNC_7(VAR_4);

 FUNC_8(VAR_4->host_lock, VAR_5);
 if (FUNC_6(VAR_4, VAR_2))
  FUNC_0(FUNC_6(VAR_4, VAR_3));
 FUNC_9(VAR_4->host_lock, VAR_5);

 FUNC_10(&VAR_4->shost_gendev);
 FUNC_2(&VAR_4->shost_dev);
 FUNC_1(&VAR_4->shost_gendev);
}
