
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_num; int vc_complement_mask; int vc_panic_force_write; int vc_s_complement_mask; int vc_size_row; int vc_cols; int vc_screenbuf_size; int vc_rows; scalar_t__ vc_can_do_color; TYPE_1__* vc_sw; scalar_t__ vc_hi_font_mask; scalar_t__ vc_uni_pagedir; scalar_t__* vc_uni_pagedir_loc; int * vc_display_fg; } ;
struct TYPE_3__ {int (* con_init ) (struct vc_data*,int) ;int owner; } ;


 int FUNC_0 (int ) ;
 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vc_data*,int) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_3, int VAR_4, int VAR_5)
{

 if (VAR_3->vc_sw)
  FUNC_1(VAR_3->vc_sw->owner);
 VAR_3->vc_sw = VAR_1;

 if (VAR_0[VAR_4])
  VAR_3->vc_sw = VAR_0[VAR_4];

 FUNC_0(VAR_3->vc_sw->owner);
 VAR_3->vc_num = VAR_4;
 VAR_3->vc_display_fg = &VAR_2;
 VAR_3->vc_uni_pagedir_loc = &VAR_3->vc_uni_pagedir;
 VAR_3->vc_uni_pagedir = 0;
 VAR_3->vc_hi_font_mask = 0;
 VAR_3->vc_complement_mask = 0;
 VAR_3->vc_can_do_color = 0;
 VAR_3->vc_panic_force_write = 0;
 VAR_3->vc_sw->con_init(VAR_3, VAR_5);
 if (!VAR_3->vc_complement_mask)
  VAR_3->vc_complement_mask = VAR_3->vc_can_do_color ? 0x7700 : 0x0800;
 VAR_3->vc_s_complement_mask = VAR_3->vc_complement_mask;
 VAR_3->vc_size_row = VAR_3->vc_cols << 1;
 VAR_3->vc_screenbuf_size = VAR_3->vc_rows * VAR_3->vc_size_row;
}
