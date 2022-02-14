
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeonfb_info {TYPE_1__* i2c; } ;
struct TYPE_2__ {int ddc_reg; struct radeonfb_info* rinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(struct radeonfb_info *VAR_4)
{
 VAR_4->i2c[0].rinfo = VAR_4;
 VAR_4->i2c[0].ddc_reg = VAR_2;
 FUNC_0(&VAR_4->i2c[0], "monid");

 VAR_4->i2c[1].rinfo = VAR_4;
 VAR_4->i2c[1].ddc_reg = VAR_1;
 FUNC_0(&VAR_4->i2c[1], "dvi");

 VAR_4->i2c[2].rinfo = VAR_4;
 VAR_4->i2c[2].ddc_reg = VAR_3;
 FUNC_0(&VAR_4->i2c[2], "vga");

 VAR_4->i2c[3].rinfo = VAR_4;
 VAR_4->i2c[3].ddc_reg = VAR_0;
 FUNC_0(&VAR_4->i2c[3], "crt2");
}
