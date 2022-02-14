
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef int kern_return_t ;
typedef TYPE_2__* ipc_importance_task_t ;
struct TYPE_12__ {int iit_assertcnt; scalar_t__ iit_legacy_externdrop; scalar_t__ iit_legacy_externcnt; scalar_t__ iit_externdrop; scalar_t__ iit_externcnt; TYPE_1__* iit_task; } ;
struct TYPE_11__ {int bsd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int ,int,int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*,int,int,int,int) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*) ;

kern_return_t
FUNC_14(ipc_importance_task_t VAR_12, uint32_t VAR_13)
{
 int VAR_14 = VAR_8;
 task_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;

 if (VAR_13 > 1) {
  return VAR_7;
 }

 FUNC_5();
 VAR_15 = VAR_12->iit_task;
 if (VAR_13 > FUNC_1(VAR_12)) {


  VAR_16 = VAR_12->iit_assertcnt;
  VAR_17 = FUNC_0(VAR_12);
  VAR_18 = FUNC_1(VAR_12);
  VAR_14 = VAR_6;
 } else {




  FUNC_4(FUNC_7(VAR_12));
  FUNC_4(FUNC_0(VAR_12) >= VAR_13);

  VAR_12->iit_legacy_externdrop += VAR_13;
  VAR_12->iit_externdrop += VAR_13;


  if (FUNC_1(VAR_12) == 0) {
   if (FUNC_0(VAR_12) != 0) {
    VAR_12->iit_externcnt -= VAR_12->iit_legacy_externcnt;
    VAR_12->iit_externdrop -= VAR_12->iit_legacy_externdrop;
   } else {
    VAR_12->iit_externcnt = 0;
    VAR_12->iit_externdrop = 0;
   }
   VAR_12->iit_legacy_externcnt = 0;
   VAR_12->iit_legacy_externdrop = 0;
  }


  if (FUNC_6(VAR_12, VAR_2, VAR_13)) {
   FUNC_8(VAR_12, VAR_2, VAR_11);
  }
  VAR_14 = VAR_8;
 }






 FUNC_9();


 if (VAR_6 == VAR_14 && VAR_9 != VAR_15) {
  FUNC_10("BUG in process %s[%d]: over-released legacy external boost assertions (%d total, %d external, %d legacy-external)\n",
         FUNC_11(VAR_15->bsd_info), FUNC_13(VAR_15),
         VAR_16, VAR_17, VAR_18);
 }

 return(VAR_14);
}
