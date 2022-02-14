
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_8__ {int* mdmreg; scalar_t__* vpar; } ;
struct TYPE_9__ {int vonline; int mcr; int rcvsched; int isdn_channel; int isdn_driver; TYPE_2__ emu; struct tty_struct* tty; scalar_t__ online; } ;
typedef TYPE_3__ modem_info ;
struct TYPE_7__ {TYPE_3__* info; } ;
struct TYPE_10__ {int* m_idx; TYPE_1__ mdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,struct tty_struct*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tty_struct*) ;

void
FUNC_5(void)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct tty_struct *VAR_10;
 modem_info *VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if ((VAR_7 = VAR_5->m_idx[VAR_8]) >= 0) {
   VAR_11 = &VAR_5->mdm.info[VAR_7];
   if (VAR_11->online) {
    VAR_9 = 0;





    if ((VAR_10 = VAR_11->tty)) {
     if (VAR_11->mcr & VAR_4) {

      if (!(VAR_11->emu.mdmreg[VAR_3] & VAR_0))
       VAR_9 = FUNC_2(VAR_11->isdn_driver, VAR_11->isdn_channel, VAR_10, 0);
      else
       VAR_9 = FUNC_2(VAR_11->isdn_driver, VAR_11->isdn_channel, VAR_10, 1);
      if (VAR_9)
       FUNC_4(VAR_10);
     } else
      VAR_9 = 1;
    } else
     VAR_9 = 1;
    if (VAR_9) {
     VAR_11->rcvsched = 0;
     VAR_6 = 1;
    } else
     VAR_11->rcvsched = 1;
   }
  }
 }
 if (!VAR_6)
  FUNC_3(VAR_2, 0);
}
