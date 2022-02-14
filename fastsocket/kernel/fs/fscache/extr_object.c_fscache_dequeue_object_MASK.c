
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_object {TYPE_1__* parent; int dep_link; int debug_id; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fscache_object *VAR_0)
{
 FUNC_0("{OBJ%x}", VAR_0->debug_id);

 if (!FUNC_3(&VAR_0->dep_link)) {
  FUNC_4(&VAR_0->parent->lock);
  FUNC_2(&VAR_0->dep_link);
  FUNC_5(&VAR_0->parent->lock);
 }

 FUNC_1("");
}
