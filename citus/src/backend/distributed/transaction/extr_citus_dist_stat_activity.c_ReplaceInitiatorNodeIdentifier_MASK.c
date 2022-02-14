
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int workerPort; int workerName; } ;
typedef TYPE_1__ WorkerNode ;
struct TYPE_6__ {int master_query_host_port; int * master_query_host_name; } ;
typedef TYPE_2__ CitusDistStat ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int,int*) ;
 int VAR_1 ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_2,
          CitusDistStat *VAR_3)
{
 WorkerNode *VAR_4 = ((void*)0);
 if (VAR_2 > 0)
 {
  bool VAR_5 = 0;

  VAR_4 = FUNC_2(VAR_2, &VAR_5);


  FUNC_0(VAR_5);
  VAR_3->master_query_host_name =
   FUNC_3(VAR_4->workerName);
  VAR_3->master_query_host_port = VAR_4->workerPort;
 }
 else if (VAR_2 == 0 && FUNC_1())
 {
  VAR_3->master_query_host_name = FUNC_3(VAR_1);
  VAR_3->master_query_host_port = VAR_0;
 }
 else if (VAR_2 == 0)
 {
  VAR_3->master_query_host_name = FUNC_3(VAR_1);
  VAR_3->master_query_host_port = 0;
 }
 else
 {
  VAR_3->master_query_host_name = ((void*)0);
  VAR_3->master_query_host_port = 0;
 }
}
