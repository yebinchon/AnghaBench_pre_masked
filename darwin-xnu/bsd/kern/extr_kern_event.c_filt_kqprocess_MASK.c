
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kqueue {int kq_count; } ;
struct kevent_internal_s {int dummy; } ;
struct knote {int kn_flags; int kn_data; struct kevent_internal_s kn_kevent; TYPE_1__* kn_fp; } ;
struct filt_process_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ f_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, struct filt_process_s *VAR_2, struct kevent_internal_s *VAR_3)
{
#pragma unused(data)
 struct kqueue *VAR_4 = (struct kqueue *)VAR_1->kn_fp->f_data;
 int VAR_5;

 FUNC_0(VAR_4);
 VAR_1->kn_data = VAR_4->kq_count;
 VAR_5 = (VAR_1->kn_data > 0);
 if (VAR_5) {
  *VAR_3 = VAR_1->kn_kevent;
  if (VAR_1->kn_flags & VAR_0)
   VAR_1->kn_data = 0;
 }
 FUNC_1(VAR_4);

 return VAR_5;
}
