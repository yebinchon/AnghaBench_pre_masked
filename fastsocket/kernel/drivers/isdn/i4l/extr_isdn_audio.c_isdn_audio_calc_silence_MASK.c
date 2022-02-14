
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int idx; int state; } ;
typedef TYPE_2__ silence_state ;
struct TYPE_5__ {int* vpar; } ;
struct TYPE_7__ {TYPE_1__ emu; TYPE_2__* silence_state; } ;
typedef TYPE_3__ modem_info ;


 char FUNC_0 (char) ;
 char* VAR_0 ;

void
FUNC_1(modem_info * VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 silence_state *VAR_5 = VAR_1->silence_state;
 int VAR_6;
 signed char VAR_7;

 if (!VAR_1->emu.vpar[1]) return;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4)
      VAR_7 = VAR_0[*VAR_2++];
   else
      VAR_7 = *VAR_2++;

  if (VAR_7 > 0) VAR_7 -= 128;
  VAR_7 = FUNC_0(VAR_7);

  if (VAR_7 > (VAR_1->emu.vpar[1] * 4)) {
   VAR_5->idx = 0;
   VAR_5->state = 1;
  } else {
   if (VAR_5->idx < 210000) VAR_5->idx++;
  }
 }
}
