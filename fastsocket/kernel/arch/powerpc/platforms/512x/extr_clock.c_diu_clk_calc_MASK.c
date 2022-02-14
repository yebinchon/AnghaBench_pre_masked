
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {unsigned long rate; } ;
struct TYPE_4__ {int scfr1; } ;
struct TYPE_3__ {unsigned long rate; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct clk *VAR_2)
{
 int VAR_3 = VAR_0->scfr1 & 0xff;
 unsigned long VAR_4;

 VAR_4 = VAR_1.rate;

 VAR_4 *= 2;
 VAR_4 /= VAR_3;

 VAR_2->rate = VAR_4;
}
