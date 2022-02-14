
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct tty_struct {TYPE_2__* termios; } ;
struct TYPE_14__ {scalar_t__ mode; } ;
struct TYPE_16__ {int lock; scalar_t__ netcount; scalar_t__ dsr_chkcount; scalar_t__ ri_chkcount; scalar_t__ cts_chkcount; scalar_t__ dcd_chkcount; TYPE_1__ params; scalar_t__ tx_get; scalar_t__ tx_put; scalar_t__ tx_count; } ;
struct TYPE_15__ {int c_cflag; } ;
typedef TYPE_3__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,unsigned char) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_11(MGSLPC_INFO *VAR_7, struct tty_struct *VAR_8)
{
 unsigned long VAR_9;

 FUNC_8(&VAR_7->lock,VAR_9);

 FUNC_6(VAR_7);
 FUNC_10(VAR_7);
 VAR_7->tx_count = VAR_7->tx_put = VAR_7->tx_get = 0;

 if (VAR_7->params.mode == VAR_4 || VAR_7->netcount)
  FUNC_2(VAR_7);
 else
  FUNC_0(VAR_7);

 FUNC_7(VAR_7);

 VAR_7->dcd_chkcount = 0;
 VAR_7->cts_chkcount = 0;
 VAR_7->ri_chkcount = 0;
 VAR_7->dsr_chkcount = 0;

 FUNC_3(VAR_7, VAR_0, VAR_3 | VAR_2);
 FUNC_4(VAR_7, (unsigned char) VAR_5 | VAR_6);
 FUNC_1(VAR_7);

 if (VAR_7->netcount || (VAR_8 && (VAR_8->termios->c_cflag & VAR_1)))
  FUNC_5(VAR_7);

 FUNC_9(&VAR_7->lock,VAR_9);
}
