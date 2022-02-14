
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_exe_queue_obj {int lock; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_exe_queue_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_0,
       struct bnx2x_exe_queue_obj *VAR_1)
{
 FUNC_1(&VAR_1->lock);

 FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_1->lock);
}
