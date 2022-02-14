
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_internal_s {int dummy; } ;
struct knote {struct kevent_internal_s kn_kevent; scalar_t__ kn_hook; } ;
struct filt_process_s {int dummy; } ;
struct bpf_d {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,struct bpf_d*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_1, struct filt_process_s *VAR_2,
    struct kevent_internal_s *VAR_3)
{
#pragma unused(data)
 struct bpf_d *VAR_4 = (struct bpf_d *)VAR_1->kn_hook;
 int VAR_5;

 FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (VAR_5) {
  *VAR_3 = VAR_1->kn_kevent;
 }
 FUNC_2(VAR_0);

 return (VAR_5);
}
