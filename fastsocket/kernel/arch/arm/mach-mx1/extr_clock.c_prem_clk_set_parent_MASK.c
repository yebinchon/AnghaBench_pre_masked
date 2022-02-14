
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,int ,struct clk*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_3, struct clk *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = FUNC_1(VAR_0);

 VAR_5 = FUNC_3(VAR_2, FUNC_0(VAR_2),
    VAR_4);

 switch (VAR_5) {
 case 0:
  VAR_6 &= ~VAR_1;
  break;
 case 1:
  VAR_6 |= VAR_1;
  break;
 default:
  return VAR_5;
 }

 FUNC_2(VAR_6, VAR_0);

 return 0;
}
