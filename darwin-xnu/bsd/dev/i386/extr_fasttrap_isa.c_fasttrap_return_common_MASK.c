
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int x86_saved_state_t ;
struct TYPE_21__ {int rdx; int rax; } ;
typedef TYPE_3__ x86_saved_state64_t ;
struct TYPE_22__ {int edx; int eax; } ;
typedef TYPE_4__ x86_saved_state32_t ;
typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ pid_t ;
typedef int lck_mtx_t ;
struct TYPE_23__ {scalar_t__ ftt_pid; scalar_t__ ftt_pc; scalar_t__ ftt_type; TYPE_7__* ftt_retids; TYPE_1__* ftt_proc; struct TYPE_23__* ftt_next; } ;
typedef TYPE_5__ fasttrap_tracepoint_t ;
struct TYPE_24__ {scalar_t__ ftp_faddr; scalar_t__ ftp_fsize; int ftp_id; int ftp_triggered; TYPE_2__* ftp_prov; } ;
typedef TYPE_6__ fasttrap_probe_t ;
struct TYPE_25__ {TYPE_6__* fti_probe; struct TYPE_25__* fti_next; } ;
typedef TYPE_7__ fasttrap_id_t ;
struct TYPE_26__ {TYPE_5__* ftb_data; } ;
typedef TYPE_8__ fasttrap_bucket_t ;
typedef int dtrace_icookie_t ;
struct TYPE_20__ {scalar_t__ ftp_provider_type; } ;
struct TYPE_19__ {scalar_t__ ftpc_acount; } ;
struct TYPE_18__ {size_t cpu_id; } ;
struct TYPE_17__ {scalar_t__ cpuc_missing_tos; int cpuc_pid_lock; } ;
struct TYPE_16__ {int p_lflag; } ;
struct TYPE_15__ {TYPE_8__* fth_table; } ;


 TYPE_14__* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int) ;
 TYPE_13__* VAR_8 ;
 TYPE_12__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ,int,int,int ) ;
 int VAR_9 ;
 TYPE_11__ VAR_10 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_4__* FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(x86_saved_state_t *VAR_11, user_addr_t VAR_12, pid_t VAR_13,
    user_addr_t VAR_14)
{
 x86_saved_state64_t *VAR_15;
 x86_saved_state32_t *VAR_16;
 unsigned int VAR_17;
 int VAR_18 = 1;

 dtrace_icookie_t VAR_19;

        if (FUNC_7(VAR_11)) {
                VAR_15 = FUNC_11(VAR_11);
  VAR_16 = ((void*)0);
  VAR_17 = VAR_2;
        } else {
  VAR_15 = ((void*)0);
                VAR_16 = FUNC_10(VAR_11);
  VAR_17 = VAR_1;
        }

 fasttrap_tracepoint_t *VAR_20;
 fasttrap_bucket_t *VAR_21;
 fasttrap_id_t *VAR_22;
 lck_mtx_t *VAR_23;

 VAR_23 = &VAR_8[VAR_0->cpu_id].cpuc_pid_lock;
 FUNC_8(VAR_23);
 VAR_21 = &VAR_10.fth_table[FUNC_0(VAR_13, VAR_12)];

 for (VAR_20 = VAR_21->ftb_data; VAR_20 != ((void*)0); VAR_20 = VAR_20->ftt_next) {
  if (VAR_13 == VAR_20->ftt_pid && VAR_12 == VAR_20->ftt_pc &&
      VAR_20->ftt_proc->ftpc_acount != 0)
   break;
 }






 if (VAR_20 == ((void*)0)) {
  FUNC_9(VAR_23);
  return;
 }

 for (VAR_22 = VAR_20->ftt_retids; VAR_22 != ((void*)0); VAR_22 = VAR_22->fti_next) {
  fasttrap_probe_t *VAR_24 = VAR_22->fti_probe;





  if (VAR_20->ftt_type != VAR_5 &&
      VAR_20->ftt_type != VAR_6 &&
      VAR_14 - VAR_24->ftp_faddr < VAR_24->ftp_fsize)
   continue;

  if (VAR_24->ftp_prov->ftp_provider_type == VAR_3) {
   uint8_t VAR_25 = FUNC_2(&VAR_24->ftp_triggered, 1);
   if (VAR_25) {
    continue;
   }
  }





  else {
   VAR_18 = 0;
  }





  VAR_19 = FUNC_4();
  VAR_8[VAR_0->cpu_id].cpuc_missing_tos = VAR_12;
  if (FUNC_1(FUNC_3()->p_lflag, VAR_7)) {
   FUNC_6(VAR_9, 0 , VAR_24->ftp_id,
         1 , -1 , VAR_4);
  } else if (VAR_17 == VAR_2) {
   FUNC_6(VAR_24->ftp_id,
         VAR_12 - VAR_22->fti_probe->ftp_faddr,
         VAR_15->rax, VAR_15->rdx, 0, 0);
  } else {
   FUNC_6(VAR_24->ftp_id,
         VAR_12 - VAR_22->fti_probe->ftp_faddr,
         VAR_16->eax, VAR_16->edx, 0, 0);
  }

  VAR_8[VAR_0->cpu_id].cpuc_missing_tos = 0;
  FUNC_5(VAR_19);
 }

 FUNC_9(VAR_23);
}
