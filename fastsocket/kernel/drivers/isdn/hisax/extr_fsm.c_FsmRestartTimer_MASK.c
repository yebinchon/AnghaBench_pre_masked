
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct FsmTimer {int event; TYPE_1__ tl; void* arg; TYPE_2__* fi; } ;
struct TYPE_7__ {int (* printdebug ) (TYPE_2__*,char*,long,int,int) ;scalar_t__ debug; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*,char*,long,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void
FUNC_5(struct FsmTimer *VAR_2,
     int VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{







 if (FUNC_4(&VAR_2->tl))
  FUNC_1(&VAR_2->tl);
 FUNC_2(&VAR_2->tl);
 VAR_2->event = VAR_4;
 VAR_2->arg = VAR_5;
 VAR_2->tl.expires = VAR_1 + (VAR_3 * VAR_0) / 1000;
 FUNC_0(&VAR_2->tl);
}
