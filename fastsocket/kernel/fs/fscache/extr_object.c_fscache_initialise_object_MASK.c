
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fscache_state {int dummy; } ;
struct fscache_object {int lock; int dependents; int dep_link; TYPE_3__* cache; int flags; TYPE_1__* state; struct fscache_object* parent; int debug_id; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {scalar_t__ (* grab_object ) (struct fscache_object*) ;} ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct fscache_object*) ;
 scalar_t__ FUNC_5 (struct fscache_object*) ;
 scalar_t__ FUNC_6 (struct fscache_object*) ;
 int FUNC_7 (struct fscache_object*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct fscache_object*) ;
 struct fscache_state const* FUNC_15 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_16(struct fscache_object *VAR_5,
            int VAR_6)
{
 struct fscache_object *VAR_7;
 bool VAR_8;

 FUNC_2("{OBJ%x},%d", VAR_5->debug_id, VAR_6);

 FUNC_0(FUNC_11(&VAR_5->dep_link));

 VAR_7 = VAR_5->parent;
 if (!VAR_7) {
  FUNC_3(" [no parent]");
  return FUNC_15(VAR_0);
 }

 FUNC_1("parent: %s of:%lx", VAR_7->state->name, VAR_7->flags);

 if (FUNC_5(VAR_7)) {
  FUNC_3(" [bad parent]");
  return FUNC_15(VAR_0);
 }

 if (FUNC_4(VAR_7)) {
  FUNC_3(" [ready]");
  return FUNC_15(VAR_2);
 }

 FUNC_1("wait");

 FUNC_12(&VAR_7->lock);
 FUNC_8(&VAR_4);
 VAR_8 = 0;
 if (FUNC_6(VAR_7) &&
     VAR_5->cache->ops->grab_object(VAR_5)) {
  FUNC_10(&VAR_5->dep_link, &VAR_7->dependents);
  VAR_8 = 1;
 }
 FUNC_9(&VAR_4);
 FUNC_13(&VAR_7->lock);
 if (!VAR_8) {
  FUNC_3(" [grab failed]");
  return FUNC_15(VAR_0);
 }



 FUNC_7(VAR_7, VAR_1);
 FUNC_3(" [wait]");
 return FUNC_15(VAR_3);
}
