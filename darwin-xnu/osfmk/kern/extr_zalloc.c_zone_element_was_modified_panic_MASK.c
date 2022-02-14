
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ elem_size; int zone_name; } ;


 int FUNC_0 (char*,int ,void*,void*,void*,int ,int ,void*,void*,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_1(zone_t VAR_2,
                                vm_offset_t VAR_3,
                                vm_offset_t VAR_4,
                                vm_offset_t VAR_5,
                                vm_offset_t VAR_6)
{
 FUNC_0("a freed zone element has been modified in zone %s: expected %p but found %p, bits changed %p, at offset %d of %d in element %p, cookies %p %p",
                  VAR_2->zone_name,
       (void *) VAR_5,
       (void *) VAR_4,
       (void *) (VAR_5 ^ VAR_4),
       (uint32_t) VAR_6,
       (uint32_t) VAR_2->elem_size,
       (void *) VAR_3,
       (void *) VAR_0,
       (void *) VAR_1);
}
