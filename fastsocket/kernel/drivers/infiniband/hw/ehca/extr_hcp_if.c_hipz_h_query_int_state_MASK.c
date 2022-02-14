
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ipz_adapter_handle {int handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_3,
      u32 VAR_4)
{
 u64 VAR_5;
 VAR_5 = FUNC_1(VAR_1,
          VAR_3.handle,
          VAR_4,
          0, 0, 0, 0, 0);

 if (VAR_5 != VAR_2 && VAR_5 != VAR_0)
  FUNC_0("Could not query interrupt state.");

 return VAR_5;
}
