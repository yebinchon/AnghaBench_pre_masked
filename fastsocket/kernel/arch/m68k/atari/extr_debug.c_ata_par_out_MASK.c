
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rd_data_reg_sel; char wd_data; } ;
struct TYPE_3__ {int par_dt_reg; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_1(char VAR_4)
{
 unsigned char VAR_5;

 unsigned long VAR_6 = VAR_1 > 1 ? VAR_1 : 10000000/VAR_0;

 while ((VAR_3.par_dt_reg & 1) && --VAR_6)
  ;
 if (!VAR_6)
  return 0;

 VAR_2.rd_data_reg_sel = 15;
 VAR_2.wd_data = VAR_4;
 VAR_2.rd_data_reg_sel = 14;
 VAR_5 = VAR_2.rd_data_reg_sel;
 VAR_2.wd_data = VAR_5 & ~0x20;
 FUNC_0();
 VAR_2.wd_data = VAR_5 | 0x20;
 return 1;
}
