
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int assignedAt; int taskId; int jobId; } ;
typedef TYPE_1__ WorkerTask ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__ (*) (TYPE_1__*)) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static WorkerTask *
FUNC_7(HTAB *VAR_2)
{
 HASH_SEQ_STATUS VAR_3;
 WorkerTask *VAR_4 = ((void*)0);
 WorkerTask *VAR_5 = ((void*)0);
 uint32 VAR_6 = 0;
 uint32 VAR_7 = 0;


 VAR_6 = FUNC_0(VAR_2, &FUNC_1);
 if (VAR_6 == 0)
 {
  return ((void*)0);
 }


 VAR_5 = (WorkerTask *) FUNC_5(VAR_1 * VAR_6);


 FUNC_3(&VAR_3, VAR_2);

 VAR_4 = (WorkerTask *) FUNC_4(&VAR_3);
 while (VAR_4 != ((void*)0))
 {
  if (FUNC_1(VAR_4))
  {

   WorkerTask *VAR_8 = FUNC_2(VAR_5, VAR_7);

   VAR_8->jobId = VAR_4->jobId;
   VAR_8->taskId = VAR_4->taskId;
   VAR_8->assignedAt = VAR_4->assignedAt;

   VAR_7++;
  }

  VAR_4 = (WorkerTask *) FUNC_4(&VAR_3);
 }


 FUNC_6(VAR_5, VAR_6, VAR_1, VAR_0);

 return VAR_5;
}
