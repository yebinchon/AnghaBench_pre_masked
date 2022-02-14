
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_14__ {int ref_count; scalar_t__ res_count; int named; struct TYPE_14__* copy; scalar_t__ vo_shadow_offset; struct TYPE_14__* shadow; int phys_contiguous; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(
 vm_object_t VAR_2,
 vm_object_t VAR_3)
{





 FUNC_5(VAR_2);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3->shadow);


 FUNC_0(!VAR_2->phys_contiguous);
 FUNC_0(!VAR_3->phys_contiguous);
 VAR_2->shadow = VAR_3->shadow;
 if (VAR_2->shadow) {
  VAR_2->vo_shadow_offset += VAR_3->vo_shadow_offset;
 } else {

  VAR_2->vo_shadow_offset = 0;
 }





 if (VAR_3->copy == VAR_2) {
  VAR_3->copy = VAR_0;
 }
 if (VAR_3->ref_count > 2 ||
     (!VAR_3->named && VAR_3->ref_count > 1)) {
  FUNC_5(VAR_3);
  VAR_3->ref_count--;





  FUNC_9(VAR_3);
 } else {
  FUNC_1(VAR_2);
  FUNC_9(VAR_2);

  FUNC_9(VAR_3);
  FUNC_3(VAR_3);
  FUNC_4(VAR_2);
  FUNC_2(VAR_2);
 }

 VAR_1++;
}
