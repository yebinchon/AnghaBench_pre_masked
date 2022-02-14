
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_4, int VAR_5)
{
 u32 VAR_6;

 if (VAR_5) {
  VAR_5 = VAR_1;
  VAR_6 = VAR_3;
 } else
  VAR_6 = 0;


 FUNC_1(VAR_0, VAR_6);

 do {
  FUNC_2();
 } while ((FUNC_0(VAR_2) & VAR_1) != VAR_5);
}
