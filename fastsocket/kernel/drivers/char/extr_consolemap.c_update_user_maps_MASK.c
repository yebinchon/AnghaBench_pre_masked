
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uni_pagedir {int dummy; } ;
struct TYPE_5__ {scalar_t__* vc_uni_pagedir_loc; } ;
struct TYPE_4__ {TYPE_2__* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct uni_pagedir*) ;
 int FUNC_1 (TYPE_2__*,struct uni_pagedir*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;
 struct uni_pagedir *VAR_4, *VAR_5 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_2(VAR_3))
   continue;
  VAR_4 = (struct uni_pagedir *)*VAR_2[VAR_3].d->vc_uni_pagedir_loc;
  if (VAR_4 && VAR_4 != VAR_5) {
   FUNC_1(VAR_2[VAR_3].d, VAR_4, VAR_1);
   FUNC_0(VAR_2[VAR_3].d, VAR_4);
   VAR_5 = VAR_4;
  }
 }
}
