
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int initiatorNodeIdentifier; } ;
struct TYPE_10__ {int mutex; TYPE_1__ citusBackend; } ;
struct TYPE_8__ {int trancheId; } ;
struct TYPE_9__ {TYPE_4__* backends; int nextTransactionNumber; int lock; TYPE_2__ namedLockTranche; } ;
typedef TYPE_2__ NamedLWLockTranche ;
typedef TYPE_3__ BackendManagementShmemData ;
typedef TYPE_4__ BackendData ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(void)
{
 bool VAR_3 = 0;


 FUNC_1(VAR_0, VAR_1);

 VAR_2 =
  (BackendManagementShmemData *) FUNC_6(
   "Backend Management Shmem",
   FUNC_0(),
   &VAR_3);

 if (!VAR_3)
 {
  int VAR_4 = 0;
  int VAR_5 = 0;
  char *VAR_6 = "Backend Management Tranche";

  NamedLWLockTranche *VAR_7 =
   &VAR_2->namedLockTranche;


  FUNC_9(VAR_2, 0,
      FUNC_0());

  VAR_7->trancheId = FUNC_3();

  FUNC_4(VAR_7->trancheId, VAR_6);
  FUNC_2(&VAR_2->lock,
       VAR_7->trancheId);


  FUNC_10(&VAR_2->nextTransactionNumber, 1);
  VAR_5 = FUNC_8();
  for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
  {
   BackendData *VAR_8 =
    &VAR_2->backends[VAR_4];
   VAR_8->citusBackend.initiatorNodeIdentifier = -1;
   FUNC_7(&VAR_8->mutex);
  }
 }

 FUNC_5(VAR_0);

 if (&FUNC_11 != ((void*)0))
 {
  FUNC_11();
 }
}
