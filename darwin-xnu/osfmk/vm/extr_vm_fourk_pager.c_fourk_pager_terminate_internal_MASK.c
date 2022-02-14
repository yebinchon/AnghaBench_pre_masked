
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_3__* fourk_pager_t ;
struct TYPE_6__ {int mo_control; } ;
struct TYPE_7__ {int is_ready; TYPE_2__ fourk_pgr_hdr; TYPE_1__* slots; int is_mapped; } ;
struct TYPE_5__ {scalar_t__ backing_object; scalar_t__ backing_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(
 fourk_pager_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->is_ready);
 FUNC_0(!VAR_2->is_mapped);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->slots[VAR_3].backing_object != VAR_1 &&
      VAR_2->slots[VAR_3].backing_object != (vm_object_t) -1) {
   FUNC_2(VAR_2->slots[VAR_3].backing_object);
   VAR_2->slots[VAR_3].backing_object = (vm_object_t) -1;
   VAR_2->slots[VAR_3].backing_offset = (vm_object_offset_t) -1;
  }
 }


 FUNC_1(VAR_2->fourk_pgr_hdr.mo_control, 0);
}
