
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef int vm_map_kernel_flags_t ;
typedef int vm_map_entry_t ;
struct TYPE_7__ {scalar_t__ disable_vmentry_reuse; int hdr; int first_free; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(
 vm_map_t VAR_1,
 vm_map_entry_t VAR_2,
 vm_map_entry_t VAR_3,
 vm_map_kernel_flags_t VAR_4)
{
 vm_map_t VAR_5;
 vm_map_entry_t VAR_6;
 VAR_5 = (VAR_1);
 VAR_6 = (VAR_3);

 FUNC_1(&VAR_5->hdr, VAR_2, VAR_6);
 if( VAR_5->disable_vmentry_reuse == VAR_0 ) {
  FUNC_0( VAR_5, VAR_6);
 } else {
  FUNC_2(VAR_5, VAR_5->first_free);





 }



 (void) VAR_4;

}
