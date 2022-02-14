
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_object {TYPE_2__* cache; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ (* grab_object ) (struct fscache_object*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct fscache_object*) ;

__attribute__((used)) static int FUNC_3(struct fscache_object *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1);
 VAR_3 = VAR_2->cache->ops->grab_object(VAR_2) ? 0 : -VAR_0;
 FUNC_1(&VAR_1);
 return VAR_3;
}
