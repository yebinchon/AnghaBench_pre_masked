
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int wq; int waker; } ;
struct dm_target {struct pool_c* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct pool_c *VAR_1 = VAR_0->private;
 struct pool *VAR_2 = VAR_1->pool;

 FUNC_0(&VAR_2->waker);
 FUNC_2(VAR_2->wq);
 (void) FUNC_1(VAR_2);
}
