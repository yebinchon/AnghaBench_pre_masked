
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int32_t ;
struct TYPE_3__ {int sb_lowat; scalar_t__ sb_hiwat; int sb_sel; int sb_flags; void* sb_idealsize; } ;
struct socket {TYPE_1__ so_snd; TYPE_1__ so_rcv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct socket *VAR_3, u_int32_t VAR_4, u_int32_t VAR_5)
{
 if (FUNC_1(&VAR_3->so_snd, VAR_4) == 0)
  goto bad;
 else
  VAR_3->so_snd.sb_idealsize = VAR_4;

 if (FUNC_1(&VAR_3->so_rcv, VAR_5) == 0)
  goto bad2;
 else
  VAR_3->so_rcv.sb_idealsize = VAR_5;

 if (VAR_3->so_rcv.sb_lowat == 0)
  VAR_3->so_rcv.sb_lowat = 1;
 if (VAR_3->so_snd.sb_lowat == 0)
  VAR_3->so_snd.sb_lowat = VAR_1;
 if (VAR_3->so_snd.sb_lowat > VAR_3->so_snd.sb_hiwat)
  VAR_3->so_snd.sb_lowat = VAR_3->so_snd.sb_hiwat;
 return (0);
bad2:
 VAR_3->so_snd.sb_flags &= ~VAR_2;
 FUNC_2(&VAR_3->so_snd.sb_sel);
 FUNC_0(&VAR_3->so_snd);
bad:
 return (VAR_0);
}
