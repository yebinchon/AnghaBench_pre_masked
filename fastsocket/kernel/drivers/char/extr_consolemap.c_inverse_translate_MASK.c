
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {size_t vc_num; scalar_t__* vc_uni_pagedir_loc; } ;
struct uni_pagedir {int* inverse_trans_unicode; int** inverse_translations; } ;


 int VAR_0 ;
 int* VAR_1 ;

u16 FUNC_0(struct vc_data *VAR_2, int VAR_3, int VAR_4)
{
 struct uni_pagedir *VAR_5;
 int VAR_6;
 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return 0;
 else if (!(VAR_5 = (struct uni_pagedir *)*VAR_2->vc_uni_pagedir_loc))
  return VAR_3;
 else if (VAR_4) {
  if (!VAR_5->inverse_trans_unicode)
   return VAR_3;
  else
   return VAR_5->inverse_trans_unicode[VAR_3];
 } else {
  VAR_6 = VAR_1[VAR_2->vc_num];
  if (!VAR_5->inverse_translations[VAR_6])
   return VAR_3;
  else
   return VAR_5->inverse_translations[VAR_6][VAR_3];
 }
}
