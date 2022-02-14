
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_data_reg {unsigned long reg_width; int reg_shadow; int reg; } ;


 int FUNC_0 (unsigned long,int *) ;
 int FUNC_1 (int ,unsigned long,int ) ;
 int FUNC_2 (char*,int ,int,unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,int *) ;

__attribute__((used)) static void FUNC_4(struct pinmux_data_reg *VAR_0,
      unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_0->reg_width - (VAR_1 + 1);







 if (VAR_2)
  FUNC_3(VAR_3, &VAR_0->reg_shadow);
 else
  FUNC_0(VAR_3, &VAR_0->reg_shadow);

 FUNC_1(VAR_0->reg, VAR_0->reg_width, VAR_0->reg_shadow);
}
