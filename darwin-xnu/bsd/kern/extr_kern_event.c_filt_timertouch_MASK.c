
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct knote {int kn_sfflags; int kn_hookid; } ;
struct kevent_internal_s {int fflags; int data; int flags; } ;
struct filt_timer_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct knote*) ;
 int FUNC_1 (struct knote*,struct filt_timer_params*) ;
 int FUNC_2 (struct knote*) ;
 int FUNC_3 (struct knote*) ;
 int FUNC_4 (struct kevent_internal_s*,struct filt_timer_params*) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct knote *VAR_7, struct kevent_internal_s *VAR_8)
{
 struct filt_timer_params VAR_9;
 uint32_t VAR_10 = (VAR_7->kn_sfflags ^ VAR_8->fflags);
 int VAR_11;

 if (VAR_10 & VAR_4) {
  VAR_8->flags |= VAR_1;
  VAR_8->data = VAR_0;
  return 0;
 }

 if ((VAR_11 = FUNC_4(VAR_8, &VAR_9)) != 0) {
  VAR_8->flags |= VAR_1;
  VAR_8->data = VAR_11;
  return 0;
 }


 FUNC_3(VAR_7);
 FUNC_1(VAR_7, &VAR_9);
 VAR_7->kn_sfflags = VAR_8->fflags;

 if (FUNC_0(VAR_7)) {
  FUNC_5(&VAR_7->kn_hookid, VAR_5, VAR_6);
  return VAR_2 | VAR_3;
 } else {
  FUNC_2(VAR_7);
  return VAR_3;
 }
}
