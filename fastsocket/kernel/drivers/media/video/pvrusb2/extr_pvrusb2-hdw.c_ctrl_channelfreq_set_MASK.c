
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned int freqProgSlot; int* freqTable; unsigned int freqSlotRadio; unsigned int freqSlotTelevision; scalar_t__ freqSelector; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_1,int VAR_2,int VAR_3)
{
 struct pvr2_hdw *VAR_4 = VAR_1->hdw;
 unsigned int VAR_5 = VAR_4->freqProgSlot;
 if ((VAR_5 > 0) && (VAR_5 <= VAR_0)) {
  VAR_4->freqTable[VAR_5-1] = VAR_3;



  if (VAR_4->freqSelector) {
   if (VAR_4->freqSlotRadio == VAR_5) {
    VAR_4->freqSlotRadio = 0;
   }
  } else {
   if (VAR_4->freqSlotTelevision == VAR_5) {
    VAR_4->freqSlotTelevision = 0;
   }
  }
 }
 return 0;
}
