
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int id; } ;
struct host_info {int thread; } ;


 int FUNC_0 (char*,int ) ;
 struct host_info* FUNC_1 (int *,struct hpsb_host*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hpsb_host *VAR_1)
{
 struct host_info *VAR_2 = FUNC_1(&VAR_0, VAR_1);

 if (VAR_2) {
  FUNC_0("NodeMgr: Processing reset for host %d", VAR_1->id);
  FUNC_2(VAR_2->thread);
 }
}
