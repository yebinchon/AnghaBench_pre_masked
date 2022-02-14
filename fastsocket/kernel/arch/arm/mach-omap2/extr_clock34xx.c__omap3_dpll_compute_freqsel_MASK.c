
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef int u16 ;
struct clk {TYPE_2__* dpll_data; } ;
struct TYPE_4__ {TYPE_1__* clk_ref; } ;
struct TYPE_3__ {unsigned long rate; } ;


 int FUNC_0 (char*,unsigned long) ;

__attribute__((used)) static u16 FUNC_1(struct clk *VAR_0, u8 VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3 = 0;

 VAR_2 = VAR_0->dpll_data->clk_ref->rate / VAR_1;

 FUNC_0("clock: fint is %lu\n", VAR_2);

 if (VAR_2 >= 750000 && VAR_2 <= 1000000)
  VAR_3 = 0x3;
 else if (VAR_2 > 1000000 && VAR_2 <= 1250000)
  VAR_3 = 0x4;
 else if (VAR_2 > 1250000 && VAR_2 <= 1500000)
  VAR_3 = 0x5;
 else if (VAR_2 > 1500000 && VAR_2 <= 1750000)
  VAR_3 = 0x6;
 else if (VAR_2 > 1750000 && VAR_2 <= 2100000)
  VAR_3 = 0x7;
 else if (VAR_2 > 7500000 && VAR_2 <= 10000000)
  VAR_3 = 0xB;
 else if (VAR_2 > 10000000 && VAR_2 <= 12500000)
  VAR_3 = 0xC;
 else if (VAR_2 > 12500000 && VAR_2 <= 15000000)
  VAR_3 = 0xD;
 else if (VAR_2 > 15000000 && VAR_2 <= 17500000)
  VAR_3 = 0xE;
 else if (VAR_2 > 17500000 && VAR_2 <= 21000000)
  VAR_3 = 0xF;
 else
  FUNC_0("clock: unknown freqsel setting for %d\n", VAR_1);

 return VAR_3;
}
