
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pvr2_hdw {int dummy; } ;
struct pvr2_channel {unsigned int input_mask; TYPE_1__* mc_head; struct pvr2_channel* mc_next; struct pvr2_hdw* hdw; } ;
struct TYPE_4__ {struct pvr2_channel* mc_first; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pvr2_hdw*) ;
 unsigned int FUNC_4 (struct pvr2_hdw*) ;
 int FUNC_5 (struct pvr2_hdw*,unsigned int,unsigned int) ;

int FUNC_6(struct pvr2_channel *VAR_1,unsigned int VAR_2)
{
 unsigned int VAR_3,VAR_4;
 int VAR_5 = 0;
 struct pvr2_channel *VAR_6;
 struct pvr2_hdw *VAR_7 = VAR_1->hdw;

 VAR_4 = FUNC_4(VAR_7);
 VAR_2 &= VAR_4;
 if (VAR_2 == VAR_1->input_mask) {

  return 0;
 }

 FUNC_0(VAR_1->mc_head);
 do {
  if (!VAR_2) {
   VAR_1->input_mask = 0;
   FUNC_2(VAR_1->mc_head);
   break;
  }
  VAR_3 = VAR_4;
  for (VAR_6 = VAR_1->mc_head->mc_first; VAR_6; VAR_6 = VAR_6->mc_next) {
   if (VAR_6 == VAR_1) continue;
   if (!VAR_6->input_mask) continue;
   VAR_3 &= VAR_6->input_mask;
  }
  if (!(VAR_3 & VAR_2)) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_3 &= VAR_2;
  if ((VAR_5 = FUNC_5(VAR_7,VAR_4,VAR_3)) != 0) {


   break;
  }
  VAR_1->input_mask = VAR_2;
  FUNC_3(VAR_7);
 } while (0);
 FUNC_1(VAR_1->mc_head);
 return VAR_5;
}
