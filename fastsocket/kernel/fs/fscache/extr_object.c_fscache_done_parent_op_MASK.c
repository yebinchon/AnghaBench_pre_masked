
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_object {scalar_t__ n_ops; int lock; int n_obj_ops; int debug_id; struct fscache_object* parent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct fscache_object*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct fscache_object *VAR_1)
{
 struct fscache_object *VAR_2 = VAR_1->parent;

 FUNC_0("OBJ%x {OBJ%x,%x}",
        VAR_1->debug_id, VAR_2->debug_id, VAR_2->n_ops);

 FUNC_2(&VAR_2->lock, 1);
 VAR_2->n_obj_ops--;
 VAR_2->n_ops--;
 if (VAR_2->n_ops == 0)
  FUNC_1(VAR_2, VAR_0);
 FUNC_3(&VAR_2->lock);
}
