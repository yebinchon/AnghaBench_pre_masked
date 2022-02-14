
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int lock; } ;
struct dm_thin_new_mapping {int prepared; int err; TYPE_1__* tc; } ;
struct TYPE_2__ {struct pool* pool; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_new_mapping*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_1, unsigned long VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 struct dm_thin_new_mapping *VAR_5 = VAR_3;
 struct pool *VAR_6 = VAR_5->tc->pool;

 VAR_5->err = VAR_1 || VAR_2 ? -VAR_0 : 0;

 FUNC_1(&VAR_6->lock, VAR_4);
 VAR_5->prepared = 1;
 FUNC_0(VAR_5);
 FUNC_2(&VAR_6->lock, VAR_4);
}
