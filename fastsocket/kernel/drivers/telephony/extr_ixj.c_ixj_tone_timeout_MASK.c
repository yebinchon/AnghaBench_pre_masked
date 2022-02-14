
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int tone_state; size_t tone_cadence_state; TYPE_2__* cadence_t; } ;
struct TYPE_14__ {int gain1; int freq1; scalar_t__ gain0; int freq0; int tone_index; } ;
struct TYPE_13__ {size_t elements_used; int termination; TYPE_1__* ce; } ;
struct TYPE_12__ {int index; int tone_off_time; int tone_on_time; int gain1; int freq1; scalar_t__ gain0; int freq0; } ;
typedef TYPE_3__ IXJ_TONE ;
typedef TYPE_4__ IXJ ;





 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(IXJ *VAR_0)
{
 IXJ_TONE VAR_1;

 VAR_0->tone_state++;
 if (VAR_0->tone_state == 3) {
  VAR_0->tone_state = 0;
  if (VAR_0->cadence_t) {
   VAR_0->tone_cadence_state++;
   if (VAR_0->tone_cadence_state >= VAR_0->cadence_t->elements_used) {
    switch (VAR_0->cadence_t->termination) {
    case 130:
     FUNC_0(VAR_0);
     break;
    case 128:
     VAR_0->tone_cadence_state--;
     FUNC_2(VAR_0, VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].index);
     break;
    case 129:
     VAR_0->tone_cadence_state = 0;
     if (VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].freq0) {
      VAR_1.tone_index = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].index;
      VAR_1.freq0 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].freq0;
      VAR_1.gain0 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].gain0;
      VAR_1.freq1 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].freq1;
      VAR_1.gain1 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].gain1;
      FUNC_1(VAR_0, &VAR_1);
     }
     FUNC_4(VAR_0->cadence_t->ce[0].tone_on_time, VAR_0);
     FUNC_3(VAR_0->cadence_t->ce[0].tone_off_time, VAR_0);
     FUNC_2(VAR_0, VAR_0->cadence_t->ce[0].index);
     break;
    }
   } else {
    if (VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].gain0) {
     VAR_1.tone_index = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].index;
     VAR_1.freq0 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].freq0;
     VAR_1.gain0 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].gain0;
     VAR_1.freq1 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].freq1;
     VAR_1.gain1 = VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].gain1;
     FUNC_1(VAR_0, &VAR_1);
    }
    FUNC_4(VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].tone_on_time, VAR_0);
    FUNC_3(VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].tone_off_time, VAR_0);
    FUNC_2(VAR_0, VAR_0->cadence_t->ce[VAR_0->tone_cadence_state].index);
   }
  }
 }
}
