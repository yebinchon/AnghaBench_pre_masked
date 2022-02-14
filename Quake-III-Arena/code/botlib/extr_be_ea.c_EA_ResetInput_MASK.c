
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int actionflags; scalar_t__ speed; int dir; scalar_t__ thinktime; } ;
typedef TYPE_1__ bot_input_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_1(int VAR_4)
{
 bot_input_t *VAR_5;
 int VAR_6 = VAR_3;

 VAR_5 = &VAR_2[VAR_4];
 VAR_5->actionflags &= ~VAR_1;

 VAR_5->thinktime = 0;
 FUNC_0(VAR_5->dir);
 VAR_5->speed = 0;
 VAR_6 = VAR_5->actionflags & VAR_0;
 VAR_5->actionflags = 0;
 if (VAR_6) VAR_5->actionflags |= VAR_1;
}
