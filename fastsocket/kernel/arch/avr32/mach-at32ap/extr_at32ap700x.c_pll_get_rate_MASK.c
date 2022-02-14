
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long (* get_rate ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_3) + 1;
 VAR_5 = FUNC_0(VAR_1, VAR_3) + 1;

 VAR_6 = VAR_2->parent->get_rate(VAR_2->parent);
 VAR_6 = (VAR_6 + VAR_4 / 2) / VAR_4;
 VAR_6 *= VAR_5;

 return VAR_6;
}
