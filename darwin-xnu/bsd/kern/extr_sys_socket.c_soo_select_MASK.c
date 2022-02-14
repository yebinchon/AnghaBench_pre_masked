
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
struct TYPE_6__ {int sb_sel; int sb_flags; } ;
struct TYPE_5__ {int sb_sel; int sb_flags; } ;
struct socket {int so_state; TYPE_3__ so_rcv; int so_oobmark; TYPE_2__ so_snd; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef int proc_t ;
struct TYPE_4__ {scalar_t__ fg_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct socket*,int) ;
 int FUNC_1 (int ,int *,void*) ;
 int FUNC_2 (struct socket*,int) ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct fileproc *VAR_2, int VAR_3, void *VAR_4, vfs_context_t VAR_5)
{
 struct socket *VAR_6 = (struct socket *)VAR_2->f_fglob->fg_data;
 int VAR_7 = 0;
 proc_t VAR_8;

 if (VAR_6 == ((void*)0) || VAR_6 == (struct socket *)-1)
  return (0);

 VAR_8 = FUNC_6(VAR_5);







 FUNC_2(VAR_6, 1);
 switch (VAR_3) {

 case 129:
  VAR_6->so_rcv.sb_flags |= VAR_0;
  if (FUNC_4(VAR_6)) {
   VAR_7 = 1;
   VAR_6->so_rcv.sb_flags &= ~VAR_0;
   goto done;
  }
  FUNC_1(VAR_8, &VAR_6->so_rcv.sb_sel, VAR_4);
  break;

 case 128:
  VAR_6->so_snd.sb_flags |= VAR_0;
  if (FUNC_5(VAR_6)) {
   VAR_7 = 1;
   VAR_6->so_snd.sb_flags &= ~VAR_0;
   goto done;
  }
  FUNC_1(VAR_8, &VAR_6->so_snd.sb_sel, VAR_4);
  break;

 case 0:
  VAR_6->so_rcv.sb_flags |= VAR_0;
  if (VAR_6->so_oobmark || (VAR_6->so_state & VAR_1)) {
   VAR_7 = 1;
   VAR_6->so_rcv.sb_flags &= ~VAR_0;
   goto done;
  }
  FUNC_1(VAR_8, &VAR_6->so_rcv.sb_sel, VAR_4);
  break;
 }

done:
 FUNC_3(VAR_6, 1);
 return (VAR_7);
}
