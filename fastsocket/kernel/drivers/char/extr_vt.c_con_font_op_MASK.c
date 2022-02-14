
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;
struct console_font_op {int op; } ;


 int VAR_0 ;




 int FUNC_0 (struct vc_data*,struct console_font_op*) ;
 int FUNC_1 (struct vc_data*,struct console_font_op*) ;
 int FUNC_2 (struct vc_data*,struct console_font_op*) ;
 int FUNC_3 (struct vc_data*,struct console_font_op*) ;

int FUNC_4(struct vc_data *VAR_1, struct console_font_op *VAR_2)
{
 switch (VAR_2->op) {
 case 129:
  return FUNC_3(VAR_1, VAR_2);
 case 130:
  return FUNC_2(VAR_1, VAR_2);
 case 128:
  return FUNC_1(VAR_1, VAR_2);
 case 131:
  return FUNC_0(VAR_1, VAR_2);
 }
 return -VAR_0;
}
