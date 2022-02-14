
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct Scsi_Host* queuedata; } ;
struct Scsi_Host {int shost_gendev; } ;


 int FUNC_0 (struct request_queue*,struct Scsi_Host*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct request_queue *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->queuedata;

 FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_1->shost_gendev);
}
