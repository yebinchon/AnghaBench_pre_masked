
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_purgable_t ;
typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int phys_footprint; } ;
struct TYPE_11__ {int ledger; } ;
struct TYPE_10__ {scalar_t__ purgable; int resident_page_count; int wired_page_count; int * pager; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;
 int FUNC_5 (int) ;
 TYPE_6__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int*,int*,int*,int*,scalar_t__*) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(
 vm_object_t VAR_6,
 vm_purgable_t VAR_7)
{
 task_t VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 boolean_t VAR_16;

 FUNC_8(VAR_6);
 FUNC_1(VAR_6->purgable != VAR_1);

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 == ((void*)0) ||
     VAR_6->purgable == VAR_1)
  return;

 FUNC_7(VAR_6,
         &VAR_12,
         &VAR_13,
         &VAR_14,
         &VAR_15,
         &VAR_16);

 VAR_9 = VAR_6->resident_page_count;
 VAR_10 = VAR_6->wired_page_count;
 if (VAR_0 &&
      VAR_6->pager != ((void*)0)) {
  VAR_11 =
   FUNC_6(VAR_6->pager);
 } else {
  VAR_11 = 0;
 }

 if (VAR_7 == VAR_4 ||
     VAR_7 == VAR_2) {

  FUNC_3(VAR_8->ledger,
        VAR_12,
        FUNC_5(VAR_9 - VAR_10));

  FUNC_3(VAR_8->ledger,
        VAR_14,
        FUNC_5(VAR_11));


  FUNC_2(VAR_8->ledger,
         VAR_13,
         FUNC_5(VAR_9 - VAR_10));

  FUNC_2(VAR_8->ledger,
         VAR_15,
         FUNC_5(VAR_11));
  if (VAR_16) {

   FUNC_2(VAR_8->ledger,
          VAR_5.phys_footprint,
          FUNC_5(VAR_9
        + VAR_11
        - VAR_10));
  }

 } else if (VAR_7 == VAR_3) {


  FUNC_3(VAR_8->ledger,
        VAR_13,
        FUNC_5(VAR_9 - VAR_10));

  FUNC_3(VAR_8->ledger,
        VAR_15,
        FUNC_5(VAR_11));
  if (VAR_16) {

   FUNC_3(VAR_8->ledger,
         VAR_5.phys_footprint,
         FUNC_5(VAR_9
       + VAR_11
       - VAR_10));
  }


  FUNC_2(VAR_8->ledger,
         VAR_12,
         FUNC_5(VAR_9 - VAR_10));

  FUNC_2(VAR_8->ledger,
         VAR_14,
         FUNC_5(VAR_11));
 } else {
  FUNC_4("vm_purgeable_accounting(%p): "
        "unexpected old_state=%d\n",
        VAR_6, VAR_7);
 }

 FUNC_8(VAR_6);
}
