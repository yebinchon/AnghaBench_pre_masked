
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u32 ;
struct clk {int dummy; } ;


 int VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 long long FUNC_0 (int ,int ) ;
 long long FUNC_1 (struct clk*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_4)
{
 long long VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_4);

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_6 &= VAR_2;

 if (VAR_6 == VAR_1)
  VAR_5 = 32768;
 else
  VAR_5 *= VAR_6;

 return VAR_5;
}
