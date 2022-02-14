
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_5, VAR_0);

 while (!(FUNC_0(VAR_2) & VAR_3));

 return 0;
}
