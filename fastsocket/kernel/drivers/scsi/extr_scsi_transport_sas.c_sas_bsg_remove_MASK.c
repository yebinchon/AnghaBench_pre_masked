
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_rphy {struct request_queue* q; } ;
struct request_queue {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct request_queue* q; } ;


 int FUNC_0 (struct request_queue*) ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_0, struct sas_rphy *VAR_1)
{
 struct request_queue *VAR_2;

 if (VAR_1)
  VAR_2 = VAR_1->q;
 else
  VAR_2 = FUNC_1(VAR_0)->q;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2);
}
