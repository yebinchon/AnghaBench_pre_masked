
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
typedef TYPE_2__* vm_map_copy_t ;
struct vm_map_store {int dummy; } ;
struct rb_head {int dummy; } ;
struct vm_map_header {struct rb_head rb_head_store; } ;
struct TYPE_8__ {struct vm_map_header cpy_hdr; } ;
struct TYPE_7__ {struct TYPE_7__* vme_next; struct vm_map_store store; } ;


 int FUNC_0 (int ,struct rb_head*,struct vm_map_store*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

void
FUNC_2( vm_map_copy_t VAR_1, vm_map_entry_t VAR_2, int VAR_3 )
{
 struct vm_map_header *VAR_4 = &(VAR_1->cpy_hdr);
 struct rb_head *VAR_5 = &(VAR_4->rb_head_store);
 struct vm_map_store *VAR_6;
 int VAR_7=0;

 while (VAR_2 != FUNC_1(VAR_1) && VAR_3 > 0) {
  VAR_6 = &(VAR_2->store);
  FUNC_0( VAR_0, VAR_5, VAR_6 );
  VAR_2 = VAR_2->vme_next;
  VAR_7++;
  VAR_3--;
 }
}
