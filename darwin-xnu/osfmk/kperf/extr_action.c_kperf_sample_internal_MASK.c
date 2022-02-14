
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef unsigned int uint32_t ;
struct TYPE_13__ {unsigned int nframes; void* flags; } ;
struct TYPE_15__ {void* flags; void* nframes; } ;
struct TYPE_14__ {int kpthi_runmode; } ;
struct kperf_sample {int kpcdata; int th_dispatch; TYPE_2__ ucallstack; int meminfo; int tk_snapshot; TYPE_6__ kcallstack; int th_snapshot; int th_scheduling; TYPE_4__ th_info; } ;
struct kperf_context {scalar_t__ cur_pid; int cur_task; TYPE_1__* cur_thread; } ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_12__ {int kperf_pet_gen; } ;
struct TYPE_11__ {unsigned int userdata; void* kcallstack_depth; } ;


 int FUNC_0 (int,unsigned int,int,...) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 TYPE_10__* VAR_34 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,struct kperf_context*) ;
 int FUNC_4 (TYPE_6__*,struct kperf_context*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,struct kperf_context*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int VAR_35 ;
 int FUNC_13 () ;
 int FUNC_14 (struct kperf_context*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct kperf_context*) ;
 int FUNC_19 (int *,struct kperf_context*) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*,struct kperf_context*) ;
 int FUNC_22 (struct kperf_context*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,struct kperf_context*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,struct kperf_context*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (struct kperf_context*,unsigned int) ;
 int FUNC_29 (TYPE_2__*,struct kperf_context*) ;
 int FUNC_30 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_31(struct kperf_sample *VAR_36,
                      struct kperf_context *VAR_37,
                      unsigned VAR_38, unsigned VAR_39,
                      unsigned VAR_40, uint32_t VAR_41)
{
 int VAR_42 = 0;
 int VAR_43 = 0;
 bool VAR_44 = 0;
 uint32_t VAR_45 = VAR_40;
 bool VAR_46 = 0;




 if (VAR_38 == 0) {
  return VAR_23;
 }


 if (VAR_39 & VAR_25) {
  VAR_38 &= ~(VAR_8 | VAR_22);
 }

 if (VAR_39 & VAR_28) {
  VAR_38 &= VAR_12;
 }

 FUNC_2((VAR_39 & (VAR_32 | VAR_31))
   != (VAR_32 | VAR_31));
 if (VAR_39 & VAR_32) {
  VAR_38 &= VAR_14;
 }
 if (VAR_39 & VAR_31) {
  VAR_46 = 1;
  VAR_38 &= VAR_13;
 }

 if (!VAR_46) {
  VAR_37->cur_thread->kperf_pet_gen = VAR_35;
 }
 bool VAR_47 = (VAR_37->cur_pid == 0);

 if (VAR_40 && VAR_40 <= VAR_33) {
  VAR_36->kcallstack.nframes = VAR_34[VAR_40 - 1].kcallstack_depth;
 } else {
  VAR_36->kcallstack.nframes = VAR_4;
 }

 if (VAR_41) {
  VAR_36->ucallstack.nframes = VAR_41;
 } else {
  VAR_36->ucallstack.nframes = VAR_4;
 }

 VAR_36->kcallstack.flags = VAR_0;
 VAR_36->ucallstack.flags = VAR_0;






 if (VAR_38 & VAR_16) {
  FUNC_21(&VAR_36->th_info, VAR_37);


  if (!(VAR_39 & VAR_26)) {
   if (VAR_36->th_info.kpthi_runmode & 0x40) {
    VAR_44 = 1;
    goto log_sample;
   }
  }
 }

 if (VAR_38 & VAR_19) {
  FUNC_26(&(VAR_36->th_snapshot), VAR_37);
 }
 if (VAR_38 & VAR_18) {
  FUNC_24(&(VAR_36->th_scheduling), VAR_37);
 }
 if (VAR_38 & VAR_8) {
  if (VAR_39 & VAR_24) {
   FUNC_4(&(VAR_36->kcallstack), VAR_37);

  } else if (VAR_39 & VAR_27) {
   FUNC_3(&(VAR_36->kcallstack), VAR_37);
  } else {
   FUNC_6(&(VAR_36->kcallstack), VAR_37);
  }
 }
 if (VAR_38 & VAR_21) {
  FUNC_16(VAR_37->cur_task, &(VAR_36->tk_snapshot));
 }


 if (!VAR_47) {
  if (VAR_38 & VAR_9) {
   FUNC_12(VAR_37->cur_task, &(VAR_36->meminfo));
  }

  if (VAR_39 & VAR_29) {
   if (VAR_38 & VAR_22) {
    VAR_42 = FUNC_28(VAR_37, VAR_36->ucallstack.nframes);
   }

   if (VAR_38 & VAR_15) {
    VAR_43 = FUNC_18(VAR_37);
   }
  } else {
   if (VAR_38 & VAR_22) {
    FUNC_29(&(VAR_36->ucallstack), VAR_37);
   }

   if (VAR_38 & VAR_15) {
    FUNC_19(&(VAR_36->th_dispatch), VAR_37);
   }
  }
 }

 if (VAR_38 & VAR_11) {
  FUNC_10(&(VAR_36->kpcdata), VAR_38);
 } else if (VAR_38 & VAR_10) {
  FUNC_8(&(VAR_36->kpcdata), VAR_38);
 }

log_sample:

 if (VAR_40 && (VAR_40 <= VAR_33)) {
  VAR_45 = VAR_34[VAR_40 - 1].userdata;
 }


 if (VAR_39 & VAR_29 &&
     !(VAR_38 & ~(VAR_22 | VAR_15)))
 {
  return VAR_23;
 }




 boolean_t VAR_48 = FUNC_30(VAR_3);

 FUNC_0(VAR_6 | VAR_2, VAR_38,
          VAR_40, VAR_45, VAR_39);

 if (VAR_39 & VAR_30) {
  if (VAR_38 & VAR_12) {
   FUNC_13();
  }
 }
 if (VAR_44) {
  goto log_sample_end;
 }

 if (VAR_38 & VAR_16) {
  FUNC_20(&VAR_36->th_info);
 }
 if (VAR_38 & VAR_18) {
  FUNC_23(&(VAR_36->th_scheduling));
 }
 if (VAR_38 & VAR_19) {
  FUNC_25(&(VAR_36->th_snapshot));
 }
 if (VAR_38 & VAR_8) {
  FUNC_5(&VAR_36->kcallstack);
 }
 if (VAR_38 & VAR_17) {
  FUNC_22(VAR_37);
 }
 if (VAR_38 & VAR_21) {
  FUNC_15(&(VAR_36->tk_snapshot));
 }
 if (VAR_38 & VAR_20) {
  FUNC_14(VAR_37);
 }


 if (!VAR_47) {

  if (VAR_38 & VAR_9) {
   FUNC_11(&(VAR_36->meminfo));
  }

  if (VAR_39 & VAR_29) {
   if (VAR_42) {
    FUNC_1(VAR_5);
   }

   if (VAR_43) {
    FUNC_1(VAR_7);
   }
  } else {
   if (VAR_38 & VAR_22) {
    FUNC_27(&(VAR_36->ucallstack));
   }

   if (VAR_38 & VAR_15) {
    FUNC_17(&(VAR_36->th_dispatch));
   }
  }
 }

 if (VAR_38 & VAR_11) {
  FUNC_9(&(VAR_36->kpcdata));
 } else if (VAR_38 & VAR_10) {
  FUNC_7(&(VAR_36->kpcdata));
 }

log_sample_end:
 FUNC_0(VAR_6 | VAR_1, VAR_38, VAR_44 ? 1 : 0);


 FUNC_30(VAR_48);

 return VAR_23;
}
