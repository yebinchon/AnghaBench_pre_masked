
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uv_systab {int function; } ;
typedef int s64 ;
typedef enum uv_bios_cmd { ____Placeholder_uv_bios_cmd } uv_bios_cmd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int ,int ,int ,int ,int ) ;
 struct uv_systab VAR_1 ;

s64 FUNC_2(enum uv_bios_cmd VAR_2, u64 VAR_3, u64 VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct uv_systab *VAR_8 = &VAR_1;
 s64 VAR_9;

 if (!VAR_8->function)



  return VAR_0;

 VAR_9 = FUNC_1((void *)FUNC_0(VAR_8->function), (u64)VAR_2,
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 return VAR_9;
}
