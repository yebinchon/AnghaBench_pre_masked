
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef int uint64_t ;
typedef TYPE_2__* thread_t ;
struct kevent_internal_s {int* ext; int flags; scalar_t__ fflags; void* data; } ;
struct TYPE_5__ {int p_mqueue; } ;
struct knote {int kn_sfflags; scalar_t__* kn_ext; struct kevent_internal_s kn_kevent; TYPE_1__ kn_ptr; } ;
struct filt_process_s {int fp_data_out; scalar_t__ fp_data_resid; int fp_flags; } ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef int mach_msg_option_t ;
typedef int ipc_object_t ;
typedef int ipc_mqueue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int ith_msize; int ith_option; scalar_t__ ith_state; scalar_t__ turnstile; scalar_t__ ith_kmsg; scalar_t__ ith_qos_override; scalar_t__ ith_qos; void* ith_receiver_name; struct knote* ith_knote; int * ith_continuation; scalar_t__ ith_rsize; scalar_t__ ith_msg_addr; int ith_object; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,scalar_t__,int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(
 struct knote *VAR_23,
 struct filt_process_s *VAR_24,
 struct kevent_internal_s *VAR_25)
{
 ipc_mqueue_t VAR_26 = VAR_23->kn_ptr.p_mqueue;
 ipc_object_t VAR_27 = FUNC_7(VAR_26);
 thread_t VAR_28 = FUNC_1();
 boolean_t VAR_29 = VAR_1;

 wait_result_t VAR_30;
 mach_msg_option_t VAR_31;
 mach_vm_address_t VAR_32;
 mach_msg_size_t VAR_33;


 *VAR_25 = VAR_23->kn_kevent;
 VAR_25->ext[3] = 0;


 if (VAR_25->flags & VAR_0) {
  return VAR_2 | VAR_3;
 }






 VAR_31 = VAR_23->kn_sfflags & (VAR_11|VAR_9|VAR_10|
                            VAR_16|VAR_17);

 if (VAR_31 & VAR_11) {
  VAR_32 = (mach_vm_address_t) VAR_23->kn_ext[0];
  VAR_33 = (mach_msg_size_t) VAR_23->kn_ext[1];





  if (VAR_33 == 0 && VAR_24 != ((void*)0)) {
   VAR_29 = VAR_21;

   VAR_32 = (mach_vm_address_t)VAR_24->fp_data_out;
   VAR_33 = (mach_msg_size_t)VAR_24->fp_data_resid;
   VAR_31 |= (VAR_9 | VAR_10);
   if (VAR_24->fp_flags & VAR_5)
    VAR_31 |= VAR_12;
  }
 } else {

  VAR_31 = VAR_9;
  VAR_32 = 0;
  VAR_33 = 0;
 }

 FUNC_2(VAR_26);


 FUNC_3(VAR_27);
 VAR_28->ith_object = VAR_27;
 VAR_28->ith_msg_addr = VAR_32;
 VAR_28->ith_rsize = VAR_33;
 VAR_28->ith_msize = 0;
 VAR_28->ith_option = VAR_31;
 VAR_28->ith_receiver_name = VAR_7;
 VAR_28->ith_continuation = ((void*)0);
 VAR_31 |= VAR_14;
 VAR_28->ith_state = VAR_8;
 VAR_28->ith_knote = VAR_23;

 VAR_30 = FUNC_5(
   VAR_26,
   VAR_31,
   VAR_33,
   0,
   VAR_18,
   VAR_28);






 if (VAR_30 == VAR_20 || VAR_28->ith_state == VAR_13) {
  FUNC_0(VAR_28->turnstile != VAR_22);
  FUNC_4(VAR_27);
  return 0;
 }

 FUNC_0(VAR_30 == VAR_19);
 FUNC_0(VAR_28->ith_state != VAR_8);






 if ((VAR_31 & VAR_11) != VAR_11) {
  FUNC_0(VAR_28->ith_state == VAR_15);
  FUNC_0(VAR_28->ith_kmsg == VAR_4);
  VAR_25->data = VAR_28->ith_receiver_name;
  FUNC_4(VAR_27);
  return VAR_2;
 }





 VAR_25->fflags = FUNC_6(&VAR_33);
 if (VAR_25->fflags == VAR_15) {
  VAR_25->ext[1] = VAR_28->ith_msize;
  if (VAR_31 & VAR_10)
   VAR_25->data = VAR_28->ith_receiver_name;
  else
   VAR_25->data = VAR_7;
 } else {
  VAR_25->ext[1] = VAR_33;
  VAR_25->data = VAR_7;
 }






 if (VAR_29) {
  FUNC_0(VAR_24->fp_data_resid >= VAR_33);
  VAR_24->fp_data_resid -= VAR_33;
  if ((VAR_24->fp_flags & VAR_5) == 0) {
   VAR_25->ext[0] = VAR_24->fp_data_out;
   VAR_24->fp_data_out += VAR_33;
  } else {
   FUNC_0(VAR_31 & VAR_12);
   VAR_25->ext[0] = VAR_24->fp_data_out +
          VAR_24->fp_data_resid;
  }
 }
 if (VAR_25->fflags == VAR_6) {
  VAR_25->ext[2] = ((uint64_t)VAR_28->ith_qos << 32) |
    (uint64_t)VAR_28->ith_qos_override;
 }

 return VAR_2;
}
