
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kqrequest {scalar_t__ kqr_qos_index; int kqr_thread; scalar_t__ kqr_dsync_waiters; } ;
struct kqworkloop {int kqwl_dynamicid; struct kqrequest kqwl_request; int kqwl_owner; } ;
struct kqueue {int kq_state; } ;
struct TYPE_2__ {void** ext; } ;
struct knote {int kn_sfflags; int kn_flags; int kn_id; int kn_qos; TYPE_1__ kn_kevent; } ;
struct kevent_internal_s {scalar_t__ ident; scalar_t__ udata; int fflags; void** ext; } ;
typedef int kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kqworkloop*,struct knote*,struct kevent_internal_s*,int ,int ) ;
 int FUNC_3 (struct knote*,struct kevent_internal_s*) ;
 struct kqueue* FUNC_4 (struct knote*) ;
 int FUNC_5 (struct knote*,int) ;
 int FUNC_6 (struct kqworkloop*) ;
 int FUNC_7 (struct kqworkloop*) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct knote *VAR_15, struct kevent_internal_s *VAR_16)
{
 struct kqueue *VAR_17 = FUNC_4(VAR_15);
 struct kqworkloop *VAR_18 = (struct kqworkloop *)VAR_17;
 int VAR_19 = 0;
 kq_index_t VAR_20 = 0;

 if ((VAR_17->kq_state & VAR_10) == 0) {
  VAR_19 = VAR_3;
  goto out;
 }
 int VAR_21 = (VAR_15->kn_sfflags & VAR_11);
 switch (VAR_21) {
 case 128:
  if (VAR_15->kn_id != VAR_18->kqwl_dynamicid) {
   VAR_19 = VAR_2;
   goto out;
  }
  VAR_20 = FUNC_0(VAR_15->kn_qos);
  if (VAR_20 == VAR_14) {
   VAR_19 = VAR_4;
   goto out;
  }
  if (VAR_18->kqwl_request.kqr_qos_index) {




   VAR_19 = VAR_0;
   goto out;
  }
  break;
 case 130:
 case 129:
  if (VAR_15->kn_id == VAR_18->kqwl_dynamicid) {
   VAR_19 = VAR_2;
   goto out;
  }
  if ((VAR_15->kn_flags & VAR_7) == 0) {
   VAR_19 = VAR_2;
   goto out;
  }
  if (VAR_15->kn_sfflags & VAR_12) {
   VAR_19 = VAR_2;
   goto out;
  }
  break;
 default:
  VAR_19 = VAR_2;
  goto out;
 }

 VAR_19 = FUNC_2(VAR_18, VAR_15, VAR_16, VAR_20, VAR_9);

out:
 if (VAR_19) {

  if (VAR_19 == VAR_5 && (VAR_15->kn_sfflags & VAR_13)) {
   VAR_19 = 0;
  }
  FUNC_5(VAR_15, VAR_19);
  return 0;
 }
 if (VAR_21 == 130) {
  return FUNC_3(VAR_15, VAR_16);
 }

 if (VAR_21 == 128) {




  VAR_15->kn_flags |= VAR_6;
  return VAR_8;
 }
 return 0;
}
