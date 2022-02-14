
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* os_reason_t ;
struct TYPE_4__ {scalar_t__ osr_refcount; int osr_lock; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int,scalar_t__*) ;
 int FUNC_4 (char*) ;

void
FUNC_5(os_reason_t VAR_1)
{
 if (VAR_1 == VAR_0) {
  return;
 }

 FUNC_1(&VAR_1->osr_lock);

 FUNC_0(VAR_1->osr_refcount > 0);
 if (FUNC_3(VAR_1->osr_refcount, 1, &VAR_1->osr_refcount)) {
  FUNC_4("os reason refcount overflow");
 }

 FUNC_2(&VAR_1->osr_lock);

 return;
}
