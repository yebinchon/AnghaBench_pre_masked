
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int proc_t ;
struct TYPE_4__ {scalar_t__ ftp_rcount; int ftp_marked; int ftp_mtx; scalar_t__ ftp_retired; } ;
typedef TYPE_1__ fasttrap_provider_t ;
struct TYPE_5__ {scalar_t__ ftp_id; scalar_t__ ftp_enabled; scalar_t__ ftp_ntps; int ftp_pid; TYPE_1__* ftp_prov; } ;
typedef TYPE_2__ fasttrap_probe_t ;
typedef scalar_t__ dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4)
{
#pragma unused(arg, id)
 fasttrap_probe_t *VAR_5 = VAR_4;
 fasttrap_provider_t *VAR_6 = VAR_5->ftp_prov;
 proc_t *VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_0(VAR_3 == VAR_5->ftp_id);







 if ((VAR_7 = FUNC_8(VAR_5->ftp_pid)) != VAR_1) {

  FUNC_7(VAR_7);
 }

 FUNC_4(&VAR_6->ftp_mtx);




 if (VAR_5->ftp_enabled) {
  for (VAR_8 = 0; VAR_8 < (int)VAR_5->ftp_ntps; VAR_8++) {
   FUNC_3(VAR_7, VAR_5, VAR_8);
  }
 }

 FUNC_0(VAR_6->ftp_rcount > 0);
 VAR_6->ftp_rcount--;

 if (VAR_7 != ((void*)0)) {





  if (VAR_6->ftp_retired && !VAR_6->ftp_marked)
   VAR_9 = VAR_6->ftp_marked = 1;
  FUNC_5(&VAR_6->ftp_mtx);

  FUNC_6(VAR_7);
  FUNC_9(VAR_7);
 } else {




  if (VAR_6->ftp_rcount == 0 && !VAR_6->ftp_marked)
   VAR_9 = VAR_6->ftp_marked = 1;
  FUNC_5(&VAR_6->ftp_mtx);
 }

 if (VAR_9) {
  FUNC_2(VAR_0);
 }

 if (!VAR_5->ftp_enabled)
  return;

 VAR_5->ftp_enabled = 0;


 FUNC_1();
}
