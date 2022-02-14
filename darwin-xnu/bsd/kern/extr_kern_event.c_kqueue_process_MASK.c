
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uthread {struct kqrequest* uu_kqr_bound; } ;
struct kqueue {int kq_state; struct kqtailq* kq_queue; } ;
struct kqtailq {int dummy; } ;
struct kqrequest {int kqr_state; size_t kqr_qos_index; } ;
struct knote {int dummy; } ;
struct filt_process_s {unsigned int fp_flags; } ;
struct TYPE_6__ {TYPE_4__* kqwl; TYPE_2__* kqwq; struct kqueue* kq; } ;
typedef TYPE_1__ kqueue_t ;
typedef int kevent_callback_t ;
struct TYPE_8__ {struct kqtailq* kqwl_queue; struct kqrequest kqwl_request; } ;
struct TYPE_7__ {struct kqtailq* kqwq_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 struct knote* FUNC_0 (struct kqtailq*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 struct uthread* FUNC_3 (int ) ;
 int FUNC_4 (struct knote*,int ,void*,struct filt_process_s*) ;
 int FUNC_5 (struct kqueue*) ;
 int FUNC_6 (struct kqueue*) ;
 int FUNC_7 (TYPE_4__*,unsigned int) ;
 int FUNC_8 (TYPE_4__*,int ,unsigned int) ;
 int FUNC_9 (TYPE_2__*,struct kqrequest*,unsigned int) ;
 int FUNC_10 (TYPE_2__*,struct kqrequest*,unsigned int) ;
 int FUNC_11 (char*,struct kqueue*,int) ;

__attribute__((used)) static int
FUNC_12(struct kqueue *VAR_9,
  kevent_callback_t VAR_10,
  void *VAR_11,
  struct filt_process_s *VAR_12,
  int *VAR_13)
{
 struct uthread *VAR_14 = FUNC_3(FUNC_2());
 struct kqrequest *VAR_15 = VAR_14->uu_kqr_bound;
 struct knote *VAR_16;
 unsigned int VAR_17 = VAR_12 ? VAR_12->fp_flags : 0;
 int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 struct kqtailq *VAR_21, *VAR_22;
 kqueue_t VAR_23 = { .kq = VAR_9 };




 if (VAR_9->kq_state & VAR_7) {
  if (VAR_15 == ((void*)0) || (VAR_15->kqr_state & VAR_3)) {
   return VAR_0;
  }
  VAR_20 = FUNC_9(VAR_23.kqwq, VAR_15, VAR_17);
 } else if (VAR_9->kq_state & VAR_6) {
  if (VAR_14->uu_kqr_bound != &VAR_23.kqwl->kqwl_request) {
   return VAR_0;
  }
  VAR_20 = FUNC_7(VAR_23.kqwl, VAR_17);
 } else {
  VAR_20 = FUNC_5(VAR_9);
 }

 if (VAR_20 == -1) {

  *VAR_13 = 0;
  return 0;
 }
process_again:
 if (VAR_9->kq_state & VAR_7) {
  VAR_21 = VAR_22 = &VAR_23.kqwq->kqwq_queue[VAR_15->kqr_qos_index];
 } else if (VAR_9->kq_state & VAR_6) {
  VAR_21 = &VAR_23.kqwl->kqwl_queue[0];
  VAR_22 = &VAR_23.kqwl->kqwl_queue[VAR_4 - 1];
 } else {
  VAR_21 = VAR_22 = &VAR_9->kq_queue[VAR_8];
 }

 do {
  while (VAR_19 == 0 && (VAR_16 = FUNC_0(VAR_22)) != ((void*)0)) {
   VAR_19 = FUNC_4(VAR_16, VAR_10, VAR_11, VAR_12);
   if (VAR_19 == VAR_0) {
    VAR_19 = 0;
   } else {
    VAR_18++;
   }

  }

  if (VAR_19 == VAR_1) {

   VAR_19 = 0;
   break;
  }
 } while (VAR_22-- > VAR_21);

 *VAR_13 = VAR_18;
 if (VAR_19 || VAR_18) VAR_17 &= ~VAR_2;
 if (VAR_9->kq_state & VAR_7) {
  VAR_20 = FUNC_10(VAR_23.kqwq, VAR_15, VAR_17);
 } else if (VAR_9->kq_state & VAR_6) {
  VAR_20 = FUNC_8(VAR_23.kqwl, VAR_5, VAR_17);
 } else {
  FUNC_6(VAR_9);
  VAR_20 = 0;
 }
 if (VAR_20 == -1) {
  FUNC_1(VAR_17 & VAR_2);






  goto process_again;
 }
 return VAR_19;
}
