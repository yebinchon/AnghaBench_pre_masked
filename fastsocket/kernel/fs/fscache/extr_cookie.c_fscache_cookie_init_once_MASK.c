
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {int backing_objects; int stores_lock; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fscache_cookie*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0)
{
 struct fscache_cookie *VAR_1 = VAR_0;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_2(&VAR_1->lock);
 FUNC_2(&VAR_1->stores_lock);
 FUNC_0(&VAR_1->backing_objects);
}
