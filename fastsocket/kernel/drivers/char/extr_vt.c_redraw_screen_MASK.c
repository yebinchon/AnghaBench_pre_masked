
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {size_t vc_num; int vc_can_do_color; scalar_t__ vc_mode; int vc_screenbuf_size; int vc_origin; TYPE_1__* vc_sw; struct vc_data** vc_display_fg; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {int (* con_switch ) (struct vc_data*) ;} ;


 int FUNC_0 (struct vc_data*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct vc_data*,int ,int) ;
 size_t VAR_1 ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (struct vc_data*) ;
 int FUNC_7 (struct vc_data*) ;
 int FUNC_8 (struct vc_data*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct vc_data*) ;
 int FUNC_11 (struct vc_data*) ;
 int FUNC_12 (struct vc_data*) ;
 int FUNC_13 (struct vc_data*) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_14 (struct vc_data*) ;

void FUNC_15(struct vc_data *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_1();

 if (!VAR_3) {


  return;
 }

 if (VAR_4) {
  struct vc_data *VAR_6 = VAR_2[VAR_1].d;
  if (VAR_6 == VAR_3)
   return;
  if (!FUNC_0(VAR_3))
   VAR_5 = 1;
  *VAR_3->vc_display_fg = VAR_3;
  VAR_1 = VAR_3->vc_num;
  FUNC_5(VAR_6);
  if (!FUNC_0(VAR_6)) {
   FUNC_7(VAR_6);
   FUNC_10(VAR_6);
  }
 } else {
  FUNC_5(VAR_3);
  VAR_5 = 1;
 }

 if (VAR_5) {
  int VAR_7;
  int VAR_8 = VAR_3->vc_can_do_color;

  FUNC_10(VAR_3);
  VAR_7 = VAR_3->vc_sw->con_switch(VAR_3);
  FUNC_11(VAR_3);






  if (VAR_8 != VAR_3->vc_can_do_color) {
   FUNC_13(VAR_3);
   FUNC_2(VAR_3);
  }


  if ((VAR_7 && VAR_3->vc_mode != VAR_0) ||
      FUNC_14(VAR_3))
   FUNC_4(VAR_3, VAR_3->vc_origin, VAR_3->vc_screenbuf_size / 2);
 }
 FUNC_8(VAR_3);
 if (VAR_4) {
  FUNC_9();
  FUNC_3();
  FUNC_6(VAR_3);
 }
}
