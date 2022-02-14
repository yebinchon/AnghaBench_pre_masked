
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_copy_t ;
typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_9__ {int entries_pageable; } ;
struct TYPE_8__ {TYPE_2__ cpy_hdr; scalar_t__ size; scalar_t__ offset; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int ,TYPE_2__*,int *,int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

kern_return_t
FUNC_6(
 vm_map_t VAR_9,
 vm_map_address_t VAR_10,
 vm_map_size_t VAR_11,
 vm_map_copy_t *VAR_12,
 vm_prot_t *VAR_13,
 vm_prot_t *VAR_14)
{
 vm_map_offset_t VAR_15, VAR_16;
 vm_map_copy_t VAR_17;
 kern_return_t VAR_18;





 if (VAR_11 == 0) {
  *VAR_12 = VAR_7;
  return(VAR_2);
 }




 VAR_16 = VAR_10 + VAR_11;
 if (VAR_16 < VAR_10)
  return VAR_1;




 VAR_15 = FUNC_5(VAR_10, VAR_3);
 VAR_16 = FUNC_3(VAR_16, VAR_3);
 VAR_17 = FUNC_0();
 VAR_17->type = VAR_6;
 VAR_17->cpy_hdr.entries_pageable = VAR_4;

 FUNC_4(&VAR_17->cpy_hdr);

 VAR_17->offset = 0;
 VAR_17->size = VAR_11;

 VAR_18 = FUNC_2(VAR_9,
      VAR_10,
      VAR_11,
      VAR_0,
      &VAR_17->cpy_hdr,
      VAR_13,
      VAR_14,
      VAR_5,
      VAR_4,
      VAR_0,
      VAR_8);
 if (VAR_18 != VAR_2) {
  FUNC_1(VAR_17);
  return VAR_18;
 }

 *VAR_12 = VAR_17;
 return VAR_2;
}
