
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int si_note; } ;
struct TYPE_8__ {int sb_flags; TYPE_3__ sb_sel; } ;
struct socket {TYPE_4__ so_rcv; } ;
struct knote {TYPE_2__* kn_fp; } ;
struct TYPE_6__ {TYPE_1__* f_fglob; } ;
struct TYPE_5__ {scalar_t__ fg_data; } ;


 scalar_t__ FUNC_0 (int *,struct knote*) ;
 int VAR_0 ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_1)
{
 struct socket *VAR_2 = (struct socket *)VAR_1->kn_fp->f_fglob->fg_data;

 FUNC_1(VAR_2, 1);
 if (VAR_2->so_rcv.sb_flags & VAR_0)
  if (FUNC_0(&VAR_2->so_rcv.sb_sel.si_note, VAR_1))
   VAR_2->so_rcv.sb_flags &= ~VAR_0;
 FUNC_2(VAR_2, 1);
}
