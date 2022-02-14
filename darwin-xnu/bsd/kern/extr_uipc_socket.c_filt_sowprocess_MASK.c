
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct kevent_internal_s {int dummy; } ;
struct knote {int kn_flags; scalar_t__ kn_data; scalar_t__ kn_fflags; struct kevent_internal_s kn_kevent; TYPE_2__* kn_fp; } ;
struct filt_process_s {int dummy; } ;
struct TYPE_4__ {TYPE_1__* f_fglob; } ;
struct TYPE_3__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,struct socket*) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_1, struct filt_process_s *VAR_2, struct kevent_internal_s *VAR_3)
{
#pragma unused(data)
 struct socket *VAR_4 = (struct socket *)VAR_1->kn_fp->f_fglob->fg_data;
 int VAR_5;

 FUNC_1(VAR_4, 1);
 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (VAR_5) {
  *VAR_3 = VAR_1->kn_kevent;
  if (VAR_1->kn_flags & VAR_0) {
   VAR_1->kn_fflags = 0;
   VAR_1->kn_data = 0;
  }
 }
 FUNC_2(VAR_4, 1);
 return VAR_5;
}
