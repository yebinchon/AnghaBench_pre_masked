
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {scalar_t__ ucq_thd; int ucq_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t*,int ,int ,char*,int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int32_t VAR_6;
 int32_t VAR_7 = VAR_5;

 FUNC_0("Entering nfsrv_uc_stop\n");


 VAR_3 = 1;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_1(VAR_2[VAR_6].ucq_lock);
  FUNC_5(&VAR_2[VAR_6]);
  FUNC_2(VAR_2[VAR_6].ucq_lock);
 }


 FUNC_1(VAR_4);
 while (VAR_5 > 0)
  FUNC_3(&VAR_5, VAR_4, VAR_0, "nfsd_upcall_shutdown_stop", ((void*)0));


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_2[VAR_6].ucq_thd != VAR_1)
   FUNC_4(VAR_2[VAR_6].ucq_thd);
  VAR_2[VAR_6].ucq_thd = VAR_1;
 }


 VAR_3 = 0;
 FUNC_2(VAR_4);
}
