
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int kern_return_t ;
struct TYPE_14__ {int can_reuse_success; int can_reuse_failure; } ;
struct TYPE_13__ {scalar_t__ vme_start; struct TYPE_13__* vme_next; } ;
struct TYPE_12__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,TYPE_2__**) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static kern_return_t
FUNC_6(
 vm_map_t VAR_4,
 vm_map_offset_t VAR_5,
 vm_map_offset_t VAR_6)
{
 vm_map_entry_t VAR_7;






 FUNC_2(VAR_4);
 FUNC_0(VAR_4->pmap != VAR_2);







 if (!FUNC_3(VAR_4, VAR_5, VAR_6, &VAR_7)) {
  FUNC_5(VAR_4);
  VAR_3.can_reuse_failure++;
  return VAR_0;
 }




 for (; VAR_7 != FUNC_4(VAR_4) && VAR_7->vme_start < VAR_6;
      VAR_7 = VAR_7->vme_next) {



  if (! FUNC_1(VAR_7)) {
   FUNC_5(VAR_4);
   VAR_3.can_reuse_failure++;
   return VAR_0;
  }
 }

 FUNC_5(VAR_4);
 VAR_3.can_reuse_success++;
 return VAR_1;
}
