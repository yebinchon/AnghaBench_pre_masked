
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ipc_importance_task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {scalar_t__ iit_legacy_externcnt; scalar_t__ iit_externcnt; scalar_t__ iit_legacy_externdrop; scalar_t__ iit_externdrop; scalar_t__ iit_assertcnt; char* iit_procname; int iit_bsd_pid; scalar_t__ iit_live_donor; scalar_t__ iit_donor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (char*,char*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(ipc_importance_task_t VAR_2, boolean_t VAR_3)
{
 boolean_t VAR_4, VAR_5;


 VAR_4 = FUNC_3(VAR_2);
 if (VAR_3) {
  VAR_2->iit_donor = 0;
 }
 FUNC_2(FUNC_1(VAR_2) <= FUNC_0(VAR_2));
 FUNC_2(VAR_2->iit_legacy_externcnt <= VAR_2->iit_externcnt);
 FUNC_2(VAR_2->iit_legacy_externdrop <= VAR_2->iit_externdrop);
 VAR_2->iit_externcnt -= VAR_2->iit_legacy_externcnt;
 VAR_2->iit_externdrop -= VAR_2->iit_legacy_externdrop;


 if (FUNC_0(VAR_2) < VAR_2->iit_assertcnt) {
  VAR_2->iit_assertcnt -= FUNC_1(VAR_2);
 } else {
  VAR_2->iit_assertcnt = FUNC_0(VAR_2);
 }
 VAR_2->iit_legacy_externcnt = 0;
 VAR_2->iit_legacy_externdrop = 0;
 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 != VAR_4) {
  FUNC_4(VAR_2, VAR_1, VAR_0);
 }
}
