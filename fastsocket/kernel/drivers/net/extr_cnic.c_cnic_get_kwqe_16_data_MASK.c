
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lo; int hi; } ;
union l5cm_specific_data {TYPE_1__ phy_address; } ;
typedef int u64 ;
typedef size_t u32 ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_context {void* kwqe_data; scalar_t__ kwqe_data_mapping; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static void *FUNC_0(struct cnic_local *VAR_0, u32 VAR_1,
       union l5cm_specific_data *VAR_2)
{
 struct cnic_context *VAR_3 = &VAR_0->ctx_tbl[VAR_1];
 dma_addr_t VAR_4;

 VAR_4 = VAR_3->kwqe_data_mapping;
 VAR_2->phy_address.lo = (u64) VAR_4 & 0xffffffff;
 VAR_2->phy_address.hi = (u64) VAR_4 >> 32;
 return VAR_3->kwqe_data;
}
