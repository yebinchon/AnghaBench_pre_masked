
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int dsm_segment ;
typedef int dsm_handle ;
struct TYPE_4__ {int stepCount; int processId; } ;
typedef int Size ;
typedef TYPE_1__ ProgressMonitorData ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ) ;

ProgressMonitorData *
FUNC_7(uint64 VAR_6, int VAR_7, Size VAR_8,
       Oid VAR_9)
{
 dsm_segment *VAR_10 = ((void*)0);
 dsm_handle VAR_11 = 0;
 ProgressMonitorData *VAR_12 = ((void*)0);
 Size VAR_13 = 0;

 if (VAR_8 <= 0 || VAR_7 <= 0)
 {
  FUNC_3(VAR_1,
    (FUNC_4("number of steps and size of each step should be "
      "positive values")));
 }

 VAR_13 = sizeof(ProgressMonitorData) + VAR_8 * VAR_7;
 VAR_10 = FUNC_1(VAR_13, VAR_0);

 if (VAR_10 == ((void*)0))
 {
  FUNC_3(VAR_4,
    (FUNC_4("could not create a dynamic shared memory segment to "
      "keep track of progress of the current command")));
  return ((void*)0);
 }

 VAR_11 = FUNC_2(VAR_10);

 VAR_12 = FUNC_0(VAR_11, &VAR_10);

 VAR_12->stepCount = VAR_7;
 VAR_12->processId = VAR_2;

 FUNC_5(VAR_3, VAR_9);
 FUNC_6(1, VAR_11);
 FUNC_6(0, VAR_6);

 VAR_5 = VAR_11;

 return VAR_12;
}
