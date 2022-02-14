
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(struct clk *VAR_5)
{
 unsigned long VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_0);

 if (!(VAR_7 & VAR_2) || (VAR_7 & VAR_1))
  return FUNC_1(&VAR_4);

 VAR_6 = FUNC_0(VAR_3);

 return FUNC_2(VAR_6, FUNC_3());
}
