
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int p_csflags; int * p_dtrace_ptss_pages; } ;
typedef TYPE_3__ proc_t ;
struct TYPE_22__ {int ftp_enabled; scalar_t__ ftp_id; scalar_t__ ftp_ntps; int ftp_pid; TYPE_1__* ftp_prov; } ;
typedef TYPE_4__ fasttrap_probe_t ;
struct TYPE_20__ {int * dcr_cred; } ;
struct TYPE_23__ {TYPE_2__ dts_cred; } ;
typedef TYPE_5__ dtrace_state_t ;
typedef scalar_t__ dtrace_id_t ;
struct TYPE_19__ {scalar_t__ ftp_retired; int ftp_mtx; int ftp_rcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_5__* FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_3__* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_16(void *VAR_7, dtrace_id_t VAR_8, void *VAR_9)
{
#pragma unused(arg, id)
 fasttrap_probe_t *VAR_10 = VAR_9;
 proc_t *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_10 != ((void*)0));
 FUNC_0(!VAR_10->ftp_enabled);
 FUNC_0(VAR_8 == VAR_10->ftp_id);
 FUNC_9(&VAR_10->ftp_prov->ftp_mtx);
 VAR_10->ftp_prov->ftp_rcount++;
 FUNC_10(&VAR_10->ftp_prov->ftp_mtx);






 if (VAR_10->ftp_prov->ftp_retired)
     return(0);






 if ((VAR_11 = FUNC_14(VAR_10->ftp_pid)) == VAR_6) {





     return(0);
 }

 if ((VAR_11->p_csflags & (VAR_2|VAR_1))) {
  FUNC_13(VAR_11);
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   dtrace_state_t *VAR_14 = FUNC_4(VAR_12);
   if (VAR_14 == ((void*)0))
    continue;
   if (VAR_14->dts_cred.dcr_cred == ((void*)0))
    continue;
   FUNC_11(VAR_14->dts_cred.dcr_cred, VAR_11);
  }
  VAR_13 = FUNC_2(VAR_11);
  FUNC_12(VAR_11);
  if (VAR_13 == 0) {
   FUNC_15(VAR_11);
   FUNC_1(VAR_0, "process doesn't allow invalid code pages, failing to install fasttrap probe\n");
   return (0);
  }
 }
 if (VAR_11->p_dtrace_ptss_pages == ((void*)0)) {
  FUNC_3(VAR_11);
 }


 FUNC_13(VAR_11);






 FUNC_6();





 for (VAR_12 = 0; VAR_12 < (int)VAR_10->ftp_ntps; VAR_12++) {
  if ((VAR_13 = FUNC_8(VAR_11, VAR_10, VAR_12)) != 0) {





   if (VAR_13 == VAR_4)
    VAR_12--;
   else
    FUNC_0(VAR_13 == VAR_5);





   while (VAR_12 >= 0) {
    FUNC_7(VAR_11, VAR_10, VAR_12);
    VAR_12--;
   }

   FUNC_12(VAR_11);
   FUNC_15(VAR_11);





   FUNC_5();
   return(0);
  }
 }

 FUNC_12(VAR_11);
 FUNC_15(VAR_11);

 VAR_10->ftp_enabled = 1;
 return (0);
}
