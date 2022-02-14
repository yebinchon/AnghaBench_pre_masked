
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int triggerMetadataSync; int latch; } ;
typedef int Oid ;
typedef TYPE_1__ MaintenanceDaemonDBData ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int*) ;

void
FUNC_4(Oid VAR_4)
{
 bool VAR_5 = 0;
 MaintenanceDaemonDBData *VAR_6 = ((void*)0);

 FUNC_0(&VAR_2->lock, VAR_1);

 VAR_6 = (MaintenanceDaemonDBData *) FUNC_3(VAR_3,
              &VAR_4, VAR_0, &VAR_5);
 if (VAR_5)
 {
  VAR_6->triggerMetadataSync = 1;


  FUNC_2(VAR_6->latch);
 }

 FUNC_1(&VAR_2->lock);
}
