
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* kcdata_subtype_descriptor_t ;
struct TYPE_3__ {int kcs_elem_size; } ;



__attribute__((used)) static inline int
FUNC_0(kcdata_subtype_descriptor_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (VAR_2 > 1) {

  if (VAR_1 > 0xffff || VAR_2 > 0xffff)
   return -1;
  VAR_0->kcs_elem_size = ((VAR_2 & 0xffff) << 16 | (VAR_1 & 0xffff));
 }
 else
 {
  VAR_0->kcs_elem_size = VAR_1;
 }
 return 0;
}
