
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_metadata {int uncommitted; } ;
typedef enum block_op_type { ____Placeholder_block_op_type } block_op_type ;
typedef int dm_block_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sm_metadata *VAR_1, enum block_op_type VAR_2, dm_block_t VAR_3)
{
 int VAR_4 = FUNC_1(&VAR_1->uncommitted, VAR_2, VAR_3);

 if (VAR_4) {
  FUNC_0("too many recursive allocations");
  return -VAR_0;
 }

 return 0;
}
