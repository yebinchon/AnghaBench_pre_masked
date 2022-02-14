
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int ucq_thd; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t*,int ,int ,char*,int *) ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int32_t VAR_10;
 int VAR_11;





 FUNC_0("nfsrv_uc_start\n");


 FUNC_2(VAR_6);
 while (VAR_5 || VAR_8 > 0)
  FUNC_4(&VAR_8, VAR_6, VAR_1, "nfsd_upcall_shutdown_wait", ((void*)0));


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_11 = FUNC_1(VAR_7, (void *)(uintptr_t)VAR_10, &VAR_4[VAR_8].ucq_thd);
  if (!VAR_11) {
   VAR_8++;
  } else {
   FUNC_5("nfsd: Could not start nfsrv_uc_thread: %d\n", VAR_11);
  }
 }
 if (VAR_8 == 0) {
  FUNC_5("nfsd: Could not start nfsd proxy up-call service. Falling back\n");
  goto out;
 }

out:




 FUNC_3(VAR_6);
}
