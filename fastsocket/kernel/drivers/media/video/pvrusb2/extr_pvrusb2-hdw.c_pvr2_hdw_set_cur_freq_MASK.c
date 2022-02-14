
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ input_val; int freqSelector; int freqDirty; unsigned long freqValRadio; unsigned long freqValTelevision; scalar_t__ freqSlotTelevision; scalar_t__ freqSlotRadio; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pvr2_hdw *VAR_1,unsigned long VAR_2)
{
 if (VAR_1->input_val == VAR_0) {
  if (VAR_1->freqSelector) {

   VAR_1->freqSelector = 0;
   VAR_1->freqDirty = !0;
  }
  if (VAR_1->freqValRadio != VAR_2) {
   VAR_1->freqValRadio = VAR_2;
   VAR_1->freqSlotRadio = 0;
   VAR_1->freqDirty = !0;
  }
 } else {
  if (!(VAR_1->freqSelector)) {

   VAR_1->freqSelector = 1;
   VAR_1->freqDirty = !0;
  }
  if (VAR_1->freqValTelevision != VAR_2) {
   VAR_1->freqValTelevision = VAR_2;
   VAR_1->freqSlotTelevision = 0;
   VAR_1->freqDirty = !0;
  }
 }
}
