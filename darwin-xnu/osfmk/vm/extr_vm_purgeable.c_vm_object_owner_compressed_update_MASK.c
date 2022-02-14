
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* task_t ;
typedef int boolean_t ;
struct TYPE_12__ {int phys_footprint; } ;
struct TYPE_11__ {int ledger; } ;
struct TYPE_10__ {int purgable; int vo_ledger_tag; int internal; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;




 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*,int,TYPE_1__*) ;
 int FUNC_5 (int) ;
 TYPE_6__ VAR_1 ;
 int FUNC_6 (TYPE_1__*,int*,int*,int*,int*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(
 vm_object_t VAR_2,
 int VAR_3)
{
 task_t VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 boolean_t VAR_9;

 FUNC_7(VAR_2);

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 == 0 ||
     !VAR_2->internal ||
     (VAR_2->purgable == 131 &&
      ! VAR_2->vo_ledger_tag) ||
     VAR_4 == ((void*)0)) {

  return;
 }

 FUNC_6(VAR_2,
         &VAR_5,
         &VAR_6,
         &VAR_7,
         &VAR_8,
         &VAR_9);
 switch (VAR_2->purgable) {
 case 131:

  FUNC_1(VAR_2->vo_ledger_tag != VAR_0);

 case 129:
  if (VAR_3 > 0) {
   FUNC_2(VAR_4->ledger,
          VAR_8,
          FUNC_5(VAR_3));
   if (VAR_9) {
    FUNC_2(VAR_4->ledger,
           VAR_1.phys_footprint,
           FUNC_5(VAR_3));
   }
  } else {
   FUNC_3(VAR_4->ledger,
         VAR_8,
         FUNC_5(-VAR_3));
   if (VAR_9) {
    FUNC_3(VAR_4->ledger,
          VAR_1.phys_footprint,
          FUNC_5(-VAR_3));
   }
  }
  break;
 case 128:
 case 130:
  if (VAR_3 > 0) {
   FUNC_2(VAR_4->ledger,
          VAR_7,
          FUNC_5(VAR_3));
  } else {
   FUNC_3(VAR_4->ledger,
         VAR_7,
         FUNC_5(-VAR_3));
  }
  break;
 default:
  FUNC_4("vm_purgeable_compressed_update(): "
        "unexpected purgable %d for object %p\n",
        VAR_2->purgable, VAR_2);
 }
}
