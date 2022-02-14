
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_state {int dummy; } ;
struct fscache_object {struct fscache_cookie* cookie; TYPE_2__* cache; scalar_t__ oob_event_mask; int debug_id; } ;
struct fscache_cookie {int flags; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* lookup_complete ) (struct fscache_object*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct fscache_object*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct fscache_object*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct fscache_state const* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_9(struct fscache_object *VAR_4,
         int VAR_5)
{
 struct fscache_cookie *VAR_6;

 FUNC_0("{OBJ%x},%d", VAR_4->debug_id, VAR_5);

 VAR_4->oob_event_mask = 0;

 FUNC_2(&VAR_3);
 VAR_4->cache->ops->lookup_complete(VAR_4);
 FUNC_3(&VAR_3);

 VAR_6 = VAR_4->cookie;
 FUNC_4(VAR_1, &VAR_6->flags);
 if (FUNC_6(VAR_0, &VAR_6->flags))
  FUNC_8(&VAR_6->flags, VAR_0);

 FUNC_1(VAR_4);
 return FUNC_7(VAR_2);
}
