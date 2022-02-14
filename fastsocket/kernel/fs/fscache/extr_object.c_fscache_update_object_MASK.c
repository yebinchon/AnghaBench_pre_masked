
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_state {int dummy; } ;
struct fscache_object {TYPE_2__* cache; int debug_id; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* update_object ) (struct fscache_object*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fscache_object*) ;
 struct fscache_state const* FUNC_5 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_6(struct fscache_object *VAR_3,
        int VAR_4)
{
 FUNC_0("{OBJ%x},%d", VAR_3->debug_id, VAR_4);

 FUNC_2(&VAR_2);
 FUNC_2(&VAR_1);
 VAR_3->cache->ops->update_object(VAR_3);
 FUNC_3(&VAR_1);

 FUNC_1("");
 return FUNC_5(VAR_0);
}
