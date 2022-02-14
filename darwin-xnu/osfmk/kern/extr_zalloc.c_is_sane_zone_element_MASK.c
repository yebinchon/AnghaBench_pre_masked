
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef scalar_t__ vm_offset_t ;
typedef int boolean_t ;
struct TYPE_4__ {int elem_size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static inline boolean_t
FUNC_1(zone_t VAR_1,
                     vm_offset_t VAR_2)
{

 if (VAR_2 == 0)
  return VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_1->elem_size);
}
