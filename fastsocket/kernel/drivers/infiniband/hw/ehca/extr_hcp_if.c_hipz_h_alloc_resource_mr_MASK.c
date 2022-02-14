
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef void* u32 ;
struct ipz_pd {int value; } ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {unsigned long handle; } ;
struct ehca_mr_hipzout_parms {void* rkey; void* lkey; TYPE_1__ handle; } ;
struct ehca_mr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (int ,unsigned long*,int ,int,unsigned long long const,unsigned long long const,unsigned long long,int ,int ,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_2,
        const struct ehca_mr *VAR_3,
        const u64 VAR_4,
        const u64 VAR_5,
        const u32 VAR_6,
        const struct ipz_pd VAR_7,
        struct ehca_mr_hipzout_parms *VAR_8)
{
 u64 VAR_9;
 unsigned long VAR_10[VAR_1];

 VAR_9 = FUNC_0(VAR_0, VAR_10,
    VAR_2.handle,
    5,
    VAR_4,
    VAR_5,
    (((u64)VAR_6) << 32ULL),
    VAR_7.value,
    0, 0, 0);
 VAR_8->handle.handle = VAR_10[0];
 VAR_8->lkey = (u32)VAR_10[2];
 VAR_8->rkey = (u32)VAR_10[3];

 return VAR_9;
}
