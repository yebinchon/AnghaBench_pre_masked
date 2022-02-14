
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned FUNC_0(struct clk *VAR_3)
{
 return (VAR_3->flags & VAR_2)
  ? VAR_1
  : VAR_0;
}
