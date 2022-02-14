
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connectionId; scalar_t__ connectionBusy; } ;
typedef TYPE_1__ TaskTracker ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(HTAB *VAR_0)
{
 TaskTracker *VAR_1 = ((void*)0);
 HASH_SEQ_STATUS VAR_2;
 FUNC_2(&VAR_2, VAR_0);

 VAR_1 = (TaskTracker *) FUNC_3(&VAR_2);
 while (VAR_1 != ((void*)0))
 {
  bool VAR_3 = FUNC_1(VAR_1);


  if (VAR_3 && VAR_1->connectionBusy)
  {
   FUNC_0(VAR_1->connectionId);
  }

  VAR_1 = (TaskTracker *) FUNC_3(&VAR_2);
 }
}
