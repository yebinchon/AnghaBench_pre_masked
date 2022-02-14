
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_internal_s {int dummy; } ;
struct knote {scalar_t__ kn_fflags; scalar_t__ kn_data; int kn_flags; struct kevent_internal_s kn_kevent; } ;
struct filt_process_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, struct filt_process_s *VAR_2, struct kevent_internal_s *VAR_3)
{
#pragma unused(data)
 int VAR_4;

 FUNC_0();
 VAR_4 = (VAR_1->kn_fflags != 0);
 if (VAR_4) {
  *VAR_3 = VAR_1->kn_kevent;
  VAR_1->kn_flags |= VAR_0;
  VAR_1->kn_fflags = 0;
  VAR_1->kn_data = 0;
 }
 FUNC_1();
 return VAR_4;
}
