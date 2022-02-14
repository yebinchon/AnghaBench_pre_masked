
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_transition {int events; } ;
struct fscache_object {int flags; int oob_event_mask; int event_mask; TYPE_1__* state; struct fscache_transition* oob_table; int * parent; struct fscache_cookie* cookie; struct fscache_cache* cache; scalar_t__ store_limit_l; scalar_t__ store_limit; scalar_t__ events; scalar_t__ n_exclusive; scalar_t__ n_in_progress; scalar_t__ n_ops; scalar_t__ n_children; int pending_ops; int dep_link; int dependents; int work; int cookie_link; int cache_link; int lock; } ;
struct fscache_cookie {int dummy; } ;
struct fscache_cache {int object_count; } ;
struct TYPE_2__ {struct fscache_transition* transitions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 struct fscache_transition* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(struct fscache_object *VAR_4,
    struct fscache_cookie *VAR_5,
    struct fscache_cache *VAR_6)
{
 const struct fscache_transition *VAR_7;

 FUNC_3(&VAR_6->object_count);

 VAR_4->state = FUNC_2(VAR_1);
 VAR_4->oob_table = VAR_3;
 VAR_4->flags = 1 << VAR_0;
 FUNC_4(&VAR_4->lock);
 FUNC_1(&VAR_4->cache_link);
 FUNC_0(&VAR_4->cookie_link);
 FUNC_5(&VAR_4->work, &VAR_2);
 FUNC_1(&VAR_4->dependents);
 FUNC_1(&VAR_4->dep_link);
 FUNC_1(&VAR_4->pending_ops);
 VAR_4->n_children = 0;
 VAR_4->n_ops = VAR_4->n_in_progress = VAR_4->n_exclusive = 0;
 VAR_4->events = 0;
 VAR_4->store_limit = 0;
 VAR_4->store_limit_l = 0;
 VAR_4->cache = VAR_6;
 VAR_4->cookie = VAR_5;
 VAR_4->parent = ((void*)0);

 VAR_4->oob_event_mask = 0;
 for (VAR_7 = VAR_4->oob_table; VAR_7->events; VAR_7++)
  VAR_4->oob_event_mask |= VAR_7->events;
 VAR_4->event_mask = VAR_4->oob_event_mask;
 for (VAR_7 = VAR_4->state->transitions; VAR_7->events; VAR_7++)
  VAR_4->event_mask |= VAR_7->events;
}
