
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk {int parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 unsigned long FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk *VAR_2)
{
 uint32_t VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_2(VAR_2->parent);

 VAR_3 = FUNC_0(VAR_0);




 if (FUNC_3() >= VAR_1)
  FUNC_1(VAR_3, VAR_0);

 return FUNC_4(VAR_3, VAR_4);
}
