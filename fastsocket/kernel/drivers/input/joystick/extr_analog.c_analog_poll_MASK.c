
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {int dummy; } ;
struct analog_port {int buttons; int initial; int axes; TYPE_1__* analog; scalar_t__ axtime; int reads; int bads; int gameport; scalar_t__ cooked; } ;
struct TYPE_2__ {int mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct analog_port*,char,char) ;
 int* VAR_3 ;
 scalar_t__ FUNC_1 (struct analog_port*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,size_t) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 struct analog_port* FUNC_4 (struct gameport*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_4)
{
 struct analog_port *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 char VAR_7 = !!(VAR_5->analog[0].mask & VAR_2);
 char VAR_8 = !!(VAR_5->analog[0].mask & VAR_0);

 if (VAR_5->cooked) {
  VAR_5->bads -= FUNC_3(VAR_5->gameport, VAR_5->axes, &VAR_5->buttons);
  if (VAR_8)
   VAR_5->buttons = VAR_5->buttons ? (1 << VAR_3[VAR_5->buttons]) : 0;
  VAR_5->reads++;
 } else {
  if (!VAR_5->axtime--) {
   VAR_5->bads -= FUNC_1(VAR_5);
   VAR_5->bads -= FUNC_0(VAR_5, VAR_7, VAR_8);
   VAR_5->reads++;
   VAR_5->axtime = VAR_1 - 1;
  } else {
   if (!VAR_7)
    FUNC_0(VAR_5, VAR_7, VAR_8);
  }
 }

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
  if (VAR_5->analog[VAR_6].mask)
   FUNC_2(VAR_5->analog + VAR_6, VAR_5->axes, VAR_5->initial, VAR_5->buttons);
}
