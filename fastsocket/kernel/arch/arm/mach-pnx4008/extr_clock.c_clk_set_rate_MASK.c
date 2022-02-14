
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int (* round_rate ) (struct clk*,unsigned long) ;int user_rate; scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct clk*,unsigned long) ;
 int FUNC_3 (struct clk*,unsigned long) ;

int FUNC_4(struct clk *VAR_3, unsigned long VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_3->flags & VAR_1)
  goto out;

 FUNC_0();
 if ((VAR_3->flags & VAR_2) && VAR_3->parent) {

  VAR_3->user_rate = VAR_3->round_rate(VAR_3, VAR_4);


 } else {
  VAR_5 = FUNC_2(VAR_3, VAR_4);
 }
 VAR_5 = 0;
 FUNC_1();

out:
 return VAR_5;
}
