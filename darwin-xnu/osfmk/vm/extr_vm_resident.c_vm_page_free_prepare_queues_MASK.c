
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_23__ {int phys_footprint; } ;
struct TYPE_22__ {int ledger; } ;
struct TYPE_21__ {scalar_t__ resident_page_count; scalar_t__ wired_page_count; scalar_t__ purgable; scalar_t__ vo_owner; int wire_tag; } ;
struct TYPE_20__ {scalar_t__ vmp_q_state; scalar_t__ vmp_wire_count; int vmp_fictitious; int vmp_private; scalar_t__ vmp_gobbled; scalar_t__ vmp_laundry; int vmp_cleaning; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ,int,int ) ;
 TYPE_9__ VAR_9 ;
 int FUNC_13 (TYPE_2__*,int*,int*,int*,int*,scalar_t__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int VAR_14 ;
 int FUNC_16 (TYPE_1__*,int ) ;

void
FUNC_17(
 vm_page_t VAR_15)
{
 vm_object_t VAR_16;

 FUNC_6(VAR_15);

 FUNC_9(VAR_15->vmp_q_state != VAR_5);
 FUNC_9(!VAR_15->vmp_cleaning);
 VAR_16 = FUNC_7(VAR_15);

 FUNC_0(&VAR_13, VAR_0);
 if (VAR_16) {
  FUNC_14(VAR_16);
 }
 if (VAR_15->vmp_laundry) {







  FUNC_16(VAR_15, VAR_3);
  FUNC_10(++VAR_8);
 }

 FUNC_15(VAR_15, VAR_3);

 if (FUNC_8(VAR_15)) {
  FUNC_9(VAR_15->vmp_wire_count > 0);

  if (VAR_16) {

   FUNC_5(VAR_16);
   FUNC_3(VAR_16, VAR_15);
   FUNC_4(VAR_16, VAR_16->wire_tag);

   FUNC_9(VAR_16->resident_page_count >=
          VAR_16->wired_page_count);

   if (VAR_16->purgable == VAR_7) {
    FUNC_1(+1, &VAR_11);
    FUNC_9(VAR_12 > 0);
    FUNC_1(-1, &VAR_12);
   }
   if ((VAR_16->purgable == VAR_7 ||
        VAR_16->purgable == VAR_6) &&
       VAR_16->vo_owner != VAR_2) {
    task_t VAR_17;
    int VAR_18;
    int VAR_19;
    int VAR_20;
    int VAR_21;
    boolean_t VAR_22;

    VAR_17 = FUNC_2(VAR_16);
    FUNC_13(
     VAR_16,
     &VAR_18,
     &VAR_19,
     &VAR_20,
     &VAR_21,
     &VAR_22);






    FUNC_12(VAR_17->ledger,
          VAR_19,
          VAR_1);
    if (VAR_22) {

     FUNC_12(VAR_17->ledger,
           VAR_9.phys_footprint,
           VAR_1);
    }

    FUNC_11(VAR_17->ledger,
           VAR_18,
           VAR_1);
   }
  }
  if (!VAR_15->vmp_private && !VAR_15->vmp_fictitious)
   VAR_14--;

  VAR_15->vmp_q_state = VAR_4;
  VAR_15->vmp_wire_count = 0;
  FUNC_9(!VAR_15->vmp_gobbled);
 } else if (VAR_15->vmp_gobbled) {
  if (!VAR_15->vmp_private && !VAR_15->vmp_fictitious)
   VAR_14--;
  VAR_10--;
 }
}
