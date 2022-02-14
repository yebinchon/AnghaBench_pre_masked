
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kqueue {int kq_count; } ;
struct knote {int kn_data; TYPE_1__* kn_fp; } ;
struct kevent_internal_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ f_data; } ;


 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_0, struct kevent_internal_s *VAR_1)
{
#pragma unused(kev)
 struct kqueue *VAR_2 = (struct kqueue *)VAR_0->kn_fp->f_data;
 int VAR_3;

 FUNC_0(VAR_2);
 VAR_0->kn_data = VAR_2->kq_count;
 VAR_3 = (VAR_0->kn_data > 0);

 FUNC_1(VAR_2);

 return VAR_3;
}
