
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_state {int dummy; } ;
struct fscache_object {scalar_t__ n_children; struct fscache_object* parent; int lock; int debug_id; int cache_link; int cookie_link; struct fscache_cache* cache; struct fscache_cookie* cookie; } ;
struct fscache_cookie {int flags; int lock; } ;
struct fscache_cache {TYPE_1__* ops; int object_list_lock; } ;
struct TYPE_2__ {int (* drop_object ) (struct fscache_object*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,scalar_t__,int) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct fscache_object*) ;
 int FUNC_5 (struct fscache_object*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct fscache_object*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 struct fscache_state const* FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_17(struct fscache_object *VAR_5,
             int VAR_6)
{
 struct fscache_object *VAR_7 = VAR_5->parent;
 struct fscache_cookie *VAR_8 = VAR_5->cookie;
 struct fscache_cache *VAR_9 = VAR_5->cache;
 bool VAR_10 = 0;

 FUNC_2("{OBJ%x,%d},%d", VAR_5->debug_id, VAR_5->n_children, VAR_6);

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(!FUNC_9(&VAR_5->cookie_link));




 FUNC_11(&VAR_8->lock);
 FUNC_8(&VAR_5->cookie_link);
 if (FUNC_14(VAR_0, &VAR_8->flags))
  VAR_10 = 1;
 FUNC_12(&VAR_8->lock);

 if (VAR_10)
  FUNC_16(&VAR_8->flags, VAR_0);




 FUNC_11(&VAR_5->lock);
 FUNC_12(&VAR_5->lock);


 FUNC_11(&VAR_9->object_list_lock);
 FUNC_10(&VAR_5->cache_link);
 FUNC_12(&VAR_9->object_list_lock);

 FUNC_6(&VAR_3);
 VAR_9->ops->drop_object(VAR_5);
 FUNC_7(&VAR_3);


 if (VAR_7) {
  FUNC_1("release parent OBJ%x {%d}",
         VAR_7->debug_id, VAR_7->n_children);

  FUNC_11(&VAR_7->lock);
  VAR_7->n_children--;
  if (VAR_7->n_children == 0)
   FUNC_5(VAR_7, VAR_1);
  FUNC_12(&VAR_7->lock);
  VAR_5->parent = ((void*)0);
 }


 FUNC_4(VAR_5);
 FUNC_6(&VAR_4);

 FUNC_3("");
 return FUNC_15(VAR_2);
}
