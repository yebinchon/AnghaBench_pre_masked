
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* os_reason_t ;
struct TYPE_6__ {scalar_t__ osr_refcount; int osr_lock; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;

void
FUNC_6(os_reason_t VAR_3)
{
 if (VAR_3 == VAR_0) {
  return;
 }

 FUNC_1(&VAR_3->osr_lock);

 if (VAR_3->osr_refcount == 0) {
  FUNC_4("os_reason_free called on reason with zero refcount");
 }

 VAR_3->osr_refcount--;
 if (VAR_3->osr_refcount != 0) {
  FUNC_2(&VAR_3->osr_lock);
  return;
 }

 FUNC_3(VAR_3);

 FUNC_2(&VAR_3->osr_lock);
 FUNC_0(&VAR_3->osr_lock, VAR_1);

 FUNC_5(VAR_2, VAR_3);
}
