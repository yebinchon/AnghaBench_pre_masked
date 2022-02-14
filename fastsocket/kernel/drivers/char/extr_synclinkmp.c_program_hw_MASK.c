
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* tty; } ;
struct TYPE_15__ {scalar_t__ mode; } ;
struct TYPE_19__ {int ie1_value; int lock; TYPE_4__ port; scalar_t__ netcount; scalar_t__ dsr_chkcount; scalar_t__ ri_chkcount; scalar_t__ cts_chkcount; scalar_t__ dcd_chkcount; TYPE_1__ params; scalar_t__ tx_get; scalar_t__ tx_put; scalar_t__ tx_count; } ;
struct TYPE_17__ {TYPE_2__* termios; } ;
struct TYPE_16__ {int c_cflag; } ;
typedef TYPE_5__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void FUNC_10(SLMP_INFO *VAR_5)
{
 unsigned long VAR_6;

 FUNC_6(&VAR_5->lock,VAR_6);

 FUNC_4(VAR_5);
 FUNC_8(VAR_5);

 VAR_5->tx_count = VAR_5->tx_put = VAR_5->tx_get = 0;

 if (VAR_5->params.mode == VAR_4 || VAR_5->netcount)
  FUNC_2(VAR_5);
 else
  FUNC_0(VAR_5);

 FUNC_5(VAR_5);

 VAR_5->dcd_chkcount = 0;
 VAR_5->cts_chkcount = 0;
 VAR_5->ri_chkcount = 0;
 VAR_5->dsr_chkcount = 0;

 VAR_5->ie1_value |= (VAR_1|VAR_0);
 FUNC_9(VAR_5, VAR_3, VAR_5->ie1_value);

 FUNC_1(VAR_5);

 if (VAR_5->netcount || (VAR_5->port.tty && VAR_5->port.tty->termios->c_cflag & VAR_2) )
  FUNC_3(VAR_5);

 FUNC_7(&VAR_5->lock,VAR_6);
}
