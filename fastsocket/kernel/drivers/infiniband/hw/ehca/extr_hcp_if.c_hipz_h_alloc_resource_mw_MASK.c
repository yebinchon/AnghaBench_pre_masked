
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ipz_pd {int value; } ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {unsigned long handle; } ;
struct ehca_mw_hipzout_parms {scalar_t__ rkey; TYPE_1__ handle; } ;
struct ehca_mw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*,int ,int,int ,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_2,
        const struct ehca_mw *VAR_3,
        const struct ipz_pd VAR_4,
        struct ehca_mw_hipzout_parms *VAR_5)
{
 u64 VAR_6;
 unsigned long VAR_7[VAR_1];

 VAR_6 = FUNC_0(VAR_0, VAR_7,
    VAR_2.handle,
    6,
    VAR_4.value,
    0, 0, 0, 0, 0, 0);
 VAR_5->handle.handle = VAR_7[0];
 VAR_5->rkey = (u32)VAR_7[3];

 return VAR_6;
}
