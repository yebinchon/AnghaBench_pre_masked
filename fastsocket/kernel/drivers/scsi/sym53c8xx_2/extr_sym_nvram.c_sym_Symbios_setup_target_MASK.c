
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sym_tcb {int usr_period; int usr_width; int usrflags; scalar_t__ usrtags; } ;
struct TYPE_5__ {TYPE_1__* target; } ;
struct TYPE_4__ {int flags; int sync_period; int bus_width; } ;
typedef TYPE_1__ Symbios_target ;
typedef TYPE_2__ Symbios_nvram ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct sym_tcb *VAR_7, int VAR_8, Symbios_nvram *VAR_9)
{
 Symbios_target *VAR_10 = &VAR_9->target[VAR_8];

 if (!(VAR_10->flags & VAR_1))
  VAR_7->usrtags = 0;
 if (!(VAR_10->flags & VAR_0))
  VAR_7->usrflags &= ~VAR_4;
 if (!(VAR_10->flags & VAR_2))
  VAR_7->usrflags |= VAR_5;
 if (!(VAR_10->flags & VAR_3))
  VAR_7->usrflags |= VAR_6;
 VAR_7->usr_period = (VAR_10->sync_period + 3) / 4;
 VAR_7->usr_width = (VAR_10->bus_width == 0x8) ? 0 : 1;
}
