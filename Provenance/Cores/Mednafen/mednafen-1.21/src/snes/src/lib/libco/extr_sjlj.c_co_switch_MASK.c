
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cothread_t ;
struct TYPE_3__ {int context; } ;
typedef TYPE_1__ cothread_struct ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(cothread_t VAR_1) {
  if(!FUNC_1(VAR_0->context, 0)) {
    VAR_0 = (cothread_struct*)VAR_1;
    FUNC_0(VAR_0->context, 1);
  }
}
