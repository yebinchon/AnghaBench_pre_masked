
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int rd_data_reg_sel; int wd_data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void)
{
 u_char VAR_1;


 VAR_0.rd_data_reg_sel = 14;
 VAR_1 = VAR_0.rd_data_reg_sel & 0xef;
 VAR_0.wd_data = VAR_1;
 VAR_0.wd_data = VAR_1 | 0x10;

 FUNC_0(10);


 VAR_0.rd_data_reg_sel = 14;
 VAR_0.wd_data = VAR_0.rd_data_reg_sel & 0xef;

 return 0;
}
