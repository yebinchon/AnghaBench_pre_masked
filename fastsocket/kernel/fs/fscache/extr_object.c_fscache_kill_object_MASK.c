
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_state {int dummy; } ;
struct fscache_object {scalar_t__ n_ops; scalar_t__ n_children; scalar_t__ n_in_progress; int dependents; int lock; scalar_t__ oob_event_mask; int flags; int debug_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fscache_object*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fscache_state const* FUNC_6 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_7(struct fscache_object *VAR_4,
             int VAR_5)
{
 FUNC_0("{OBJ%x,%d,%d},%d",
        VAR_4->debug_id, VAR_4->n_ops, VAR_4->n_children, VAR_5);

 FUNC_1(VAR_1, &VAR_4->flags);
 VAR_4->oob_event_mask = 0;

 if (FUNC_3(&VAR_4->dependents) &&
     VAR_4->n_ops == 0 &&
     VAR_4->n_children == 0)
  return FUNC_6(VAR_0);

 if (VAR_4->n_in_progress == 0) {
  FUNC_4(&VAR_4->lock);
  if (VAR_4->n_ops > 0 && VAR_4->n_in_progress == 0)
   FUNC_2(VAR_4);
  FUNC_5(&VAR_4->lock);
 }

 if (!FUNC_3(&VAR_4->dependents))
  return FUNC_6(VAR_2);

 return FUNC_6(VAR_3);
}
