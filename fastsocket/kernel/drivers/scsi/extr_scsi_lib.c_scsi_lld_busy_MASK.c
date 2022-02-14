
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct Scsi_Host* host; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ FUNC_0 (struct request_queue*) ;
 scalar_t__ FUNC_1 (struct scsi_device*) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_0)
{
 struct scsi_device *VAR_1 = VAR_0->queuedata;
 struct Scsi_Host *VAR_2;

 if (FUNC_0(VAR_0))
  return 0;

 VAR_2 = VAR_1->host;







 if (FUNC_2(VAR_2) || FUNC_1(VAR_1))
  return 1;

 return 0;
}
