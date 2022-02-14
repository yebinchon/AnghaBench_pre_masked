
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int workerPort; int workerName; } ;
typedef TYPE_1__ WorkerNode ;
typedef int Size ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(const void *VAR_1, const void *VAR_2, Size VAR_3)
{
 const WorkerNode *VAR_4 = (const WorkerNode *) VAR_1;
 const WorkerNode *VAR_5 = (const WorkerNode *) VAR_2;

 int VAR_6 = 0;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_4->workerName, VAR_5->workerName, VAR_0);
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 VAR_7 = VAR_4->workerPort - VAR_5->workerPort;
 return VAR_7;
}
