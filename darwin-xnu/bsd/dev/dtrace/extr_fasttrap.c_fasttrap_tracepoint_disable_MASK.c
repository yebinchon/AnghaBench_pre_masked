
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef scalar_t__ user_addr_t ;
typedef size_t uint_t ;
struct TYPE_17__ {int p_dtrace_count; } ;
typedef TYPE_2__ proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_18__ {scalar_t__ ftt_pc; scalar_t__ ftt_pid; scalar_t__ ftt_proc; struct TYPE_18__* ftt_next; TYPE_6__* ftt_retids; TYPE_6__* ftt_ids; } ;
typedef TYPE_3__ fasttrap_tracepoint_t ;
struct TYPE_19__ {scalar_t__ ftp_proc; } ;
typedef TYPE_4__ fasttrap_provider_t ;
struct TYPE_20__ {size_t ftp_ntps; scalar_t__ ftp_pid; void* ftp_gen; TYPE_1__* ftp_tps; TYPE_4__* ftp_prov; } ;
typedef TYPE_5__ fasttrap_probe_t ;
struct TYPE_21__ {int fti_ptype; TYPE_5__* fti_probe; struct TYPE_21__* fti_next; } ;
typedef TYPE_6__ fasttrap_id_t ;
struct TYPE_22__ {int ftb_mtx; TYPE_3__* ftb_data; } ;
typedef TYPE_7__ fasttrap_bucket_t ;
struct TYPE_16__ {TYPE_3__* fit_tp; TYPE_6__ fit_id; } ;
struct TYPE_15__ {TYPE_7__* fth_table; } ;


 int FUNC_0 (int) ;





 size_t FUNC_1 (TYPE_6__*) ;
 size_t FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 void* VAR_0 ;
 int FUNC_4 (TYPE_2__*,int *,scalar_t__) ;
 TYPE_12__ VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(proc_t *VAR_2, fasttrap_probe_t *VAR_3, uint_t VAR_4)
{
 fasttrap_bucket_t *VAR_5;
 fasttrap_provider_t *VAR_6 = VAR_3->ftp_prov;
 fasttrap_tracepoint_t **VAR_7, *VAR_8;
 fasttrap_id_t *VAR_9, **VAR_10;
 pid_t VAR_11;
 user_addr_t VAR_12;

 FUNC_0(VAR_4 < VAR_3->ftp_ntps);

 VAR_11 = VAR_3->ftp_pid;
 VAR_12 = VAR_3->ftp_tps[VAR_4].fit_tp->ftt_pc;
 VAR_9 = &VAR_3->ftp_tps[VAR_4].fit_id;

 FUNC_0(VAR_3->ftp_tps[VAR_4].fit_tp->ftt_pid == VAR_11);





 VAR_5 = &VAR_1.fth_table[FUNC_2(VAR_11, VAR_12)];
 FUNC_6(&VAR_5->ftb_mtx);
 for (VAR_8 = VAR_5->ftb_data; VAR_8 != ((void*)0); VAR_8 = VAR_8->ftt_next) {
  if (VAR_8->ftt_pid == VAR_11 && VAR_8->ftt_pc == VAR_12 &&
      VAR_8->ftt_proc == VAR_6->ftp_proc)
   break;
 }




 FUNC_0(VAR_8 != ((void*)0));

 switch (VAR_9->fti_ptype) {
  case 132:
  case 130:
  case 131:
   FUNC_0(VAR_8->ftt_ids != ((void*)0));
   VAR_10 = &VAR_8->ftt_ids;
   break;

  case 128:
  case 129:
   FUNC_0(VAR_8->ftt_retids != ((void*)0));
   VAR_10 = &VAR_8->ftt_retids;
   break;

  default:

   VAR_10 = ((void*)0);
   FUNC_0(0);
 }

 while ((*VAR_10)->fti_probe != VAR_3) {
  VAR_10 = &(*VAR_10)->fti_next;
  FUNC_0(*VAR_10 != ((void*)0));
 }

 VAR_9 = *VAR_10;
 *VAR_10 = VAR_9->fti_next;
 FUNC_3();

 FUNC_0(VAR_9->fti_probe == VAR_3);






 if (VAR_8->ftt_ids != ((void*)0) || VAR_8->ftt_retids != ((void*)0)) {





  if (VAR_8 == VAR_3->ftp_tps[VAR_4].fit_tp) {
   fasttrap_probe_t *VAR_13;
   fasttrap_tracepoint_t **VAR_14;
   uint_t VAR_15;

   if (VAR_8->ftt_ids != ((void*)0)) {
    VAR_13 = VAR_8->ftt_ids->fti_probe;

    VAR_15 = FUNC_1(VAR_8->ftt_ids);
    VAR_14 = &VAR_13->ftp_tps[VAR_15].fit_tp;
   } else {
    VAR_13 = VAR_8->ftt_retids->fti_probe;

    VAR_15 = FUNC_1(VAR_8->ftt_retids);
    VAR_14 = &VAR_13->ftp_tps[VAR_15].fit_tp;
   }

   FUNC_0(*VAR_14 != ((void*)0));
   FUNC_0(*VAR_14 != VAR_3->ftp_tps[VAR_4].fit_tp);
   FUNC_0((*VAR_14)->ftt_ids == ((void*)0));
   FUNC_0((*VAR_14)->ftt_retids == ((void*)0));

   VAR_3->ftp_tps[VAR_4].fit_tp = *VAR_14;
   *VAR_14 = VAR_8;

  }

  FUNC_7(&VAR_5->ftb_mtx);





  VAR_3->ftp_gen = VAR_0;
  return;
 }

 FUNC_7(&VAR_5->ftb_mtx);
 if (VAR_2 != ((void*)0)) {





  if (FUNC_5(VAR_2, VAR_8) != 0)
   FUNC_4(VAR_2, ((void*)0), VAR_12);






  VAR_2->p_dtrace_count--;
 }




 FUNC_6(&VAR_5->ftb_mtx);
 VAR_7 = (fasttrap_tracepoint_t **)&VAR_5->ftb_data;
 FUNC_0(*VAR_7 != ((void*)0));
 while (*VAR_7 != VAR_8) {
  VAR_7 = &(*VAR_7)->ftt_next;
  FUNC_0(*VAR_7 != ((void*)0));
 }

 *VAR_7 = VAR_8->ftt_next;
 FUNC_3();

 FUNC_7(&VAR_5->ftb_mtx);




 VAR_3->ftp_gen = VAR_0;
}
