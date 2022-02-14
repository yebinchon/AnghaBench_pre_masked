
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct request_queue {int queue_lock; } ;
struct request {int errors; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_4__ {TYPE_1__* f; } ;
struct TYPE_3__ {int (* smp_handler ) (struct Scsi_Host*,struct sas_rphy*,struct request*) ;} ;


 int FUNC_0 (struct request*,int) ;
 struct request* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_0, struct Scsi_Host *VAR_1,
       struct sas_rphy *VAR_2)
{
 struct request *VAR_3;
 int VAR_4;
 int (*VAR_5)(struct Scsi_Host *, struct sas_rphy *, struct request *);

 while (!FUNC_2(VAR_0)) {
  VAR_3 = FUNC_1(VAR_0);
  if (!VAR_3)
   break;

  FUNC_4(VAR_0->queue_lock);

  VAR_5 = FUNC_5(VAR_1->transportt)->f->smp_handler;
  VAR_4 = VAR_5(VAR_1, VAR_2, VAR_3);
  VAR_3->errors = VAR_4;

  FUNC_0(VAR_3, VAR_4);

  FUNC_3(VAR_0->queue_lock);
 }
}
