
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tcache_t ;
struct TYPE_3__ {int lock; int tcache_ql; } ;
typedef TYPE_1__ arena_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

void
FUNC_4(tcache_t *VAR_2, arena_t *VAR_3)
{

 if (VAR_0) {

  FUNC_0(&VAR_3->lock);
  FUNC_2(VAR_2, VAR_1);
  FUNC_3(&VAR_3->tcache_ql, VAR_2, VAR_1);
  FUNC_1(&VAR_3->lock);
 }
}
