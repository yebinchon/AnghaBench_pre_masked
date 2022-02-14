
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {void* base_virt; scalar_t__ base_phys; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(phys_addr_t VAR_1) {
 return VAR_0->base_virt +
  (unsigned long)(VAR_1 - VAR_0->base_phys);
}
