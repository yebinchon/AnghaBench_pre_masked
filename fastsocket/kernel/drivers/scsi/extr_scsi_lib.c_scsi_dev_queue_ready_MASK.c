
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ device_busy; scalar_t__ device_blocked; } ;
struct request_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ,struct scsi_device*,char*) ;

__attribute__((used)) static inline int FUNC_4(struct request_queue *VAR_1,
      struct scsi_device *VAR_2)
{
 if (VAR_2->device_busy == 0 && VAR_2->device_blocked) {



  if (--VAR_2->device_blocked == 0) {
   FUNC_0(3,
       FUNC_3(VAR_0, VAR_2,
       "unblocking device at zero depth\n"));
  } else {
   FUNC_1(VAR_1);
   return 0;
  }
 }
 if (FUNC_2(VAR_2))
  return 0;

 return 1;
}
