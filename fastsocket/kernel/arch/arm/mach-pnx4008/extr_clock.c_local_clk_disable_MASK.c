
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int (* set_rate ) (struct clk*,int ) ;scalar_t__ rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*,int ) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_1)
{
 if (!(VAR_1->flags & VAR_0) && VAR_1->rate && VAR_1->set_rate)
  VAR_1->set_rate(VAR_1, 0);
}
