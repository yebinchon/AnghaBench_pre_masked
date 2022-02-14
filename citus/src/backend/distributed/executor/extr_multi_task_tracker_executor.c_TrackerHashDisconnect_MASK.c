
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ connectionId; } ;
typedef TYPE_1__ TaskTracker ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(HTAB *VAR_1)
{
 TaskTracker *VAR_2 = ((void*)0);
 HASH_SEQ_STATUS VAR_3;
 FUNC_1(&VAR_3, VAR_1);

 VAR_2 = (TaskTracker *) FUNC_2(&VAR_3);
 while (VAR_2 != ((void*)0))
 {
  if (VAR_2->connectionId != VAR_0)
  {
   FUNC_0(VAR_2->connectionId);
   VAR_2->connectionId = VAR_0;
  }

  VAR_2 = (TaskTracker *) FUNC_2(&VAR_3);
 }
}
