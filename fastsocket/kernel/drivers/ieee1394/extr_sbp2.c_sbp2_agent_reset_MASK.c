
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sbp2_lu {int cmd_orb_lock; int * last_orb; int ne; scalar_t__ command_block_agent_addr; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct sbp2_lu *VAR_3, int VAR_4)
{
 quadlet_t VAR_5;
 u64 VAR_6;
 int VAR_7;
 unsigned long VAR_8;


 if (VAR_4)
  FUNC_1();

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = VAR_3->command_block_agent_addr + VAR_2;

 if (VAR_4)
  VAR_7 = FUNC_2(VAR_3->ne, VAR_6, &VAR_5, 4);
 else
  VAR_7 = FUNC_4(VAR_3->ne, VAR_6, &VAR_5, 4);

 if (VAR_7 < 0) {
  FUNC_0("hpsb_node_write failed.\n");
  return -VAR_0;
 }


 FUNC_5(&VAR_3->cmd_orb_lock, VAR_8);
 VAR_3->last_orb = ((void*)0);
 FUNC_6(&VAR_3->cmd_orb_lock, VAR_8);

 return 0;
}
