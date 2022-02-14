
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned long* vc_uni_pagedir_loc; } ;
struct unimapinit {int dummy; } ;
struct uni_pagedir {int refcount; scalar_t__ sum; scalar_t__ readonly; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uni_pagedir*) ;
 struct uni_pagedir* VAR_3 ;
 struct uni_pagedir* FUNC_1 (int,int ) ;

int FUNC_2(struct vc_data *VAR_4, struct unimapinit *VAR_5)
{
 struct uni_pagedir *VAR_6, *VAR_7;

 VAR_6 = (struct uni_pagedir *)*VAR_4->vc_uni_pagedir_loc;
 if (VAR_6 && VAR_6->readonly) return -VAR_0;
 if (!VAR_6 || --VAR_6->refcount) {
  VAR_7 = FUNC_1(sizeof(*VAR_6), VAR_2);
  if (!VAR_7) {
   if (VAR_6) VAR_6->refcount++;
   return -VAR_1;
  }
  VAR_7->refcount=1;
  *VAR_4->vc_uni_pagedir_loc = (unsigned long)VAR_7;
 } else {
  if (VAR_6 == VAR_3) VAR_3 = ((void*)0);
  VAR_6->refcount++;
  VAR_6->sum = 0;
  FUNC_0(VAR_6);
 }
 return 0;
}
