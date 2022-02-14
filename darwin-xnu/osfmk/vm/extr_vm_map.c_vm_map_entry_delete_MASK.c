
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * vm_object_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_16__ {scalar_t__ map_aligned; scalar_t__ wired_count; scalar_t__ user_wired_count; scalar_t__ is_sub_map; int permanent; scalar_t__ vme_end; scalar_t__ vme_start; } ;
struct TYPE_15__ {int size; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(
 vm_map_t VAR_1,
 vm_map_entry_t VAR_2)
{
 vm_map_offset_t VAR_3, VAR_4;
 vm_object_t VAR_5;
 vm_map_t VAR_6;

 VAR_3 = VAR_2->vme_start;
 VAR_4 = VAR_2->vme_end;
 FUNC_4(FUNC_5(VAR_3));
 FUNC_4(FUNC_5(VAR_4));
 if (VAR_2->map_aligned == VAR_0) {
  FUNC_4(FUNC_2(VAR_3, FUNC_3(VAR_1)));
  FUNC_4(FUNC_2(VAR_4, FUNC_3(VAR_1)));
 }
 FUNC_4(VAR_2->wired_count == 0);
 FUNC_4(VAR_2->user_wired_count == 0);
 FUNC_4(!VAR_2->permanent);

 if (VAR_2->is_sub_map) {
  VAR_5 = ((void*)0);
  VAR_6 = FUNC_1(VAR_2);
 } else {
  VAR_6 = ((void*)0);
  VAR_5 = FUNC_0(VAR_2);
 }

 FUNC_8(VAR_1, VAR_2);
 VAR_1->size -= VAR_4 - VAR_3;

 FUNC_7(VAR_1, VAR_2);

 FUNC_9(VAR_1);




 if (VAR_6)
  FUNC_6(VAR_6);
 else
  FUNC_10(VAR_5);

}
