
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int dummy; } ;
struct pvr2_context {struct pvr2_channel* mc_first; struct pvr2_hdw* hdw; } ;
struct pvr2_channel {unsigned int input_mask; struct pvr2_channel* mc_next; } ;


 int FUNC_0 (struct pvr2_hdw*) ;
 unsigned int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pvr2_context *VAR_0)
{
 unsigned int VAR_1,VAR_2;
 struct pvr2_channel *VAR_3;
 struct pvr2_hdw *VAR_4 = VAR_0->hdw;
 VAR_2 = FUNC_1(VAR_4);
 VAR_1 = VAR_2;
 for (VAR_3 = VAR_0->mc_first; VAR_3; VAR_3 = VAR_3->mc_next) {
  if (!VAR_3->input_mask) continue;
  VAR_1 &= VAR_3->input_mask;
 }
 FUNC_2(VAR_4,VAR_2,VAR_1);
 FUNC_0(VAR_4);
}
