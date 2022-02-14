
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe {int dummy; } ;
struct knote {int kn_sfflags; int kn_sdata; TYPE_1__* kn_fp; } ;
struct kevent_internal_s {int fflags; int data; } ;
struct TYPE_2__ {scalar_t__ f_data; } ;


 int FUNC_0 (struct pipe*) ;
 int FUNC_1 (struct pipe*) ;
 int FUNC_2 (struct knote*,struct pipe*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, struct kevent_internal_s *VAR_1)
{
 struct pipe *VAR_2 = (struct pipe *)VAR_0->kn_fp->f_data;
 int VAR_3;

 FUNC_0(VAR_2);


 VAR_0->kn_sdata = VAR_1->data;
 VAR_0->kn_sfflags = VAR_1->fflags;


 VAR_3 = FUNC_2(VAR_0, VAR_2);

 FUNC_1(VAR_2);

 return VAR_3;
}
