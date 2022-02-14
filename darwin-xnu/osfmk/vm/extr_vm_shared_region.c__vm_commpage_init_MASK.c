
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_named_entry_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_4__ {scalar_t__ map; } ;
struct TYPE_5__ {scalar_t__ size; int protection; scalar_t__ offset; void* is_sub_map; void* internal; TYPE_1__ backing; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__**,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,void*) ;

__attribute__((used)) static void
FUNC_6(
 ipc_port_t *VAR_4,
 vm_map_size_t VAR_5)
{
 kern_return_t VAR_6;
 vm_named_entry_t VAR_7;
 vm_map_t VAR_8;

 FUNC_0(
  ("commpage: -> _init(0x%llx)\n",
   (long long)VAR_5));

 VAR_6 = FUNC_2(&VAR_7,
     VAR_4);
 if (VAR_6 != VAR_0) {
  FUNC_3("_vm_commpage_init: could not allocate mem_entry");
 }
 VAR_8 = FUNC_5(FUNC_4(((void*)0), 0, 0), 0, VAR_5, VAR_1);
 if (VAR_8 == VAR_2) {
  FUNC_3("_vm_commpage_init: could not allocate VM map");
 }
 VAR_7->backing.map = VAR_8;
 VAR_7->internal = VAR_1;
 VAR_7->is_sub_map = VAR_1;
 VAR_7->offset = 0;
 VAR_7->protection = VAR_3;
 VAR_7->size = VAR_5;

 FUNC_0(
  ("commpage: _init(0x%llx) <- %p\n",
   (long long)VAR_5, (void *)FUNC_1(*VAR_4)));
}
