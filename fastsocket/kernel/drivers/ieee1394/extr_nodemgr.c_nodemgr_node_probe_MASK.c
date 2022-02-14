
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_probe_parameter {int generation; int probe_now; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,struct node_probe_parameter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct hpsb_host *VAR_3, int VAR_4)
{
 struct node_probe_parameter VAR_5;

 VAR_5.host = VAR_3;
 VAR_5.generation = VAR_4;
 VAR_5.probe_now = 0;
 if (FUNC_2(&VAR_2, ((void*)0), &VAR_5, VAR_1) != 0)
  return 0;

 VAR_5.probe_now = 1;
 if (FUNC_2(&VAR_2, ((void*)0), &VAR_5, VAR_1) != 0)
  return 0;
 if (FUNC_1(&VAR_0) != 0)
  FUNC_0("bus_rescan_devices had an error");

 return 1;
}
