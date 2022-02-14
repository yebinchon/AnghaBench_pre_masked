
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_map_t ;
struct TYPE_9__ {int vmkf_map_jit; } ;
typedef TYPE_1__ vm_map_kernel_flags_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_11__ {int copy_strategy; } ;
struct TYPE_10__ {scalar_t__ is_sub_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_16 ;
 int FUNC_4 (int ,size_t*,scalar_t__,int,int *,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,scalar_t__*,size_t,int ,int ,TYPE_1__,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_7 (int ,scalar_t__*,size_t,int ,int ,TYPE_1__,int ,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_2__**) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_11 (int ,scalar_t__,size_t,int ,int) ;

__attribute__((used)) static void*
FUNC_12(
 vm_map_t VAR_17,
 size_t VAR_18,
 vm_prot_t VAR_19)
{
 vm_offset_t VAR_20 = 0;
 vm_offset_t VAR_21 = 0;
 vm_size_t VAR_22 = VAR_18;
 vm_map_entry_t VAR_23;
 ipc_port_t VAR_24;
 kern_return_t VAR_25;
 vm_map_kernel_flags_t VAR_26;

 if (VAR_17 == ((void*)0))
  FUNC_5("commpage submap is null");

 VAR_25 = FUNC_7(VAR_16,
      &VAR_20,
      VAR_18,
      0,
      VAR_4,
      VAR_10,
      VAR_9,
      ((void*)0),
      0,
      VAR_0,
      VAR_11,
      VAR_11,
      VAR_6);
 if (VAR_25 != VAR_1)
  FUNC_5("cannot allocate commpage %d", VAR_25);

 if ((VAR_25 = FUNC_10(VAR_16,
         VAR_20,
         VAR_20+VAR_18,
         VAR_12, VAR_9,
         VAR_0)))
  FUNC_5("cannot wire commpage: %d", VAR_25);
 if (!(VAR_25 = FUNC_8( VAR_16, FUNC_9(VAR_20, FUNC_1(VAR_16)), &VAR_23) || VAR_23->is_sub_map))
  FUNC_5("cannot find commpage entry %d", VAR_25);
 FUNC_0(VAR_23)->copy_strategy = VAR_2;

 if ((VAR_25 = FUNC_4( VAR_16,
        &VAR_22,
        VAR_20,
        VAR_19,
        &VAR_24,
        ((void*)0) )))
  FUNC_5("cannot make entry for commpage %d", VAR_25);

 VAR_26 = VAR_10;
 if (VAR_19 == (VAR_14 | VAR_13)) {





  VAR_26.vmkf_map_jit = VAR_3;
 }

 VAR_25 = FUNC_6(
  VAR_17,
  &VAR_21,
  VAR_18,
  0,
  VAR_5,
  VAR_26,
  VAR_8,
  VAR_24,
  0,
  VAR_0,
  VAR_19,
  VAR_19,
  VAR_7);
 if (VAR_25 != VAR_1)
  FUNC_5("cannot map commpage %d", VAR_25);

 FUNC_3(VAR_24);




 VAR_25 = FUNC_11(VAR_16, VAR_20, VAR_18, VAR_0, VAR_14 | VAR_15);
 FUNC_2 (VAR_25 == VAR_1);

 return (void*)(intptr_t)VAR_20;
}
