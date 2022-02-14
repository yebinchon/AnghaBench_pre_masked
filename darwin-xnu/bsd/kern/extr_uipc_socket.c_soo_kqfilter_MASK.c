
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
struct socket {int dummy; } ;
struct knote {int kn_filter; int kn_data; void* kn_flags; int kn_filtid; TYPE_2__* kn_fp; } ;
struct kevent_internal_s {int dummy; } ;
struct fileproc {int dummy; } ;
struct TYPE_6__ {int (* f_attach ) (struct knote*,struct kevent_internal_s*) ;} ;
struct TYPE_5__ {TYPE_1__* f_fglob; } ;
struct TYPE_4__ {scalar_t__ fg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 void* VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (struct knote*) ;
 scalar_t__ FUNC_1 (int ,struct knote*,struct socket*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct knote*,struct kevent_internal_s*) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct fileproc *VAR_8, struct knote *VAR_9,
  struct kevent_internal_s *VAR_10, vfs_context_t VAR_11)
{
#pragma unused(fp)

#pragma unused(ctx)

 struct socket *VAR_12 = (struct socket *)VAR_9->kn_fp->f_fglob->fg_data;
 int VAR_13;

 FUNC_5(VAR_12, 1);
 FUNC_3(VAR_12, VAR_7);
 FUNC_4(VAR_12);
 switch (VAR_9->kn_filter) {
 case 130:
  VAR_9->kn_filtid = VAR_4;
  break;
 case 128:
  VAR_9->kn_filtid = VAR_5;
  break;
 case 129:
  VAR_9->kn_filtid = VAR_2;
  break;
 case 131:
  VAR_9->kn_filtid = VAR_3;
  break;
 default:
  FUNC_6(VAR_12, 1);
  VAR_9->kn_flags = VAR_6;
  VAR_9->kn_data = VAR_0;
  return 0;
 }





 VAR_13 = FUNC_0(VAR_9)->f_attach(VAR_9, VAR_10);

 FUNC_6(VAR_12, 1);

 return VAR_13;
}
