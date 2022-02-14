
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef void* u32 ;
struct ipz_pd {unsigned long long value; } ;
struct ipz_adapter_handle {int handle; } ;
struct ehca_mr_hipzout_parms {unsigned long vaddr; void* rkey; void* lkey; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_mr {TYPE_1__ ipz_mr_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (int ,unsigned long*,int ,int ,unsigned long long const,unsigned long long const,unsigned long long,unsigned long long const,int ,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_2,
     const struct ehca_mr *VAR_3,
     const u64 VAR_4,
     const u64 VAR_5,
     const u32 VAR_6,
     const struct ipz_pd VAR_7,
     const u64 VAR_8,
     struct ehca_mr_hipzout_parms *VAR_9)
{
 u64 VAR_10;
 unsigned long VAR_11[VAR_1];

 VAR_10 = FUNC_0(VAR_0, VAR_11,
    VAR_2.handle,
    VAR_3->ipz_mr_handle.handle,
    VAR_4,
    VAR_5,

    ((((u64)VAR_6) << 32ULL) | VAR_7.value),
    VAR_8,
    0, 0, 0);
 VAR_9->vaddr = VAR_11[1];
 VAR_9->lkey = (u32)VAR_11[2];
 VAR_9->rkey = (u32)VAR_11[3];

 return VAR_10;
}
