
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kqueue {int dummy; } ;
struct TYPE_4__ {int si_note; } ;
struct kqfile {TYPE_2__ kqf_sel; struct kqueue kqf_kqueue; } ;
struct knote {TYPE_1__* kn_fp; } ;
struct TYPE_3__ {scalar_t__ f_data; } ;


 int FUNC_0 (int *,struct knote*) ;
 int FUNC_1 (struct kqueue*) ;
 int FUNC_2 (struct kqueue*) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct kqfile *VAR_1 = (struct kqfile *)VAR_0->kn_fp->f_data;
 struct kqueue *VAR_2 = &VAR_1->kqf_kqueue;

 FUNC_1(VAR_2);
 FUNC_0(&VAR_1->kqf_sel.si_note, VAR_0);
 FUNC_2(VAR_2);
}
