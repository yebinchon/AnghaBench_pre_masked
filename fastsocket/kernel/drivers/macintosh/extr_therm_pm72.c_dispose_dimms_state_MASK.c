
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dimm_pid_state {int * monitor; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct dimm_pid_state *VAR_2)
{
 if (VAR_2->monitor == ((void*)0))
  return;

 FUNC_0(&VAR_1->dev, &VAR_0);

 VAR_2->monitor = ((void*)0);
}
