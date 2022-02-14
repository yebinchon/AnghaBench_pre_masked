
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int address; } ;
struct TYPE_5__ {TYPE_1__ a64; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct mem_array {int size; TYPE_3__ bus_address; int virtual_address; } ;
struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {scalar_t__ va; } ;


 int FUNC_0 (int ,int ,int ,struct be_dma_mem*) ;
 int FUNC_1 (struct be_dma_mem*) ;

__attribute__((used)) static void
FUNC_2(struct beiscsi_hba *VAR_0,
       struct mem_array *VAR_1, struct be_dma_mem *VAR_2)
{
 if (VAR_2->va)
  FUNC_1(VAR_2);

 FUNC_0(VAR_1->virtual_address,
     VAR_1->bus_address.u.a64.address,
     VAR_1->size, VAR_2);
}
