
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_internal_s {int dummy; } ;
struct knote {scalar_t__ kn_fflags; scalar_t__ kn_data; int kn_flags; struct kevent_internal_s kn_kevent; } ;
struct filt_process_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_2, struct filt_process_s *VAR_3, struct kevent_internal_s *VAR_4)
{
#pragma unused(data)
 int VAR_5;

 FUNC_0(VAR_1);
 VAR_5 = (VAR_2->kn_fflags != 0);
 if (VAR_5) {
  *VAR_4 = VAR_2->kn_kevent;
  VAR_2->kn_flags |= VAR_0;
  VAR_2->kn_fflags = 0;
  VAR_2->kn_data = 0;
 }
 FUNC_1(VAR_1);
 return VAR_5;
}
