
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int lock; int name; int (* enable ) (struct clk*) ;int usecount; struct clk* parent; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (struct clk*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct clk *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->lock, VAR_2);
 if (VAR_0->usecount++ == 0) {
  if (FUNC_2((u32)VAR_0->parent))
   VAR_1 = FUNC_9(VAR_0->parent);

  if (FUNC_8(VAR_1 != 0))
   VAR_0->usecount--;
  else {

   FUNC_7(VAR_0);

   if (VAR_0->enable)
    VAR_0->enable(VAR_0);






  }
 }
 FUNC_4(&VAR_0->lock, VAR_2);
 return VAR_1;

}
