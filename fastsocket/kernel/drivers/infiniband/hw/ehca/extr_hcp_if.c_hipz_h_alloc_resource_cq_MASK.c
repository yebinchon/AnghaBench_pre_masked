
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_4__ {unsigned long handle; } ;
struct ehca_cq {TYPE_2__ ipz_cq_handle; int galpas; int token; } ;
struct TYPE_3__ {int handle; } ;
struct ehca_alloc_cq_parms {void* act_pages; void* act_nr_of_entries; int nr_cqe; TYPE_1__ eq_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,unsigned long*,int ,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,unsigned long,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,unsigned long,unsigned long) ;

u64 FUNC_4(const struct ipz_adapter_handle VAR_6,
        struct ehca_cq *VAR_7,
        struct ehca_alloc_cq_parms *VAR_8)
{
 int VAR_9;
 u64 VAR_10;
 unsigned long VAR_11[VAR_5];

 VAR_10 = FUNC_1(VAR_0, VAR_11,
    VAR_6.handle,
    2,
    VAR_8->eq_handle.handle,
    VAR_7->token,
    VAR_8->nr_cqe,
    0, 0, 0, 0);
 VAR_7->ipz_cq_handle.handle = VAR_11[0];
 VAR_8->act_nr_of_entries = (u32)VAR_11[3];
 VAR_8->act_pages = (u32)VAR_11[4];

 if (VAR_10 == VAR_4) {
  VAR_9 = FUNC_3(&VAR_7->galpas, 0, VAR_11[5], VAR_11[6]);
  if (VAR_9) {
   FUNC_0("Could not establish HW access. rc=%d paddr=%#lx",
         VAR_9, VAR_11[5]);

   FUNC_2(VAR_1,
      VAR_6.handle,
      VAR_7->ipz_cq_handle.handle,
      0, 0, 0, 0, 0);
   VAR_10 = VAR_3;
  }
 }

 if (VAR_10 == VAR_2)
  FUNC_0("Not enough resources. ret=%lli", VAR_10);

 return VAR_10;
}
