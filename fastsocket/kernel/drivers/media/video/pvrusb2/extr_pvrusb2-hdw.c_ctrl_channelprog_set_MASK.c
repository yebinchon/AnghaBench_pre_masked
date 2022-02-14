
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int freqProgSlot; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_1,int VAR_2,int VAR_3)
{
 struct pvr2_hdw *VAR_4 = VAR_1->hdw;
 if ((VAR_3 >= 0) && (VAR_3 <= VAR_0)) {
  VAR_4->freqProgSlot = VAR_3;
 }
 return 0;
}
