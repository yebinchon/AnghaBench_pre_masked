
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int input_val; int input_dirty; int freqSelector; int freqDirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pvr2_hdw *VAR_3,int VAR_4)
{
 if (VAR_3->input_val != VAR_4) {
  VAR_3->input_val = VAR_4;
  VAR_3->input_dirty = !0;
 }




 if (VAR_3->input_val == VAR_1) {
  VAR_3->freqSelector = 0;
  VAR_3->freqDirty = !0;
 } else if ((VAR_3->input_val == VAR_2) ||
     (VAR_3->input_val == VAR_0)) {
  VAR_3->freqSelector = 1;
  VAR_3->freqDirty = !0;
 }
 return 0;
}
