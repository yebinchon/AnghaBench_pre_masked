
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; } ;
struct psmouse {int state; int last; TYPE_1__ ps2dev; scalar_t__ out_of_sync_cnt; scalar_t__ pktcnt; } ;
typedef enum psmouse_state { ____Placeholder_psmouse_state } psmouse_state ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct psmouse *VAR_1, enum psmouse_state VAR_2)
{
 VAR_1->state = VAR_2;
 VAR_1->pktcnt = VAR_1->out_of_sync_cnt = 0;
 VAR_1->ps2dev.flags = 0;
 VAR_1->last = VAR_0;
}
