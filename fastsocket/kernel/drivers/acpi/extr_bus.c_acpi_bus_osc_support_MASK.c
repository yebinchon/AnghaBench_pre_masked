
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* pointer; size_t length; } ;
struct TYPE_3__ {int length; int* pointer; } ;
struct acpi_osc_context {int rev; TYPE_2__ ret; TYPE_1__ cap; int uuid_str; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int ,struct acpi_osc_context*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_7(void)
{
 u32 VAR_11[2];
 struct acpi_osc_context VAR_12 = {
  .uuid_str = VAR_10,
  .rev = 1,
  .cap.length = 8,
  .cap.pointer = VAR_11,
 };
 acpi_handle VAR_13;

 VAR_11[VAR_1] = VAR_0;
 VAR_11[VAR_7] = VAR_6;
 if (!VAR_8)
  VAR_11[VAR_7] |= VAR_2;
 if (FUNC_0(FUNC_2(((void*)0), "\\_SB", &VAR_13)))
  return;

 if (FUNC_5() && FUNC_4()) {






  return;
 }

 if (FUNC_1(FUNC_3(VAR_13, &VAR_12))) {
  u32 *VAR_14 = VAR_12.ret.pointer;
  if (VAR_12.ret.length > VAR_7)
   VAR_9 =
    VAR_14[VAR_7] & VAR_2;
  FUNC_6(VAR_12.ret.pointer);
 }

}
