
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {unsigned long rate; TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_2, unsigned long VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 VAR_6 = VAR_2->parent->rate;

 VAR_5 = (VAR_6 + VAR_3 - 1) / VAR_3;
 VAR_5--;
 if (VAR_5 < 0 || VAR_5 > 7)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 &= ~(7 << 17);
 VAR_4 |= VAR_5 << 17;
 FUNC_1(VAR_4, VAR_1);

 VAR_2->rate = VAR_6 / (VAR_5 + 1);

 return 0;
}
