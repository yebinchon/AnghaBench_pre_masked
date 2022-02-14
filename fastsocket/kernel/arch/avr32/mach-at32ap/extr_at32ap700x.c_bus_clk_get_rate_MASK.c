
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_3__ {unsigned int (* get_rate ) (TYPE_1__*) ;} ;


 TYPE_1__* VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_1, unsigned int VAR_2)
{
 return VAR_0->get_rate(VAR_0) >> VAR_2;
}
