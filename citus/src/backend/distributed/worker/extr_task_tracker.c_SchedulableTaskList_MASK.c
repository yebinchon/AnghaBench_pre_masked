
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {int taskId; int jobId; } ;
typedef TYPE_1__ WorkerTask ;
typedef int List ;
typedef int HTAB ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static List *
FUNC_6(HTAB *VAR_5)
{
 List *VAR_6 = VAR_1;
 WorkerTask *VAR_7 = ((void*)0);
 uint32 VAR_8 = 0;
 uint32 VAR_9 = 0;
 uint32 VAR_10 = 0;
 uint32 VAR_11 = 0;

 VAR_8 = FUNC_0(VAR_5, &VAR_2);
 if (VAR_8 >= VAR_0)
 {
  return VAR_1;
 }

 VAR_9 = FUNC_0(VAR_5, &VAR_3);
 if (VAR_9 == 0)
 {
  return VAR_1;
 }

 VAR_10 = VAR_0 - VAR_8;
 if (VAR_10 > VAR_9)
 {
  VAR_10 = VAR_9;
 }


 VAR_7 = FUNC_1(VAR_5);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
 {
  WorkerTask *VAR_12 = (WorkerTask *) FUNC_4(VAR_4);
  WorkerTask *VAR_13 = FUNC_2(VAR_7, VAR_11);
  VAR_12->jobId = VAR_13->jobId;
  VAR_12->taskId = VAR_13->taskId;

  VAR_6 = FUNC_3(VAR_6, VAR_12);
 }


 FUNC_5(VAR_7);

 return VAR_6;
}
