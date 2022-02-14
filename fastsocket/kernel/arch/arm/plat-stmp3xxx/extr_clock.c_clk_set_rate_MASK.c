
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int flags; unsigned long rate; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_rate ) (struct clk*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct clk *VAR_3, unsigned long VAR_4)
{
 int VAR_5 = -VAR_0;

 if (FUNC_4(!FUNC_0(VAR_3)))
  goto out;

 if (VAR_3->flags & VAR_1 || !VAR_3->ops->set_rate)
  goto out;

 else if (!FUNC_1(VAR_3->rate, VAR_4)) {
  VAR_5 = VAR_3->ops->set_rate(VAR_3, VAR_4);
  if (VAR_5 < 0)
   goto out;
  VAR_3->rate = VAR_4;
  if (VAR_3->flags & VAR_2)
   FUNC_2(VAR_3);
 } else
  VAR_5 = 0;

out:
 return VAR_5;
}
