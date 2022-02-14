
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * object; } ;
struct TYPE_6__ {int tasks; scalar_t__ e_count; scalar_t__ e_max; int * e_tbl; TYPE_3__ isr_soft_isr; TYPE_3__ req_soft_isr; int data_spin_lock; int isr_spin_lock; } ;
struct TYPE_7__ {TYPE_1__ xdi_adapter; struct TYPE_7__** slave_adapters; } ;
typedef TYPE_2__ diva_os_xdi_adapter_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(diva_os_xdi_adapter_t * VAR_0)
{
 diva_os_xdi_adapter_t *VAR_1[4];
 diva_os_xdi_adapter_t *VAR_2;
 int VAR_3;

 VAR_1[0] = VAR_0;
 VAR_1[1] = VAR_0->slave_adapters[0];
 VAR_1[2] = VAR_0->slave_adapters[1];
 VAR_1[3] = VAR_0->slave_adapters[2];

 for (VAR_3 = 0; VAR_3 < VAR_0->xdi_adapter.tasks; VAR_3++) {
  VAR_2 = VAR_1[VAR_3];
  if (VAR_2) {
   FUNC_1(&VAR_2->
        xdi_adapter.
        isr_spin_lock, "unload");
   FUNC_1(&VAR_2->
        xdi_adapter.
        data_spin_lock,
        "unload");

   FUNC_0(&VAR_2->xdi_adapter.
      req_soft_isr);
   FUNC_0(&VAR_2->xdi_adapter.
      isr_soft_isr);

   FUNC_3(&VAR_2->xdi_adapter.
      req_soft_isr);
   VAR_2->xdi_adapter.isr_soft_isr.object = ((void*)0);

   if (VAR_2->xdi_adapter.e_tbl) {
    FUNC_2(0,
          VAR_2->xdi_adapter.
          e_tbl);
   }
   VAR_2->xdi_adapter.e_tbl = ((void*)0);
   VAR_2->xdi_adapter.e_max = 0;
   VAR_2->xdi_adapter.e_count = 0;
  }
 }

 return (0);
}
