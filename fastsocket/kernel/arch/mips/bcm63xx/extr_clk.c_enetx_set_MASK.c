
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {scalar_t__ id; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct clk *VAR_3, int VAR_4)
{
 if (VAR_4)
  FUNC_3(&VAR_2);
 else
  FUNC_2(&VAR_2);

 if (FUNC_0()) {
  u32 VAR_5;

  if (VAR_3->id == 0)
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_1;
  FUNC_1(VAR_5, VAR_4);
 }
}
