
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int info ;
struct TYPE_6__ {scalar_t__ taskHashTrancheId; char* taskHashTrancheName; int conninfosValid; int taskHashLock; } ;
typedef TYPE_1__ WorkerTasksSharedStateData ;
struct TYPE_7__ {int keysize; int hash; int entrysize; } ;
typedef TYPE_2__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_6 (char*,long,long,TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (char*,int,int*) ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 () ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(void)
{
 bool VAR_9 = 0;
 HASHCTL VAR_10;
 int VAR_11 = 0;
 long VAR_12 = 0;
 long VAR_13 = 0;

 VAR_12 = (long) VAR_4;
 VAR_13 = VAR_12 / 8;






 FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.keysize = sizeof(uint64) + sizeof(uint32);
 VAR_10.entrysize = VAR_6;
 VAR_10.hash = VAR_8;
 VAR_11 = (VAR_1 | VAR_2);






 FUNC_1(VAR_0, VAR_3);


 VAR_7 =
  (WorkerTasksSharedStateData *) FUNC_7("Worker Task Control",
                sizeof(WorkerTasksSharedStateData),
                &VAR_9);

 if (!VAR_9)
 {
  VAR_7->taskHashTrancheId = FUNC_3();
  VAR_7->taskHashTrancheName = "Worker Task Hash Tranche";
  FUNC_4(VAR_7->taskHashTrancheId,
         VAR_7->taskHashTrancheName);

  FUNC_2(&VAR_7->taskHashLock,
       VAR_7->taskHashTrancheId);

  VAR_7->conninfosValid = 1;
 }


 VAR_5 = FUNC_6("Worker Task Hash", VAR_13, VAR_12,
          &VAR_10, VAR_11);

 FUNC_5(VAR_0);

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_7->taskHashTrancheId != 0);

 if (&FUNC_9 != ((void*)0))
 {
  FUNC_9();
 }
}
