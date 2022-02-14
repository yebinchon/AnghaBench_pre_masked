
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct beiscsi_hba {struct be_mem_descriptor* phwi_ctrlr; struct be_mem_descriptor* init_mem; int pcidev; } ;
struct TYPE_4__ {scalar_t__ address; } ;
struct TYPE_5__ {TYPE_1__ a64; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct be_mem_descriptor {int num_elements; struct be_mem_descriptor* wrb_context; struct be_mem_descriptor* mem_array; TYPE_3__ bus_address; int virtual_address; int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_mem_descriptor*) ;
 int FUNC_1 (int ,int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct beiscsi_hba *VAR_1)
{
 struct be_mem_descriptor *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_1->init_mem;
 VAR_3 = 0;
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  for (VAR_4 = VAR_2->num_elements; VAR_4 > 0; VAR_4--) {
   FUNC_1(VAR_1->pcidev,
     VAR_2->mem_array[VAR_4 - 1].size,
     VAR_2->mem_array[VAR_4 - 1].virtual_address,
     (unsigned long)VAR_2->mem_array[VAR_4 - 1].
     bus_address.u.a64.address);
  }
  FUNC_0(VAR_2->mem_array);
  VAR_2++;
 }
 FUNC_0(VAR_1->init_mem);
 FUNC_0(VAR_1->phwi_ctrlr->wrb_context);
 FUNC_0(VAR_1->phwi_ctrlr);
}
