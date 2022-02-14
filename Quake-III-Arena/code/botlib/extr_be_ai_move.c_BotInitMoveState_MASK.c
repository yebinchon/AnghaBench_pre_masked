
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int moveflags; int viewangles; int presencetype; int thinktime; int client; int entitynum; int viewoffset; int velocity; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_6__ {int or_moveflags; int viewangles; int presencetype; int thinktime; int client; int entitynum; int viewoffset; int velocity; int origin; } ;
typedef TYPE_2__ bot_initmove_t ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(int VAR_5, bot_initmove_t *VAR_6)
{
 bot_movestate_t *VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7) return;
 FUNC_1(VAR_6->origin, VAR_7->origin);
 FUNC_1(VAR_6->velocity, VAR_7->velocity);
 FUNC_1(VAR_6->viewoffset, VAR_7->viewoffset);
 VAR_7->entitynum = VAR_6->entitynum;
 VAR_7->client = VAR_6->client;
 VAR_7->thinktime = VAR_6->thinktime;
 VAR_7->presencetype = VAR_6->presencetype;
 FUNC_1(VAR_6->viewangles, VAR_7->viewangles);

 VAR_7->moveflags &= ~VAR_1;
 if (VAR_6->or_moveflags & VAR_1) VAR_7->moveflags |= VAR_1;
 VAR_7->moveflags &= ~VAR_2;
 if (VAR_6->or_moveflags & VAR_2) VAR_7->moveflags |= VAR_2;
 VAR_7->moveflags &= ~VAR_4;
 if (VAR_6->or_moveflags & VAR_4) VAR_7->moveflags |= VAR_4;
 VAR_7->moveflags &= ~VAR_3;
 if (VAR_6->or_moveflags & VAR_3) VAR_7->moveflags |= VAR_3;
 VAR_7->moveflags &= ~VAR_0;
 if (VAR_6->or_moveflags & VAR_0) VAR_7->moveflags |= VAR_0;
}
