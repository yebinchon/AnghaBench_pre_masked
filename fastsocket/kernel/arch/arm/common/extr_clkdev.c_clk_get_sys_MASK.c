
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (char const*,char const*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct clk *FUNC_5(const char *VAR_2, const char *VAR_3)
{
 struct clk *VAR_4;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 && !FUNC_1(VAR_4))
  VAR_4 = ((void*)0);
 FUNC_4(&VAR_1);

 return VAR_4 ? VAR_4 : FUNC_0(-VAR_0);
}
