
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* kcdata_subtype_descriptor_t ;
struct TYPE_3__ {int kcs_flags; int kcs_elem_size; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(kcdata_subtype_descriptor_t VAR_1)
{
 if (VAR_1->kcs_flags & VAR_0) {

  return (uint32_t)((VAR_1->kcs_elem_size & 0xffff) * ((VAR_1->kcs_elem_size & 0xffff0000)>>16));
 }
 return VAR_1->kcs_elem_size;
}
