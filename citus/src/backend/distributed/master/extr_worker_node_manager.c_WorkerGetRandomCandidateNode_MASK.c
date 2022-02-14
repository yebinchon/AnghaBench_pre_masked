
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {char* workerRack; } ;
typedef TYPE_1__ WorkerNode ;
typedef int List ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*,int ) ;

WorkerNode *
FUNC_6(List *VAR_2)
{
 WorkerNode *VAR_3 = ((void*)0);
 bool VAR_4 = 0;
 uint32 VAR_5 = VAR_1;
 uint32 VAR_6 = 0;

 uint32 VAR_7 = FUNC_4(VAR_2);
 List *VAR_8 = FUNC_2(VAR_2);


 if (FUNC_4(VAR_8) == 0)
 {
  return ((void*)0);
 }


 if (VAR_7 == 0)
 {
  VAR_3 = FUNC_0(VAR_8);
  return VAR_3;
 }






 if (FUNC_1(VAR_7))
 {
  VAR_4 = 0;
 }
 else
 {
  VAR_4 = 1;
 }






 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  WorkerNode *VAR_9 = (WorkerNode *) FUNC_3(VAR_2);
  char *VAR_10 = VAR_9->workerRack;
  char *VAR_11 = ((void*)0);
  bool VAR_12 = 0;

  VAR_3 = FUNC_0(VAR_8);
  VAR_11 = VAR_3->workerRack;

  VAR_12 = (FUNC_5(VAR_11, VAR_10, VAR_0) == 0);
  if ((VAR_12 && VAR_4) || (!VAR_12 && !VAR_4))
  {
   break;
  }
 }

 return VAR_3;
}
