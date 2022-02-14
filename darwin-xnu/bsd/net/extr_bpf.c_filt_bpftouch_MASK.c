
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_sfflags; int kn_sdata; scalar_t__ kn_hook; } ;
struct kevent_internal_s {int fflags; int data; } ;
struct bpf_d {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,struct bpf_d*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_1, struct kevent_internal_s *VAR_2)
{
 struct bpf_d *VAR_3 = (struct bpf_d *)VAR_1->kn_hook;
 int VAR_4;

 FUNC_1(VAR_0);


 VAR_1->kn_sdata = VAR_2->data;
 VAR_1->kn_sfflags = VAR_2->fflags;


 VAR_4 = FUNC_0(VAR_1, VAR_3);

 FUNC_2(VAR_0);

 return (VAR_4);
}
