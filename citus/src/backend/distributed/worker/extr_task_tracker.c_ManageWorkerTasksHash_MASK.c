
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ taskStatus; } ;
typedef TYPE_1__ WorkerTask ;
struct TYPE_6__ {int taskHashLock; int conninfosValid; } ;
typedef int List ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * VAR_2 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(HTAB *VAR_5)
{
 HASH_SEQ_STATUS VAR_6;
 List *VAR_7 = VAR_2;
 WorkerTask *VAR_8 = ((void*)0);


 FUNC_1(&VAR_4->taskHashLock, VAR_1);
 VAR_7 = FUNC_5(VAR_5);
 FUNC_2(&VAR_4->taskHashLock);

 FUNC_1(&VAR_4->taskHashLock, VAR_0);

 if (!VAR_4->conninfosValid)
 {
  FUNC_0();
 }


 if (VAR_7 != VAR_2)
 {
  FUNC_6(VAR_5, VAR_7);
  FUNC_9(VAR_7);
 }


 FUNC_7(&VAR_6, VAR_5);

 VAR_8 = (WorkerTask *) FUNC_8(&VAR_6);
 while (VAR_8 != ((void*)0))
 {
  FUNC_3(VAR_8, VAR_5);






  if (VAR_8->taskStatus == VAR_3)
  {
   FUNC_4(VAR_8, VAR_5);
  }

  VAR_8 = (WorkerTask *) FUNC_8(&VAR_6);
 }

 FUNC_2(&VAR_4->taskHashLock);
}
