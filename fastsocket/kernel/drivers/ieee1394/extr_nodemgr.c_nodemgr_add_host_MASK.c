
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int id; } ;
struct host_info {int thread; struct hpsb_host* host; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 struct host_info* FUNC_2 (int *,struct hpsb_host*,int) ;
 int FUNC_3 (int *,struct hpsb_host*) ;
 int FUNC_4 (int ,struct hpsb_host*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct hpsb_host *VAR_2)
{
 struct host_info *VAR_3;

 VAR_3 = FUNC_2(&VAR_0, VAR_2, sizeof(*VAR_3));
 if (!VAR_3) {
  FUNC_0("NodeMgr: out of memory in add host");
  return;
 }
 VAR_3->host = VAR_2;
 VAR_3->thread = FUNC_4(VAR_1, VAR_2, "knodemgrd_%d",
     VAR_2->id);
 if (FUNC_1(VAR_3->thread)) {
  FUNC_0("NodeMgr: cannot start thread for host %d", VAR_2->id);
  FUNC_3(&VAR_0, VAR_2);
 }
}
