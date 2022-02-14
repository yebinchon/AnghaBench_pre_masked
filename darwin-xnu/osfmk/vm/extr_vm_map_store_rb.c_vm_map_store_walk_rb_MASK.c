
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct vm_map_store {int dummy; } ;
struct vm_map_header {int rb_head_store; } ;
struct TYPE_9__ {int store; } ;
struct TYPE_8__ {struct vm_map_header hdr; } ;


 struct vm_map_store* FUNC_0 (int ,int *,int *) ;
 struct vm_map_store* FUNC_1 (struct vm_map_store*,int ) ;
 struct vm_map_store* FUNC_2 (struct vm_map_store*,int ) ;
 struct vm_map_store* FUNC_3 (int *) ;
 int FUNC_4 (struct vm_map_store*) ;
 int VAR_0 ;
 int FUNC_5 (char*,TYPE_2__*,TYPE_2__*,...) ;
 int VAR_1 ;

void FUNC_6( vm_map_t VAR_2, vm_map_entry_t *VAR_3, vm_map_entry_t *VAR_4)
{
 struct vm_map_header VAR_5 = VAR_2->hdr;
 struct vm_map_store *VAR_6 = FUNC_3(&(VAR_5.rb_head_store));
 vm_map_entry_t VAR_7 = *VAR_4;

 VAR_6 = FUNC_0( VAR_1, &(VAR_5.rb_head_store), &(VAR_7->store));
 if(VAR_6 == ((void*)0))
  FUNC_5("NO SUCH ENTRY %p. Gave back %p", *VAR_4, *VAR_3);
 else
  FUNC_5("Cur: %p, L: %p, R: %p", FUNC_4(VAR_6), FUNC_4(FUNC_1(VAR_6,VAR_0)), FUNC_4(FUNC_2(VAR_6,VAR_0)));
}
