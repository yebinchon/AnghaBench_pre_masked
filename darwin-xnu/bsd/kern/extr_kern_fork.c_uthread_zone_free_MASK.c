
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct doc_tombstone {int dummy; } ;
struct TYPE_2__ {int uu_rethrottle_lock; int * t_tombstone; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (int ,void*) ;

void
FUNC_4(void *VAR_2)
{
 uthread_t VAR_3 = (uthread_t)VAR_2;

 if (VAR_3->t_tombstone) {
  FUNC_0(VAR_3->t_tombstone, sizeof(struct doc_tombstone));
  VAR_3->t_tombstone = ((void*)0);
 }

 FUNC_1(&VAR_3->uu_rethrottle_lock, VAR_0);

 FUNC_2(VAR_2);

 FUNC_3(VAR_1, VAR_2);
}
