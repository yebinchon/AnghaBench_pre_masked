
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct vc_data {int vc_complement_mask; int vc_hi_font_mask; unsigned long* vc_uni_pagedir_loc; unsigned long vc_uni_pagedir; TYPE_1__ vc_font; int vc_scan_lines; int vc_rows; int vc_cols; int vc_can_do_color; } ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long* VAR_6 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_7, int VAR_8)
{
 unsigned long VAR_9;






 VAR_7->vc_can_do_color = VAR_1;


 if (VAR_8) {
  VAR_7->vc_cols = VAR_4;
  VAR_7->vc_rows = VAR_5;
 } else
  FUNC_2(VAR_7, VAR_4, VAR_5);

 VAR_7->vc_scan_lines = VAR_2;
 VAR_7->vc_font.height = VAR_3;
 VAR_7->vc_complement_mask = 0x7700;
 if (VAR_0)
  VAR_7->vc_hi_font_mask = 0x0800;
 VAR_9 = *VAR_7->vc_uni_pagedir_loc;
 if (VAR_7->vc_uni_pagedir_loc == &VAR_7->vc_uni_pagedir ||
     !--VAR_7->vc_uni_pagedir_loc[1])
  FUNC_0(VAR_7);
 VAR_7->vc_uni_pagedir_loc = VAR_6;
 VAR_6[1]++;
 if (!VAR_6[0] && VAR_9)
  FUNC_1(VAR_7);
}
