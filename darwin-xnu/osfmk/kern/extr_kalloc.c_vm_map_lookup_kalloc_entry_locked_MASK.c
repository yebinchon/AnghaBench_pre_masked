
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ vme_start; scalar_t__ vme_end; int vme_atomic; } ;


 int FUNC_0 (char*,int ,void*,...) ;
 int FUNC_1 (int ,scalar_t__,TYPE_1__**) ;

__attribute__((used)) static vm_size_t
FUNC_2(
  vm_map_t VAR_0,
  void *VAR_1)
{
 boolean_t VAR_2;
 vm_map_entry_t VAR_3 = ((void*)0);

 VAR_2 = FUNC_1(VAR_0, (vm_map_offset_t)VAR_1, &VAR_3);
 if (!VAR_2) {
  FUNC_0("Attempting to lookup/free an address not allocated via kalloc! (vm_map_lookup_entry() failed map: %p, addr: %p)\n",
   VAR_0, VAR_1);
 }
 if (VAR_3->vme_start != (vm_map_offset_t)VAR_1) {
  FUNC_0("Attempting to lookup/free the middle of a kalloc'ed element! (map: %p, addr: %p, entry: %p)\n",
   VAR_0, VAR_1, VAR_3);
 }
 if (!VAR_3->vme_atomic) {
  FUNC_0("Attempting to lookup/free an address not managed by kalloc! (map: %p, addr: %p, entry: %p)\n",
   VAR_0, VAR_1, VAR_3);
 }
 return (VAR_3->vme_end - VAR_3->vme_start);
}
