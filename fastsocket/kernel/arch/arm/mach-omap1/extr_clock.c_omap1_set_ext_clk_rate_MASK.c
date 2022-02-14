
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; int enable_reg; } ;
typedef int __u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct clk * VAR_0, unsigned long VAR_1)
{
 unsigned VAR_2;
 __u16 VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_0->rate = 96000000 / VAR_2;
 if (VAR_2 > 8)
  VAR_3 = ((VAR_2 - 8) / 2 + 6) << 2;
 else
  VAR_3 = (VAR_2 - 2) << 2;

 VAR_3 |= FUNC_0(VAR_0->enable_reg) & ~0xfd;
 FUNC_1(VAR_3, VAR_0->enable_reg);

 return 0;
}
