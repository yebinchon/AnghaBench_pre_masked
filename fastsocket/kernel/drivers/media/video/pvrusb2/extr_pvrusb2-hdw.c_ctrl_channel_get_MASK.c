
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int freqSlotRadio; int freqSlotTelevision; scalar_t__ freqSelector; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;



__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_0,int *VAR_1)
{
 struct pvr2_hdw *VAR_2 = VAR_0->hdw;
 *VAR_1 = VAR_2->freqSelector ? VAR_2->freqSlotRadio : VAR_2->freqSlotTelevision;
 return 0;
}
