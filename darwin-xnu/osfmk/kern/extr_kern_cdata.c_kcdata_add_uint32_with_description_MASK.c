
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct _uint32_with_description_data {int data; int * desc; } ;
typedef int save_data ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_4__ {int kcd_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct _uint32_with_description_data*,int const) ;
 scalar_t__ FUNC_2 (struct _uint32_with_description_data*,scalar_t__,int const) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int const,scalar_t__*) ;
 int FUNC_4 (void*,struct _uint32_with_description_data*,int const) ;
 int FUNC_5 (int *,char const*,int) ;
 scalar_t__ FUNC_6 (char const*) ;

kern_return_t FUNC_7(
    kcdata_descriptor_t VAR_6,
    uint32_t VAR_7,
    const char *VAR_8)
{
 FUNC_0(FUNC_6(VAR_8) < VAR_0);
 if (FUNC_6(VAR_8) >= VAR_0)
  return VAR_3;
 kern_return_t VAR_9 = 0;
 mach_vm_address_t VAR_10;
 struct _uint32_with_description_data VAR_11;
 const uint64_t VAR_12 = sizeof(VAR_11);

 FUNC_1(&VAR_11, VAR_12);
 FUNC_5(&(VAR_11.desc[0]), VAR_8, sizeof(VAR_11.desc));
 VAR_11.data = VAR_7;

 VAR_9 = FUNC_3(VAR_6, VAR_1, VAR_12, &VAR_10);
 if (VAR_9 != VAR_5)
  return VAR_9;
 if (VAR_6->kcd_flags & VAR_2) {
  if (FUNC_2(&VAR_11, VAR_10, VAR_12))
   return VAR_4;
 } else {
  FUNC_4((void *)VAR_10, &VAR_11, VAR_12);
 }
 return VAR_5;
}
