
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_memory_reservation {int nr_extents; int extent_start; int domid; int extent_order; int address_bits; } ;
struct vm_struct {scalar_t__ addr; int size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ,struct xen_memory_reservation*) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_struct*) ;
 int FUNC_6 (int ,unsigned long*) ;

void FUNC_7(struct vm_struct *VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_3->size);
 unsigned long VAR_5;
 unsigned long VAR_6 = FUNC_2(VAR_3->addr);



 for (VAR_5 = 0; VAR_5 < (1 << VAR_4); VAR_5++) {
  unsigned long VAR_7;
  unsigned long VAR_8 = (VAR_6 >> VAR_1) + VAR_5;
  struct xen_memory_reservation VAR_9 = {
   .nr_extents = 1,
   .address_bits = 0,
   .extent_order = 0,
   .domid = VAR_0
  };
  FUNC_6(VAR_9.extent_start, &VAR_8);
  VAR_7 = FUNC_1(VAR_2,
        &VAR_9);
  FUNC_0(VAR_7 != 1);
 }
 FUNC_3((unsigned long)VAR_3->addr, VAR_4);
 FUNC_5(VAR_3);
}
