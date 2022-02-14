
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int vm_tag_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_25__ {int ledger; } ;
struct TYPE_24__ {scalar_t__ resident_page_count; scalar_t__ wired_page_count; scalar_t__ purgable; scalar_t__ vo_owner; scalar_t__ all_reusable; } ;
struct TYPE_23__ {scalar_t__ vmp_wire_count; scalar_t__ vmp_q_state; scalar_t__ vmp_gobbled; int vmp_fictitious; int vmp_private; scalar_t__ vmp_reusable; scalar_t__ vmp_offset; scalar_t__ vmp_laundry; } ;
struct TYPE_22__ {int phys_footprint; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (char*,TYPE_1__*) ;
 TYPE_10__ VAR_10 ;
 int FUNC_14 (TYPE_2__*,int*,int*,int*,int*,scalar_t__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (TYPE_1__*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_18 (TYPE_1__*,scalar_t__) ;

void
FUNC_19(
 vm_page_t VAR_16,
 vm_tag_t VAR_17,
 boolean_t VAR_18)
{
 vm_object_t VAR_19;

 VAR_19 = FUNC_7(VAR_16);



 FUNC_6(VAR_16);
 if (VAR_19) {
  FUNC_15(VAR_19);
 } else {
 }
 FUNC_0(&VAR_14, VAR_1);
 if ( !FUNC_8(VAR_16)) {

  if (VAR_16->vmp_laundry)
   FUNC_18(VAR_16, VAR_5);

  FUNC_17(VAR_16, VAR_5);

  FUNC_10(VAR_16->vmp_wire_count == 0);
  VAR_16->vmp_q_state = VAR_7;

  if (VAR_19) {

   FUNC_5(VAR_19);
   FUNC_3(VAR_19, VAR_16);
   FUNC_4(VAR_19, VAR_17);

   FUNC_10(VAR_19->resident_page_count >=
          VAR_19->wired_page_count);
   if (VAR_19->purgable == VAR_9) {
    FUNC_10(VAR_12 > 0);
    FUNC_1(-1, &VAR_12);
    FUNC_1(1, &VAR_13);
   }
   if ((VAR_19->purgable == VAR_9 ||
        VAR_19->purgable == VAR_8) &&
       VAR_19->vo_owner != VAR_4) {
    task_t VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23;
    int VAR_24;
    boolean_t VAR_25;

    VAR_20 = FUNC_2(VAR_19);
    FUNC_14(
     VAR_19,
     &VAR_21,
     &VAR_22,
     &VAR_23,
     &VAR_24,
     &VAR_25);

    FUNC_12(VAR_20->ledger,
          VAR_21,
          VAR_2);

    FUNC_11(VAR_20->ledger,
           VAR_22,
           VAR_2);
    if (VAR_25) {

     FUNC_11(VAR_20->ledger,
            VAR_10.phys_footprint,
            VAR_2);
    }
   }
   if (VAR_19->all_reusable) {





   } else if (VAR_16->vmp_reusable) {





    FUNC_16(VAR_19,
            VAR_16->vmp_offset,
            VAR_16->vmp_offset+VAR_3,
            VAR_0);
   }
  }
  FUNC_10(!VAR_16->vmp_reusable);

  if (!VAR_16->vmp_private && !VAR_16->vmp_fictitious && !VAR_16->vmp_gobbled)
   VAR_15++;
  if (VAR_16->vmp_gobbled)
   VAR_11--;
  VAR_16->vmp_gobbled = VAR_0;

  if (VAR_18 == VAR_5) {
   VAR_6;
  }
 }
 FUNC_10(!VAR_16->vmp_gobbled);
 FUNC_10(VAR_16->vmp_q_state == VAR_7);
 VAR_16->vmp_wire_count++;
 if (FUNC_9(VAR_16->vmp_wire_count == 0)) {
  FUNC_13("vm_page_wire(%p): wire_count overflow", VAR_16);
 }
 FUNC_6(VAR_16);
}
