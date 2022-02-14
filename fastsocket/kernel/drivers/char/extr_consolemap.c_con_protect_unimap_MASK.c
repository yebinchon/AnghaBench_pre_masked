
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__* vc_uni_pagedir_loc; } ;
struct uni_pagedir {int readonly; } ;



void FUNC_0(struct vc_data *VAR_0, int VAR_1)
{
 struct uni_pagedir *VAR_2 = (struct uni_pagedir *)*VAR_0->vc_uni_pagedir_loc;

 if (VAR_2)
  VAR_2->readonly = VAR_1;
}
