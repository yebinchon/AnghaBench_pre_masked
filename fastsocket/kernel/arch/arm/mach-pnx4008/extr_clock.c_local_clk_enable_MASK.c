
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int (* set_rate ) (struct clk*,scalar_t__) ;scalar_t__ user_rate; int rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct clk *VAR_1)
{
 int VAR_2 = 0;

 if (!(VAR_1->flags & VAR_0) && !VAR_1->rate && VAR_1->set_rate
     && VAR_1->user_rate)
  VAR_2 = VAR_1->set_rate(VAR_1, VAR_1->user_rate);
 return VAR_2;
}
