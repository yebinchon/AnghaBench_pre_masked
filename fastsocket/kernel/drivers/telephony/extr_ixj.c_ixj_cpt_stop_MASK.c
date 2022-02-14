
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {struct TYPE_15__* ce; } ;
struct TYPE_13__ {int low; } ;
struct TYPE_12__ {scalar_t__ ringback; scalar_t__ busytone; scalar_t__ dialtone; } ;
struct TYPE_14__ {int play_mode; int rec_mode; TYPE_2__ dsp; TYPE_4__* cadence_t; scalar_t__ tone_cadence_state; scalar_t__ tone_state; TYPE_1__ flags; } ;
typedef TYPE_3__ IXJ ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,TYPE_3__*) ;
 int FUNC_5 (int,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(IXJ *VAR_0)
{
 if(VAR_0->tone_state || VAR_0->tone_cadence_state)
 {
  VAR_0->flags.dialtone = 0;
  VAR_0->flags.busytone = 0;
  VAR_0->flags.ringback = 0;
  FUNC_5(0x0001, VAR_0);
  FUNC_4(0x0000, VAR_0);
  FUNC_2(VAR_0, 0);
  VAR_0->tone_state = VAR_0->tone_cadence_state = 0;
  if (VAR_0->cadence_t) {
   FUNC_6(VAR_0->cadence_t->ce);
   FUNC_6(VAR_0->cadence_t);
   VAR_0->cadence_t = ((void*)0);
  }
 }
 if (VAR_0->play_mode == -1 && VAR_0->rec_mode == -1)
  FUNC_0(VAR_0);
 if (VAR_0->play_mode != -1 && VAR_0->dsp.low == 0x20)
  FUNC_1(VAR_0);
 if (VAR_0->rec_mode != -1 && VAR_0->dsp.low == 0x20)
  FUNC_3(VAR_0);
}
