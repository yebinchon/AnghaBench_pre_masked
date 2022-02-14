
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ target_busy; scalar_t__ target_blocked; struct scsi_device* starget_sdev_user; scalar_t__ single_lun; } ;
struct scsi_device {int starved_entry; } ;
struct Scsi_Host {int starved_list; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct scsi_target* FUNC_4 (struct scsi_device*) ;
 scalar_t__ FUNC_5 (struct scsi_target*) ;
 int FUNC_6 (int ,struct scsi_target*,char*) ;

__attribute__((used)) static inline int FUNC_7(struct Scsi_Host *VAR_1,
        struct scsi_device *VAR_2)
{
 struct scsi_target *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->single_lun) {
  if (VAR_3->starget_sdev_user &&
      VAR_3->starget_sdev_user != VAR_2)
   return 0;
  VAR_3->starget_sdev_user = VAR_2;
 }

 if (VAR_3->target_busy == 0 && VAR_3->target_blocked) {



  if (--VAR_3->target_blocked == 0) {
   FUNC_0(3, FUNC_6(VAR_0, VAR_3,
      "unblocking target at zero depth\n"));
  } else
   return 0;
 }

 if (FUNC_5(VAR_3)) {
  if (FUNC_3(&VAR_2->starved_entry))
   FUNC_1(&VAR_2->starved_entry,
          &VAR_1->starved_list);
  return 0;
 }


 if (!FUNC_3(&VAR_2->starved_entry))
  FUNC_2(&VAR_2->starved_entry);
 return 1;
}
