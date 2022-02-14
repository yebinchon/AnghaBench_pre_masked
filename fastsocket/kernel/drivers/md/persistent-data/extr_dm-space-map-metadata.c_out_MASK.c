
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_metadata {int recursion_count; int uncommitted; } ;
struct block_op {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct block_op*) ;
 int FUNC_3 (struct sm_metadata*,struct block_op*) ;

__attribute__((used)) static int FUNC_4(struct sm_metadata *VAR_1)
{
 int VAR_2 = 0;




 if (!VAR_1->recursion_count) {
  FUNC_0("lost track of recursion depth");
  return -VAR_0;
 }

 if (VAR_1->recursion_count == 1) {
  while (!FUNC_1(&VAR_1->uncommitted)) {
   struct block_op VAR_3;

   VAR_2 = FUNC_2(&VAR_1->uncommitted, &VAR_3);
   if (VAR_2) {
    FUNC_0("bug in bop ring buffer");
    break;
   }

   VAR_2 = FUNC_3(VAR_1, &VAR_3);
   if (VAR_2)
    break;
  }
 }

 VAR_1->recursion_count--;

 return VAR_2;
}
