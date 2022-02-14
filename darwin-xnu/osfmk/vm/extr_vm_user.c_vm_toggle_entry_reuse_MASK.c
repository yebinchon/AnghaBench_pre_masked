
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_12__ {int vme_end; } ;
struct TYPE_11__ {int disable_vmentry_reuse; TYPE_2__* first_free; int highest_entry_end; int is_nested_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(int VAR_7, int *VAR_8)
{
 vm_map_t VAR_9 = FUNC_2();

 FUNC_1(!VAR_9->is_nested_map);
 if(VAR_7 == VAR_5 && VAR_8 != ((void*)0)){
  *VAR_8 = VAR_9->disable_vmentry_reuse;
 } else if(VAR_7 == VAR_6){
  vm_map_entry_t VAR_10;

  FUNC_4(VAR_9);
  FUNC_3(VAR_9);
  VAR_9->disable_vmentry_reuse = VAR_3;
  FUNC_0(VAR_10 = FUNC_6(VAR_9));
  if (VAR_9->first_free == VAR_10) {
   VAR_9->highest_entry_end = FUNC_5(VAR_9);
  } else {
   VAR_9->highest_entry_end = VAR_9->first_free->vme_end;
  }
  FUNC_7(VAR_9);
 } else if (VAR_7 == VAR_4){
  FUNC_4(VAR_9);
  VAR_9->disable_vmentry_reuse = VAR_0;
  FUNC_7(VAR_9);
 } else
  return VAR_1;

 return VAR_2;
}
