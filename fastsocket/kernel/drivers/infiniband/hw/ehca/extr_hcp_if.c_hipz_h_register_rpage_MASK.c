
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct ipz_adapter_handle {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int const,int const,int,int ,int ) ;

u64 FUNC_1(const struct ipz_adapter_handle VAR_1,
     const u8 VAR_2,
     const u8 VAR_3,
     const u64 VAR_4,
     const u64 VAR_5,
     u64 VAR_6)
{
 return FUNC_0(VAR_0,
           VAR_1.handle,
           (u64)VAR_3 | ((u64)VAR_2) << 8,

           VAR_4,
           VAR_5,
           VAR_6,
           0, 0);
}
