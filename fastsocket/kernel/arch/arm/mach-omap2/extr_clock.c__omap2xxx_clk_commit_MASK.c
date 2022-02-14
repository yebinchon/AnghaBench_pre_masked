
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_4)
{
 if (!FUNC_0())
  return;

 if (!(VAR_4->flags & VAR_0))
  return;

 FUNC_2(VAR_2, VAR_1,
  VAR_3);

 FUNC_1(VAR_1, VAR_3);
}
