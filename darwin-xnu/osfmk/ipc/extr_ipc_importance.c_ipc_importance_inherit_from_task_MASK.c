
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int uint32_t ;
typedef int task_t ;
typedef TYPE_3__* ipc_importance_task_t ;
typedef TYPE_4__* ipc_importance_inherit_t ;
typedef TYPE_5__* ipc_importance_elem_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_27__ {int iie_task_refs_inherited; } ;
struct TYPE_32__ {TYPE_1__ iit_elem; } ;
struct TYPE_31__ {int iie_kmsg_refs_dropped; int iie_kmsg_refs_coalesced; int iie_kmsg_refs_inherited; int iie_kmsg_refs_added; } ;
struct TYPE_30__ {scalar_t__ iii_donating; int iii_externcnt; int iii_bits; int iii_depth; int iii_elem; int iii_kmsgs; TYPE_5__* iii_from_elem; TYPE_3__* iii_to_task; scalar_t__ iii_externdrop; scalar_t__ iii_made; } ;
struct TYPE_28__ {int iie_task_refs_coalesced; int iie_task_refs_added_inherit_from; } ;
struct TYPE_29__ {int iit_externcnt; TYPE_2__ iit_elem; int iit_externdrop; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 TYPE_7__* VAR_8 ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ,TYPE_4__*) ;

__attribute__((used)) static ipc_importance_inherit_t
FUNC_20(
 task_t VAR_9,
 task_t VAR_10)
{
 ipc_importance_task_t VAR_11 = VAR_5;
 ipc_importance_task_t VAR_12 = VAR_5;
 ipc_importance_elem_t VAR_13 = VAR_1;

 ipc_importance_inherit_t VAR_14 = VAR_3;
 ipc_importance_inherit_t VAR_15 = VAR_3;
 boolean_t VAR_16;
 uint32_t VAR_17 = 1;

 VAR_11 = FUNC_6(VAR_10, VAR_0);
 VAR_12 = FUNC_6(VAR_9, VAR_0);
 VAR_13 = (ipc_importance_elem_t)VAR_12;

 FUNC_10();

 if (VAR_5 == VAR_11 || VAR_5 == VAR_12) {
  goto out_locked;
 }





 if (!FUNC_13(VAR_11) ||
     !FUNC_13(VAR_12)) {
  goto out_locked;
 }


 if (VAR_11 == VAR_12) {
  goto out_locked;
 }

 FUNC_4(VAR_11->iit_elem.iie_task_refs_added_inherit_from);
 FUNC_4(VAR_13->iie_kmsg_refs_added);





 while (VAR_3 == VAR_14) {
  VAR_14 = FUNC_7(VAR_13, VAR_11, VAR_17);


  if (VAR_3 == VAR_14) {
   if (VAR_3 != VAR_15) {
    break;
   }


   FUNC_16();
   VAR_15 = (ipc_importance_inherit_t)
    FUNC_18(VAR_7);
   FUNC_10();
  }
 }


 VAR_16 = FUNC_14(VAR_12);

 if (VAR_3 != VAR_14) {

  FUNC_3(0 < FUNC_2(VAR_14));
  FUNC_3(0 < FUNC_0(VAR_14->iii_from_elem));


  FUNC_3(VAR_4 > FUNC_2(VAR_14));
  FUNC_9(VAR_14);


  if (0 == FUNC_1(VAR_14)) {
   FUNC_3(!VAR_14->iii_donating);
   VAR_14->iii_donating = VAR_16;
   if (VAR_16) {
    VAR_11->iit_externcnt += VAR_14->iii_externcnt;
    VAR_11->iit_externdrop += VAR_14->iii_externdrop;
   }
  } else {
   FUNC_3(VAR_16 == VAR_14->iii_donating);
  }


  VAR_14->iii_externcnt++;
 } else {

  VAR_14 = VAR_15;
  VAR_14->iii_bits = VAR_2 | 1;
  VAR_14->iii_made = 0;
  VAR_14->iii_externcnt = 1;
  VAR_14->iii_externdrop = 0;
  VAR_14->iii_depth = VAR_17;
  VAR_14->iii_to_task = VAR_11;
  VAR_14->iii_from_elem = VAR_1;
  FUNC_17(&VAR_14->iii_kmsgs);

  if (VAR_16) {
   VAR_14->iii_donating = VAR_6;
  } else {
   VAR_14->iii_donating = VAR_0;
  }





  FUNC_8(VAR_14, VAR_13);






 }

out_locked:


 if (VAR_3 != VAR_14 && VAR_16) {
  VAR_11->iit_externcnt++;

  FUNC_12(VAR_11, 1);

 }


 if (VAR_3 == VAR_14 || VAR_14 != VAR_15) {
  if (VAR_1 != VAR_13) {
   if (VAR_3 != VAR_14) {
    FUNC_4(VAR_13->iie_kmsg_refs_coalesced);
   } else {
    FUNC_4(VAR_13->iie_kmsg_refs_dropped);
   }
   FUNC_11(VAR_13);

  } else {
   FUNC_16();
  }

  if (VAR_5 != VAR_11) {
   if (VAR_3 != VAR_14) {
    FUNC_4(VAR_11->iit_elem.iie_task_refs_coalesced);
   }
   FUNC_15(VAR_11);
  }

  if (VAR_3 != VAR_15) {
   FUNC_19(VAR_7, VAR_15);
  }
 } else {

  FUNC_16();
 }

 return VAR_14;
}
