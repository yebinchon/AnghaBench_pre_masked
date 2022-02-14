
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
struct vm_map_corpse_footprint_header {scalar_t__ cf_size; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {scalar_t__ vmmap_corpse_footprint; scalar_t__ has_corpse_footprint; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
 vm_map_t VAR_4)
{
 if (VAR_4->has_corpse_footprint &&
     VAR_4->vmmap_corpse_footprint != 0) {
  struct vm_map_corpse_footprint_header *VAR_5;
  vm_size_t VAR_6;
  kern_return_t VAR_7;

  VAR_5 = VAR_4->vmmap_corpse_footprint;
  VAR_6 = VAR_5->cf_size;
  VAR_7 = FUNC_1(VAR_3,
       (vm_offset_t) VAR_4->vmmap_corpse_footprint,
       ((vm_size_t) VAR_6
        + VAR_2));
  FUNC_0(VAR_7 == VAR_1, "kr=0x%x\n", VAR_7);
  VAR_4->vmmap_corpse_footprint = 0;
  VAR_4->has_corpse_footprint = VAR_0;
 }
}
