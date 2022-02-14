
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int actionflags; } ;
typedef TYPE_1__ bot_input_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(int VAR_3)
{
 bot_input_t *VAR_4;

 VAR_4 = &VAR_2[VAR_3];

 if (VAR_4->actionflags & VAR_1)
 {
  VAR_4->actionflags &= ~VAR_0;
 }
 else
 {
  VAR_4->actionflags |= VAR_0;
 }
}
