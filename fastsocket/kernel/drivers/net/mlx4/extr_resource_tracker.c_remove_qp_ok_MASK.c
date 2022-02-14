
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct res_qp {TYPE_1__ com; int ref_count; int mcg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct res_qp *VAR_4)
{
 if (VAR_4->com.state == VAR_2 || FUNC_0(&VAR_4->ref_count) ||
     !FUNC_1(&VAR_4->mcg_list)) {
  FUNC_2("resource tracker: fail to remove qp, state %d, ref_count %d\n",
         VAR_4->com.state, FUNC_0(&VAR_4->ref_count));
  return -VAR_0;
 } else if (VAR_4->com.state != VAR_3) {
  return -VAR_1;
 }

 return 0;
}
