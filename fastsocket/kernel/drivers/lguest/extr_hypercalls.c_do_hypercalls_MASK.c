
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_cpu {int * hcall; int pending_notify; TYPE_1__* lg; } ;
struct TYPE_2__ {int lguest_data; } ;


 int FUNC_0 (struct lg_cpu*) ;
 int FUNC_1 (struct lg_cpu*,int *) ;
 int FUNC_2 (struct lg_cpu*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct lg_cpu *VAR_0)
{

 if (FUNC_3(!VAR_0->lg->lguest_data)) {

  FUNC_2(VAR_0);

  VAR_0->hcall = ((void*)0);
  return;
 }






 FUNC_0(VAR_0);






 if (!VAR_0->pending_notify) {
  FUNC_1(VAR_0, VAR_0->hcall);
  VAR_0->hcall = ((void*)0);
 }
}
