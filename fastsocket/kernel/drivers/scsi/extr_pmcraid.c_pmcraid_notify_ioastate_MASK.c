
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int msg; int ioa_state; } ;
struct pmcraid_instance {TYPE_1__ scn; } ;


 int FUNC_0 (struct pmcraid_instance*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct pmcraid_instance *VAR_0, u32 VAR_1)
{
 VAR_0->scn.ioa_state = VAR_1;
 FUNC_0(VAR_0,
     &VAR_0->scn.msg,
     sizeof(u32));
}
