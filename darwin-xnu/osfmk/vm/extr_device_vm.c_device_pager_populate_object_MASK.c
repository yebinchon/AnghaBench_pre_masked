
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef int upl_t ;
typedef scalar_t__ upl_size_t ;
typedef int ppnum_t ;
typedef int memory_object_t ;
typedef scalar_t__ memory_object_offset_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_3__* device_pager_t ;
struct TYPE_8__ {int mo_control; } ;
struct TYPE_10__ {TYPE_1__ dev_pgr_hdr; } ;
struct TYPE_9__ {int phys_contiguous; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,scalar_t__,int *,int *,unsigned int*,int,int ) ;

kern_return_t
FUNC_8(
 memory_object_t VAR_6,
 memory_object_offset_t VAR_7,
 ppnum_t VAR_8,
 vm_size_t VAR_9)
{
 device_pager_t VAR_10;
 vm_object_t VAR_11;
 kern_return_t VAR_12;
 upl_t VAR_13;

 VAR_10 = FUNC_1(VAR_6);
 if(VAR_10 == VAR_0)
  return VAR_1;

 VAR_11 = (vm_object_t)FUNC_2(
     VAR_10->dev_pgr_hdr.mo_control);
 if(VAR_11 == ((void*)0))
  return VAR_1;

 VAR_12 = FUNC_6(
    VAR_11, VAR_7, VAR_8, VAR_9);
 if(VAR_12 != VAR_2)
  return VAR_12;

 if(!VAR_11->phys_contiguous) {
  unsigned int VAR_14 = 0;
  FUNC_0((upl_size_t) VAR_9 == VAR_9);
         VAR_12 = FUNC_7(VAR_11,
        (vm_object_offset_t)VAR_7,
        (upl_size_t) VAR_9, &VAR_13, ((void*)0),
        &VAR_14,
        (VAR_4 | VAR_3),
        VAR_5);
  if(VAR_12 != VAR_2)
   FUNC_3("device_pager_populate_object: list_req failed");

  FUNC_4(VAR_13, ((void*)0), 0);
  FUNC_5(VAR_13);
 }


 return VAR_12;
}
