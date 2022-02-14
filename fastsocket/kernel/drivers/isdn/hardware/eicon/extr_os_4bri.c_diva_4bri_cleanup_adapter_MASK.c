
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int ** addr; scalar_t__* bar; } ;
struct TYPE_14__ {TYPE_3__ pci; } ;
struct TYPE_11__ {scalar_t__ registered; int irq_nr; } ;
struct TYPE_12__ {TYPE_1__ irq_info; scalar_t__ Initialized; } ;
struct TYPE_15__ {int * slave_list; TYPE_4__ resources; int * port_name; int CardOrdinal; TYPE_2__ xdi_adapter; } ;
typedef TYPE_5__ diva_os_xdi_adapter_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_5__*,int ,scalar_t__,int ,int *,int) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(diva_os_xdi_adapter_t * VAR_2)
{
 int VAR_3;




 if (VAR_2->xdi_adapter.Initialized) {
  FUNC_2(VAR_2);
 }




 if (VAR_2->xdi_adapter.irq_info.registered) {
  FUNC_5(VAR_2, VAR_2->xdi_adapter.irq_info.irq_nr);
 }
 VAR_2->xdi_adapter.irq_info.registered = 0;




 FUNC_1(VAR_2);




 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (VAR_3 != 1) {
   if (VAR_2->resources.pci.bar[VAR_3]
       && VAR_2->resources.pci.addr[VAR_3]) {
    FUNC_6(VAR_2->resources.pci.addr[VAR_3]);
    VAR_2->resources.pci.bar[VAR_3] = 0;
    VAR_2->resources.pci.addr[VAR_3] = ((void*)0);
   }
  }
 }




 if (VAR_2->resources.pci.bar[1] && VAR_2->resources.pci.addr[1]) {
  FUNC_4(VAR_2, 0, VAR_2->resources.pci.bar[1],
      FUNC_0(VAR_2->
            CardOrdinal) ?
      VAR_1[1] :
      VAR_0[1],
      &VAR_2->port_name[0], 1);
  VAR_2->resources.pci.bar[1] = 0;
  VAR_2->resources.pci.addr[1] = ((void*)0);
 }

 if (VAR_2->slave_list) {
  FUNC_3(0, VAR_2->slave_list);
  VAR_2->slave_list = ((void*)0);
 }

 return (0);
}
