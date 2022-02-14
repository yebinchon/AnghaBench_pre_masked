
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ lck_mtx_tag; int lck_mtx_waiters; TYPE_2__* lck_mtx_ptr; } ;
typedef TYPE_3__ lck_mtx_t ;
struct TYPE_8__ {int lck_mtx_waiters; } ;
struct TYPE_9__ {TYPE_1__ lck_mtx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4(
     lck_mtx_t *VAR_4)
{
 int VAR_5;





 if (VAR_4->lck_mtx_tag == VAR_1)
         VAR_5 = VAR_4->lck_mtx_ptr->lck_mtx.lck_mtx_waiters;
 else
         VAR_5 = VAR_4->lck_mtx_waiters;

 if ( !VAR_5) {
         VAR_2++;
 } else {
         VAR_3++;
  FUNC_2(VAR_4);
  FUNC_3(0);
  FUNC_1(VAR_4);
 }
}
