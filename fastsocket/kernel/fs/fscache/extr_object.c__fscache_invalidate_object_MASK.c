
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fscache_state {int dummy; } ;
struct fscache_operation {int flags; } ;
struct fscache_object {int flags; TYPE_3__* cache; struct fscache_cookie* cookie; int debug_id; } ;
struct TYPE_4__ {int * rnode; } ;
struct fscache_cookie {int lock; int flags; TYPE_1__ stores; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int invalidate_object; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fscache_object*) ;
 int FUNC_5 (struct fscache_cookie*) ;
 int FUNC_6 (struct fscache_operation*,int *) ;
 int FUNC_7 (struct fscache_operation*,int ) ;
 int FUNC_8 (struct fscache_operation*) ;
 int FUNC_9 (struct fscache_operation*,char*) ;
 scalar_t__ FUNC_10 (struct fscache_object*,struct fscache_operation*) ;
 int FUNC_11 (struct fscache_object*) ;
 int FUNC_12 (struct fscache_object*) ;
 int FUNC_13 (struct fscache_operation*) ;
 struct fscache_operation* FUNC_14 (int,int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 struct fscache_state const* FUNC_19 (int ) ;
 int FUNC_20 (int *,int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_21(struct fscache_object *VAR_11,
             int VAR_12)
{
 struct fscache_operation *VAR_13;
 struct fscache_cookie *VAR_14 = VAR_11->cookie;

 FUNC_1("{OBJ%x},%d", VAR_11->debug_id, VAR_12);




 if (!FUNC_12(VAR_11)) {
  FUNC_0(VAR_11->cookie->stores.rnode == ((void*)0));
  FUNC_15(VAR_2, &VAR_14->flags);
  FUNC_2(" [no cookie]");
  return FUNC_19(VAR_9);
 }


 FUNC_5(VAR_14);
 FUNC_3(VAR_4, &VAR_11->flags);
 FUNC_4(VAR_11);


 VAR_13 = FUNC_14(sizeof(*VAR_13), VAR_8);
 if (!VAR_13)
  goto nomem;

 FUNC_6(VAR_13, ((void*)0));
 FUNC_7(VAR_13, VAR_11->cache->ops->invalidate_object);
 VAR_13->flags = VAR_6 |
  (1 << VAR_5) |
  (1 << VAR_7);
 FUNC_9(VAR_13, "Inval");

 FUNC_16(&VAR_14->lock);
 if (FUNC_10(VAR_11, VAR_13) < 0)
  goto submit_op_failed;
 FUNC_17(&VAR_14->lock);
 FUNC_8(VAR_13);





 FUNC_15(VAR_1, &VAR_14->flags);




 if (FUNC_18(VAR_0, &VAR_14->flags))
  FUNC_20(&VAR_14->flags, VAR_0);
 FUNC_2(" [ok]");
 return FUNC_19(VAR_10);

nomem:
 FUNC_3(VAR_3, &VAR_11->flags);
 FUNC_11(VAR_11);
 FUNC_2(" [ENOMEM]");
 return FUNC_19(VAR_9);

submit_op_failed:
 FUNC_3(VAR_3, &VAR_11->flags);
 FUNC_17(&VAR_14->lock);
 FUNC_13(VAR_13);
 FUNC_2(" [EIO]");
 return FUNC_19(VAR_9);
}
