
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {int dummy; } ;
struct pinmux_data_reg {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pinmux_info*,unsigned int,struct pinmux_data_reg**,int*) ;
 int FUNC_2 (struct pinmux_data_reg*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pinmux_info *VAR_0,
        unsigned VAR_1, int VAR_2)
{
 struct pinmux_data_reg *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 if (!VAR_0 || FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_4) != 0)
  FUNC_0();
 else
  FUNC_2(VAR_3, VAR_4, VAR_2);
}
