
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* tracks; } ;
typedef TYPE_5__ cue_data_t ;
struct TYPE_12__ {int Status_CDC; } ;
struct TYPE_11__ {TYPE_2__* Tracks; } ;
struct TYPE_14__ {int* s68k_regs; TYPE_4__ scd; TYPE_3__ TOC; } ;
struct TYPE_10__ {int * F; } ;
struct TYPE_9__ {char* fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*) ;
 char* VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

void FUNC_9(void)
{
 if (!(VAR_1 & VAR_0)) return;


 if (VAR_2->TOC.Tracks[0].F != ((void*)0))
 {
  char *VAR_4 = VAR_3;
  int VAR_5 = FUNC_8(VAR_3);
  cue_data_t *VAR_6 = ((void*)0);

  if (VAR_5 > 4 && FUNC_7(VAR_4 + VAR_5 - 4, ".cue") == 0)
  {
   VAR_6 = FUNC_2(VAR_3);
   if (VAR_6 != ((void*)0))
    VAR_4 = VAR_6->tracks[1].fname;
  }

  FUNC_3("emu_HandleResume: reopen %s\n", VAR_4);
  FUNC_5(VAR_2->TOC.Tracks[0].F);
  VAR_2->TOC.Tracks[0].F = FUNC_6(VAR_4);
  FUNC_3("reopen %s\n", VAR_2->TOC.Tracks[0].F != ((void*)0) ? "ok" : "failed");

  if (VAR_6 != ((void*)0)) FUNC_1(VAR_6);
 }

 FUNC_4();

 if (!(VAR_2->s68k_regs[0x36] & 1) && (VAR_2->scd.Status_CDC & 1))
  FUNC_0();
}
