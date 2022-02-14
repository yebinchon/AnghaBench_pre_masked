
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct socket {int dummy; } ;
struct knote {int kn_sfflags; int kn_hookid; int kn_sdata; TYPE_2__* kn_fp; } ;
struct kevent_internal_s {int fflags; int data; } ;
struct TYPE_4__ {TYPE_1__* f_fglob; } ;
struct TYPE_3__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*,struct socket*,int ) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

__attribute__((used)) static int
FUNC_3(
 struct knote *VAR_1,
 struct kevent_internal_s *VAR_2)
{
 struct socket *VAR_3 = (struct socket *)VAR_1->kn_fp->f_fglob->fg_data;
 uint32_t VAR_4;
 int VAR_5;

 FUNC_1(VAR_3, 1);


 VAR_4 = (VAR_1->kn_sfflags ^ VAR_1->kn_hookid);


 VAR_1->kn_sfflags = VAR_2->fflags;
 VAR_1->kn_sdata = VAR_2->data;
 VAR_1->kn_hookid &=
     ~(VAR_4 & VAR_0);


 VAR_5 = FUNC_0(VAR_1, VAR_3, 0);

 FUNC_2(VAR_3, 1);

 return VAR_5;
}
