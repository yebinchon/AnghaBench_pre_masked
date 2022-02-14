
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int starved_entry; } ;
struct request_queue {int dummy; } ;
struct Scsi_Host {scalar_t__ host_busy; scalar_t__ host_blocked; int starved_list; int host_no; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (struct Scsi_Host*) ;
 scalar_t__ FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static inline int FUNC_7(struct request_queue *VAR_0,
       struct Scsi_Host *VAR_1,
       struct scsi_device *VAR_2)
{
 if (FUNC_5(VAR_1))
  return 0;
 if (VAR_1->host_busy == 0 && VAR_1->host_blocked) {



  if (--VAR_1->host_blocked == 0) {
   FUNC_0(3,
    FUNC_4("scsi%d unblocking host at zero depth\n",
     VAR_1->host_no));
  } else {
   return 0;
  }
 }
 if (FUNC_6(VAR_1)) {
  if (FUNC_3(&VAR_2->starved_entry))
   FUNC_1(&VAR_2->starved_entry, &VAR_1->starved_list);
  return 0;
 }


 if (!FUNC_3(&VAR_2->starved_entry))
  FUNC_2(&VAR_2->starved_entry);

 return 1;
}
