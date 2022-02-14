
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5 = VAR_4;

 if (!VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 FUNC_1(VAR_4, VAR_0);



 if (VAR_3 && (VAR_5 & VAR_1))
  FUNC_2(150);

 return 0;
}
