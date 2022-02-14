
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int memory_object_t ;
typedef int kern_return_t ;
typedef TYPE_3__* fourk_pager_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ mo_control; } ;
struct TYPE_7__ {scalar_t__ ref_count; TYPE_2__* slots; TYPE_1__ fourk_pgr_hdr; } ;
struct TYPE_6__ {scalar_t__ backing_object; scalar_t__ backing_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;

kern_return_t
FUNC_2(
 memory_object_t VAR_5,
 boolean_t VAR_6,
 int VAR_7,
 vm_object_t VAR_8,
 vm_object_offset_t VAR_9,
 vm_object_t *VAR_10,
 vm_object_offset_t *VAR_11)
{
 fourk_pager_t VAR_12;

 VAR_12 = FUNC_1(VAR_5);
 if (VAR_12 == ((void*)0)) {
  return VAR_2;
 }

 FUNC_0(VAR_12->ref_count > 0);
 FUNC_0(VAR_12->fourk_pgr_hdr.mo_control != VAR_4);

 if (VAR_7 < 0 || VAR_7 > VAR_0) {
  return VAR_2;
 }

 if (!VAR_6 &&
     (VAR_12->slots[VAR_7].backing_object != (vm_object_t) -1 ||
      VAR_12->slots[VAR_7].backing_offset != (vm_object_offset_t) -1)) {
  return VAR_1;
 }

 *VAR_10 = VAR_12->slots[VAR_7].backing_object;
 *VAR_11 = VAR_12->slots[VAR_7].backing_offset;

 VAR_12->slots[VAR_7].backing_object = VAR_8;
 VAR_12->slots[VAR_7].backing_offset = VAR_9;

 return VAR_3;
}
