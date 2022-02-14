
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ r7; } ;
struct frame_head {struct frame_head* fp; int lr; } ;


 int VAR_0 ;
 struct frame_head* FUNC_0 (struct frame_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs* const) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct pt_regs * const VAR_1, unsigned int VAR_2)
{

 struct frame_head *VAR_3 = (struct frame_head *)(VAR_1->r7);

 if (!FUNC_3(VAR_1)) {
 } else {

  while (VAR_2-- && VAR_3)
   VAR_3 = FUNC_0(VAR_3);
 }
}
