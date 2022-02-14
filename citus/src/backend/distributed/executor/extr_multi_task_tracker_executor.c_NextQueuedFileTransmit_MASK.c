
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; } ;
typedef TYPE_1__ TrackerTaskState ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static TrackerTaskState *
FUNC_3(HTAB *VAR_1)
{
 HASH_SEQ_STATUS VAR_2;
 TrackerTaskState *VAR_3 = ((void*)0);
 FUNC_0(&VAR_2, VAR_1);

 VAR_3 = (TrackerTaskState *) FUNC_1(&VAR_2);
 while (VAR_3 != ((void*)0))
 {
  if (VAR_3->status == VAR_0)
  {
   FUNC_2(&VAR_2);
   break;
  }

  VAR_3 = (TrackerTaskState *) FUNC_1(&VAR_2);
 }

 return VAR_3;
}
