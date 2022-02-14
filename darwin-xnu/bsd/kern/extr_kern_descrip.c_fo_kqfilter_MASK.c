
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
struct knote {int dummy; } ;
struct kevent_internal_s {int dummy; } ;
struct fileproc {TYPE_1__* f_ops; } ;
struct TYPE_2__ {int (* fo_kqfilter ) (struct fileproc*,struct knote*,struct kevent_internal_s*,int ) ;} ;


 int FUNC_0 (struct fileproc*,struct knote*,struct kevent_internal_s*,int ) ;

int
FUNC_1(struct fileproc *VAR_0, struct knote *VAR_1,
  struct kevent_internal_s *VAR_2, vfs_context_t VAR_3)
{
        return ((*VAR_0->f_ops->fo_kqfilter)(VAR_0, VAR_1, VAR_2, VAR_3));
}
