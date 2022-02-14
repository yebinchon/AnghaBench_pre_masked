
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ queuedata; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct Scsi_Host*,int *) ;

__attribute__((used)) static void FUNC_1(struct request_queue *VAR_0)
{
 FUNC_0(VAR_0, (struct Scsi_Host *)VAR_0->queuedata, ((void*)0));
}
