
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t vm_offset_t ;
typedef int uint32_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (int ,char*,void**,int *) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,char*,int ) ;

vm_offset_t
FUNC_3(void)
{
 DTEntry VAR_5;
 uintptr_t *VAR_6;
 uint32_t VAR_7;
 char *VAR_8;

 if (FUNC_0("name", "arm-io", &VAR_5) == VAR_4) {
  if (VAR_2 == 0) {
   FUNC_1(VAR_5, "device_type", (void **)&VAR_8, &VAR_7);
   FUNC_2(VAR_3, VAR_8, VAR_0);
   VAR_2 = VAR_3;

   FUNC_1(VAR_5, "ranges", (void **)&VAR_6, &VAR_7);
   VAR_1 = *(VAR_6 + 1);
  }
  return VAR_1;
 }
 return 0;
}
