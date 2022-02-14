
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct fc_rport* queuedata; } ;
struct fc_rport {int dev; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct Scsi_Host*,struct fc_rport*,int *) ;
 struct Scsi_Host* FUNC_1 (struct fc_rport*) ;

__attribute__((used)) static void
FUNC_2(struct request_queue *VAR_0)
{
 struct fc_rport *VAR_1 = VAR_0->queuedata;
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_2, VAR_1, &VAR_1->dev);
}
