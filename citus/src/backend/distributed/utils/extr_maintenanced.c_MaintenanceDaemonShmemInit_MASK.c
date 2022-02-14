
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hashInfo ;
struct TYPE_7__ {int keysize; int entrysize; int hash; } ;
struct TYPE_6__ {char* lockTrancheName; int trancheId; int lock; } ;
typedef int Oid ;
typedef int MaintenanceDaemonDBData ;
typedef TYPE_1__ MaintenanceDaemonControlData ;
typedef TYPE_2__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (char*,int ,int*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 () ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_10(void)
{
 bool VAR_8 = 0;
 HASHCTL VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_0, VAR_3);

 VAR_4 =
  (MaintenanceDaemonControlData *) FUNC_7("Citus Maintenance Daemon",
               FUNC_5(),
               &VAR_8);





 if (!VAR_8)
 {
  VAR_4->trancheId = FUNC_2();
  VAR_4->lockTrancheName = "Citus Maintenance Daemon";
  FUNC_3(VAR_4->trancheId,
         VAR_4->lockTrancheName);

  FUNC_1(&VAR_4->lock,
       VAR_4->trancheId);
 }


 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(Oid);
 VAR_9.entrysize = sizeof(MaintenanceDaemonDBData);
 VAR_9.hash = VAR_7;
 VAR_10 = (VAR_1 | VAR_2);

 VAR_5 = FUNC_6("Maintenance Database Hash",
           VAR_6, VAR_6,
           &VAR_9, VAR_10);

 FUNC_4(VAR_0);

 if (&FUNC_9 != ((void*)0))
 {
  FUNC_9();
 }
}
