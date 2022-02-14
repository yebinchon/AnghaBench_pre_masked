
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct TYPE_3__ {int pointer; } ;
struct TYPE_4__ {int length; int* pointer; } ;
struct acpi_osc_context {char* uuid_str; int rev; TYPE_1__ ret; TYPE_2__ cap; } ;
typedef int capbuf ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int ,struct acpi_osc_context*) ;
 int FUNC_3 (int ) ;

int FUNC_4(void)
{
 static u8 VAR_5[] = "ed855e0c-6c90-47bf-a62a-26de0fc5ad5c";
 acpi_handle VAR_6;
 u32 VAR_7[3];
 struct acpi_osc_context VAR_8 = {
  .uuid_str = VAR_5,
  .rev = 1,
  .cap.length = sizeof(VAR_7),
  .cap.pointer = VAR_7,
 };

 VAR_7[VAR_3] = VAR_2;
 VAR_7[VAR_4] = 1;
 VAR_7[VAR_1] = 0;

 if (FUNC_0(FUNC_1(((void*)0), "\\_SB", &VAR_6))
     || FUNC_0(FUNC_2(VAR_6, &VAR_8)))
  return -VAR_0;
 else {
  FUNC_3(VAR_8.ret.pointer);
  return 0;
 }
}
