
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kcdata_type_definition {int kct_num_elements; int kct_type_identifier; int * kct_name; } ;
struct kcdata_subtype_descriptor {int dummy; } ;
typedef int mach_vm_address_t ;
typedef int kern_return_t ;
typedef int kcdata_descriptor_t ;
typedef int kc_type_definition ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kcdata_type_definition*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int ,int*) ;
 int FUNC_3 (int ,int,void*,int) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;

kern_return_t FUNC_6(
  kcdata_descriptor_t VAR_4,
  uint32_t VAR_5,
  char *VAR_6,
  struct kcdata_subtype_descriptor *VAR_7,
  uint32_t VAR_8)
{
 kern_return_t VAR_9 = VAR_3;
 struct kcdata_type_definition VAR_10;
 mach_vm_address_t VAR_11;
 uint32_t VAR_12 = sizeof(struct kcdata_type_definition);
 FUNC_0(&VAR_10, sizeof(VAR_10));

 if (FUNC_5(VAR_6) >= VAR_0)
  return VAR_2;
 FUNC_4(&VAR_10.kct_name[0], VAR_6, VAR_0);
 VAR_10.kct_num_elements = VAR_8;
 VAR_10.kct_type_identifier = VAR_5;

 VAR_12 += VAR_8 * sizeof(struct kcdata_subtype_descriptor);

 if (VAR_3 != (VAR_9 = FUNC_2(VAR_4, VAR_1, VAR_12,
                                                              FUNC_1(VAR_12), &VAR_11)))
  return VAR_9;
 if (VAR_3 != (VAR_9 = FUNC_3(VAR_4, VAR_11, (void *)&VAR_10, sizeof(struct kcdata_type_definition))))
  return VAR_9;
 VAR_11 += sizeof(struct kcdata_type_definition);
 if (VAR_3 != (VAR_9 = FUNC_3(VAR_4, VAR_11, (void *)VAR_7, VAR_8 * sizeof(struct kcdata_subtype_descriptor))))
  return VAR_9;
 return VAR_9;
}
