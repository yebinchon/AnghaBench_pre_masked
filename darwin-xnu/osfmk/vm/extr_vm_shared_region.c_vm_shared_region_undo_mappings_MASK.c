
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_shared_region_t ;
typedef TYPE_3__* vm_named_entry_t ;
typedef int * vm_map_t ;
struct shared_file_mapping_np {scalar_t__ sfm_size; scalar_t__ sfm_address; int sfm_init_prot; int sfm_max_prot; scalar_t__ sfm_file_offset; } ;
typedef scalar_t__ mach_vm_offset_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_4__* ipc_port_t ;
typedef int event_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ ip_kobject; } ;
struct TYPE_7__ {int * map; } ;
struct TYPE_9__ {TYPE_1__ backing; } ;
struct TYPE_8__ {int sr_ref_count; int sr_mapping_in_progress; scalar_t__ sr_base_address; TYPE_4__* sr_mem_entry; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int*,int ) ;
 int FUNC_10 () ;

void
FUNC_11(
 vm_map_t VAR_4,
 mach_vm_offset_t VAR_5,
 struct shared_file_mapping_np *VAR_6,
 unsigned int VAR_7)
{
 unsigned int VAR_8 = 0;
 vm_shared_region_t VAR_9 = ((void*)0);
 boolean_t VAR_10 = VAR_0;

 VAR_9 = FUNC_7(FUNC_2());
 if (VAR_9 == ((void*)0)) {
  FUNC_4("Failed to undo mappings because of NULL shared region.\n");
  return;
 }


 if (VAR_4 == ((void*)0)) {
  ipc_port_t VAR_11;
  vm_named_entry_t VAR_12;

  FUNC_8();
  FUNC_1(VAR_9->sr_ref_count > 1);

  while (VAR_9->sr_mapping_in_progress) {

   FUNC_9(&VAR_9->sr_mapping_in_progress,
            VAR_2);
  }
  FUNC_1(! VAR_9->sr_mapping_in_progress);
  FUNC_1(VAR_9->sr_ref_count > 1);

  VAR_9->sr_mapping_in_progress = VAR_3;

  FUNC_10();

  VAR_10 = VAR_3;


  VAR_11 = VAR_9->sr_mem_entry;
  VAR_12 = (vm_named_entry_t) VAR_11->ip_kobject;
  VAR_4 = VAR_12->backing.map;
  VAR_5 = VAR_9->sr_base_address;
 }



 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  kern_return_t VAR_13;

  if (VAR_6[VAR_8].sfm_size == 0) {




   continue;
  }
  FUNC_0(
   ("shared_region: mapping[%d]: "
    "address:0x%016llx "
    "size:0x%016llx "
    "offset:0x%016llx "
    "maxprot:0x%x prot:0x%x: "
    "undoing...\n",
    VAR_8,
    (long long)VAR_6[VAR_8].sfm_address,
    (long long)VAR_6[VAR_8].sfm_size,
    (long long)VAR_6[VAR_8].sfm_file_offset,
    VAR_6[VAR_8].sfm_max_prot,
    VAR_6[VAR_8].sfm_init_prot));
  VAR_13 = FUNC_3(
   VAR_4,
   (VAR_6[VAR_8].sfm_address -
    VAR_5),
   VAR_6[VAR_8].sfm_size);
  FUNC_1(VAR_13 == VAR_1);
 }

 if (VAR_10) {
  FUNC_8();
  FUNC_1(VAR_9->sr_ref_count > 1);
  FUNC_1(VAR_9->sr_mapping_in_progress);

  VAR_9->sr_mapping_in_progress = VAR_0;
  FUNC_5((event_t) &VAR_9->sr_mapping_in_progress);
  FUNC_10();
  VAR_10 = VAR_0;
 }

 FUNC_6(VAR_9);
}
