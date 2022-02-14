
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct clk const clk ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct clk *VAR_1[], unsigned int VAR_2,
          struct clk *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_3 == VAR_1[VAR_4])
   return VAR_4;

 return -VAR_0;
}
