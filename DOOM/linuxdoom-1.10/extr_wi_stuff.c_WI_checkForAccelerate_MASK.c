
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons; } ;
struct TYPE_5__ {int attackdown; int usedown; TYPE_1__ cmd; } ;
typedef TYPE_2__ player_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_0(void)
{
    int VAR_6;
    player_t *VAR_7;


    for (VAR_6=0, VAR_7 = VAR_5 ; VAR_6<VAR_2 ; VAR_6++, VAR_7++)
    {
 if (VAR_4[VAR_6])
 {
     if (VAR_7->cmd.buttons & VAR_0)
     {
  if (!VAR_7->attackdown)
      VAR_3 = 1;
  VAR_7->attackdown = 1;
     }
     else
  VAR_7->attackdown = 0;
     if (VAR_7->cmd.buttons & VAR_1)
     {
  if (!VAR_7->usedown)
      VAR_3 = 1;
  VAR_7->usedown = 1;
     }
     else
  VAR_7->usedown = 0;
 }
    }
}
