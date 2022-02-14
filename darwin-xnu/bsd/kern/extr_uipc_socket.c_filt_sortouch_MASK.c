
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct knote {int kn_sdata; int kn_sfflags; TYPE_2__* kn_fp; } ;
struct kevent_internal_s {int data; int fflags; } ;
struct TYPE_4__ {TYPE_1__* f_fglob; } ;
struct TYPE_3__ {scalar_t__ fg_data; } ;


 int FUNC_0 (struct knote*,struct socket*) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, struct kevent_internal_s *VAR_1)
{
 struct socket *VAR_2 = (struct socket *)VAR_0->kn_fp->f_fglob->fg_data;
 int VAR_3;

 FUNC_1(VAR_2, 1);


 VAR_0->kn_sfflags = VAR_1->fflags;
 VAR_0->kn_sdata = VAR_1->data;


 VAR_3 = FUNC_0(VAR_0, VAR_2);

 FUNC_2(VAR_2, 1);

 return VAR_3;
}
