
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sdma_intr_base_p; scalar_t__ mpsc_routing_base_p; int * sdma_intr_base; int * mpsc_routing_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (!VAR_2.mpsc_routing_base) {
  FUNC_0(VAR_2.mpsc_routing_base);
  FUNC_1(VAR_2.mpsc_routing_base_p,
    VAR_0);
 }
 if (!VAR_2.sdma_intr_base) {
  FUNC_0(VAR_2.sdma_intr_base);
  FUNC_1(VAR_2.sdma_intr_base_p,
    VAR_1);
 }

 VAR_2.mpsc_routing_base = ((void*)0);
 VAR_2.sdma_intr_base = ((void*)0);

 VAR_2.mpsc_routing_base_p = 0;
 VAR_2.sdma_intr_base_p = 0;
}
