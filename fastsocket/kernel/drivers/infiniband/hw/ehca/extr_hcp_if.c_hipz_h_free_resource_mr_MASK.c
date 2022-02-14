
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipz_adapter_handle {int handle; } ;
struct TYPE_2__ {int handle; } ;
struct ehca_mr {TYPE_1__ ipz_mr_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_1,
       const struct ehca_mr *VAR_2)
{
 return FUNC_0(VAR_0,
           VAR_1.handle,
           VAR_2->ipz_mr_handle.handle,
           0, 0, 0, 0, 0);
}
