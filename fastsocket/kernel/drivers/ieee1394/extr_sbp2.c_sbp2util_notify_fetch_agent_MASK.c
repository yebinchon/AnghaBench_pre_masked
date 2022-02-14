
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sbp2_lu {int shost; int state; scalar_t__ command_block_agent_addr; int ne; } ;
typedef int quadlet_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sbp2_lu *VAR_1, u64 VAR_2,
     quadlet_t *VAR_3, size_t VAR_4)
{


 if (FUNC_5(FUNC_1(&VAR_1->state) == VAR_0))
  return;

 if (FUNC_2(VAR_1->ne, VAR_1->command_block_agent_addr + VAR_2,
       VAR_3, VAR_4))
  FUNC_0("sbp2util_notify_fetch_agent failed.");



 if (FUNC_3(FUNC_1(&VAR_1->state) != VAR_0))
  FUNC_4(VAR_1->shost);
}
