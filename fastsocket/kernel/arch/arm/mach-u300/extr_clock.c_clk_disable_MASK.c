
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {scalar_t__ usecount; int lock; int name; struct clk* parent; int (* disable ) (struct clk*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct clk*) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct clk *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->lock, VAR_1);
 if (VAR_0->usecount > 0 && !(--VAR_0->usecount)) {

  if (VAR_0->disable)
   VAR_0->disable(VAR_0);
  if (FUNC_2((u32)VAR_0->parent))
   FUNC_8(VAR_0->parent);
 }






 FUNC_4(&VAR_0->lock, VAR_1);
}
