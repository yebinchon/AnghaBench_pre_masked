
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {scalar_t__ workerPid; } ;
typedef int Oid ;
typedef TYPE_1__ MaintenanceDaemonDBData ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int*) ;
 int FUNC_3 (scalar_t__,int ) ;

void
FUNC_4(Oid VAR_5)
{
 bool VAR_6 = 0;
 MaintenanceDaemonDBData *VAR_7 = ((void*)0);
 pid_t VAR_8 = 0;

 FUNC_0(&VAR_2->lock, VAR_1);

 VAR_7 = (MaintenanceDaemonDBData *) FUNC_2(VAR_3,
              &VAR_5, VAR_0, &VAR_6);
 if (VAR_6)
 {
  VAR_8 = VAR_7->workerPid;
 }

 FUNC_1(&VAR_2->lock);

 if (VAR_8 > 0)
 {
  FUNC_3(VAR_8, VAR_4);
 }
}
