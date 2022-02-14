
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mc_sync_lock; int mc_enable_cnt; } ;
typedef TYPE_1__ mcache_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 mcache_t *VAR_1 = VAR_0;

 FUNC_2(VAR_1);







 FUNC_0(&VAR_1->mc_sync_lock);
 VAR_1->mc_enable_cnt++;
 FUNC_1(&VAR_1->mc_sync_lock);
}
