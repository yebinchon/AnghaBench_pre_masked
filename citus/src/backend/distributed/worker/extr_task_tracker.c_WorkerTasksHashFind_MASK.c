
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_3__ {int taskId; int jobId; } ;
typedef TYPE_1__ WorkerTask ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int *) ;

WorkerTask *
FUNC_1(uint64 VAR_2, uint32 VAR_3)
{
 WorkerTask *VAR_4 = ((void*)0);
 void *VAR_5 = ((void*)0);

 WorkerTask VAR_6;
 VAR_6.jobId = VAR_2;
 VAR_6.taskId = VAR_3;

 VAR_5 = (void *) &VAR_6;
 VAR_4 = (WorkerTask *) FUNC_0(VAR_1, VAR_5,
           VAR_0, ((void*)0));

 return VAR_4;
}
