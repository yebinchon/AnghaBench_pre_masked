
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
struct vm_map_store {int dummy; } ;
struct rb_head {int dummy; } ;
struct vm_map_header {struct rb_head rb_head_store; } ;
struct TYPE_3__ {struct vm_map_store store; } ;


 struct vm_map_store* FUNC_0 (int ,struct rb_head*,struct vm_map_store*) ;
 int FUNC_1 (int ,struct rb_head*,struct vm_map_store*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

void FUNC_3( struct vm_map_header *VAR_1, vm_map_entry_t VAR_2)
{
 struct rb_head *VAR_3 = &(VAR_1->rb_head_store);
 struct vm_map_store *VAR_4;
 struct vm_map_store *VAR_5 = &(VAR_2->store);

 VAR_4 = FUNC_0( VAR_0, VAR_3, VAR_5);
 if(VAR_4 == ((void*)0))
  FUNC_2("NO ENTRY TO DELETE");
 FUNC_1( VAR_0, VAR_3, VAR_5 );
}
