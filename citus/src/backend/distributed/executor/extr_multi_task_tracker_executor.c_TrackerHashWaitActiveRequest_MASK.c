
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connectionBusy; int connectionBusyOnTaskList; int * connectionBusyOnTask; int connectionId; } ;
typedef TYPE_1__ TaskTracker ;
typedef scalar_t__ QueryStatus ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(HTAB *VAR_2)
{
 TaskTracker *VAR_3 = ((void*)0);
 HASH_SEQ_STATUS VAR_4;
 FUNC_2(&VAR_4, VAR_2);

 VAR_3 = (TaskTracker *) FUNC_3(&VAR_4);
 while (VAR_3 != ((void*)0))
 {
  bool VAR_5 = FUNC_1(VAR_3);


  if (VAR_5 && VAR_3->connectionBusy)
  {
   QueryStatus VAR_6 = FUNC_0(VAR_3->connectionId);
   if (VAR_6 == VAR_0)
   {
    VAR_3->connectionBusy = 0;
    VAR_3->connectionBusyOnTask = ((void*)0);
    VAR_3->connectionBusyOnTaskList = VAR_1;
   }
  }

  VAR_3 = (TaskTracker *) FUNC_3(&VAR_4);
 }
}
