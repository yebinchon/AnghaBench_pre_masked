
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int activeConnectionCount; int failedConnectionCount; int idleConnectionCount; int sessionList; } ;
typedef TYPE_1__ WorkerPool ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(WorkerPool *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->sessionList);
 int VAR_2 = VAR_0->activeConnectionCount;
 int VAR_3 = VAR_0->failedConnectionCount;
 int VAR_4 = VAR_0->idleConnectionCount;


 int VAR_5 =
  VAR_1 - VAR_2 - VAR_3;

 int VAR_6 = VAR_4 + VAR_5;

 return VAR_6;
}
