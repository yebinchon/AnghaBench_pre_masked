
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int sb_flags; TYPE_2__ sb_sel; } ;
struct socket {TYPE_1__ so_rcv; int so_pgid; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(struct socket *VAR_4)
{
 if (VAR_4->so_pgid < 0)
  FUNC_1(-VAR_4->so_pgid, VAR_2);
 else if (VAR_4->so_pgid > 0)
  FUNC_2(VAR_4->so_pgid, VAR_2);
 FUNC_3(&VAR_4->so_rcv.sb_sel);
 if (VAR_4->so_rcv.sb_flags & VAR_1) {
  FUNC_0(&VAR_4->so_rcv.sb_sel.si_note,
      (VAR_0 | VAR_3));
 }
}
