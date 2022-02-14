
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct vm_map_store {int dummy; } ;
struct vm_map_header {int rb_head_store; } ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ vme_start; scalar_t__ vme_end; } ;
struct TYPE_9__ {struct vm_map_header hdr; } ;


 int VAR_0 ;
 struct vm_map_store* FUNC_0 (struct vm_map_store*,int ) ;
 struct vm_map_store* FUNC_1 (struct vm_map_store*,int ) ;
 struct vm_map_store* FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (struct vm_map_store*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;

boolean_t FUNC_6( vm_map_t VAR_4, vm_map_offset_t VAR_5, vm_map_entry_t *VAR_6)
{
 struct vm_map_header VAR_7 = VAR_4->hdr;
 struct vm_map_store *VAR_8 = FUNC_2(&(VAR_7.rb_head_store));
 vm_map_entry_t VAR_9 = FUNC_5(VAR_4);
 vm_map_entry_t VAR_10 = VAR_2;

 while (VAR_8 != (struct vm_map_store*)((void*)0)) {
         VAR_9 = FUNC_3(VAR_8);
  if(VAR_9 == VAR_2)
   FUNC_4("no entry");
  if (VAR_5 >= VAR_9->vme_start) {
   if (VAR_5 < VAR_9->vme_end) {
    *VAR_6 = VAR_9;
    return VAR_1;
   }
   VAR_8 = FUNC_1(VAR_8, VAR_3);
   VAR_10 = VAR_9;
  } else {
   VAR_8 = FUNC_0(VAR_8, VAR_3);
  }
 }
 if( VAR_10 == VAR_2){
  VAR_10 = FUNC_5(VAR_4);
 }
 *VAR_6 = VAR_10;
 return VAR_0;
}
