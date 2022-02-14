
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ipz_adapter_handle {int handle; } ;
struct ehca_mw_hipzout_parms {scalar_t__ rkey; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_mw {TYPE_1__ ipz_mw_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_2,
      const struct ehca_mw *VAR_3,
      struct ehca_mw_hipzout_parms *VAR_4)
{
 u64 VAR_5;
 unsigned long VAR_6[VAR_1];

 VAR_5 = FUNC_0(VAR_0, VAR_6,
    VAR_2.handle,
    VAR_3->ipz_mw_handle.handle,
    0, 0, 0, 0, 0, 0, 0);
 VAR_4->rkey = (u32)VAR_6[3];

 return VAR_5;
}
