
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pluscount; scalar_t__ lastplus; } ;
struct TYPE_8__ {scalar_t__ online; TYPE_2__ emu; } ;
typedef TYPE_3__ modem_info ;
struct TYPE_6__ {TYPE_3__* info; } ;
struct TYPE_9__ {int* m_idx; TYPE_1__ mdm; int * usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(void)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (FUNC_0(VAR_4->usage[VAR_7]))
   if ((VAR_8 = VAR_4->m_idx[VAR_7]) >= 0) {
    modem_info *VAR_9 = &VAR_4->mdm.info[VAR_8];
    if (VAR_9->online) {
     VAR_6 = 1;
     if ((VAR_9->emu.pluscount == 3) &&
         FUNC_3(VAR_5 , VAR_9->emu.lastplus + VAR_2)) {
      VAR_9->emu.pluscount = 0;
      VAR_9->online = 0;
      FUNC_2(VAR_3, VAR_9);
     }
    }
   }
 FUNC_1(VAR_1, VAR_6);
}
