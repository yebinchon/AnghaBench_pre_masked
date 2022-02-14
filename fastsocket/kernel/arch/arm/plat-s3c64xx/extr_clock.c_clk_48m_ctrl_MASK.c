
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;


 FUNC_3(VAR_4);

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_5, VAR_0);
 FUNC_2(VAR_4);

 return 0;
}
