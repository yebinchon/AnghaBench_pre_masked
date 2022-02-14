
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* tty; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct slgt_info {int lock; TYPE_4__ port; scalar_t__ netcount; scalar_t__ dsr_chkcount; scalar_t__ ri_chkcount; scalar_t__ cts_chkcount; scalar_t__ dcd_chkcount; TYPE_1__ params; } ;
struct TYPE_7__ {TYPE_2__* termios; } ;
struct TYPE_6__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct slgt_info*) ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (struct slgt_info*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct slgt_info*) ;
 int FUNC_9 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_10(struct slgt_info *VAR_6)
{
 unsigned long VAR_7;

 FUNC_6(&VAR_6->lock,VAR_7);

 FUNC_3(VAR_6);
 FUNC_9(VAR_6);

 if (VAR_6->params.mode != VAR_5 ||
     VAR_6->netcount)
  FUNC_8(VAR_6);
 else
  FUNC_0(VAR_6);

 FUNC_4(VAR_6);

 VAR_6->dcd_chkcount = 0;
 VAR_6->cts_chkcount = 0;
 VAR_6->ri_chkcount = 0;
 VAR_6->dsr_chkcount = 0;

 FUNC_5(VAR_6, VAR_2 | VAR_1 | VAR_3 | VAR_4);
 FUNC_1(VAR_6);

 if (VAR_6->netcount ||
     (VAR_6->port.tty && VAR_6->port.tty->termios->c_cflag & VAR_0))
  FUNC_2(VAR_6);

 FUNC_7(&VAR_6->lock,VAR_7);
}
