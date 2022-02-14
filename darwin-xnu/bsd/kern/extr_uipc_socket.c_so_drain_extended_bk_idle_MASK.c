
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sb_cc; } ;
struct TYPE_4__ {scalar_t__ sb_cc; } ;
struct socket {int so_flags1; TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
struct TYPE_6__ {int so_xbkidle_drained; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct socket*) ;
 TYPE_3__ VAR_1 ;

void
FUNC_2(struct socket *VAR_2)
{
 if (VAR_2 && (VAR_2->so_flags1 & VAR_0)) {



  if (VAR_2->so_rcv.sb_cc || VAR_2->so_snd.sb_cc) {
   FUNC_1(VAR_2);

   FUNC_0(&VAR_1.so_xbkidle_drained);
  }
 }
}
