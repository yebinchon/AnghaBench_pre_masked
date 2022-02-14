
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct async_submit_ctl {void** scribble; } ;
struct TYPE_2__ {int (* gen_syndrome ) (int,size_t,void**) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct async_submit_ctl*) ;
 void* FUNC_2 (struct page*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,size_t,void**) ;

__attribute__((used)) static void
FUNC_4(struct page **VAR_2, unsigned int VAR_3, int VAR_4,
       size_t VAR_5, struct async_submit_ctl *VAR_6)
{
 void **VAR_7;
 int VAR_8;

 if (VAR_6->scribble)
  VAR_7 = VAR_6->scribble;
 else
  VAR_7 = (void **) VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_2[VAR_8] == ((void*)0)) {
   FUNC_0(VAR_8 > VAR_4 - 3);
   VAR_7[VAR_8] = (void*)VAR_1;
  } else
   VAR_7[VAR_8] = FUNC_2(VAR_2[VAR_8]) + VAR_3;
 }
 VAR_0.gen_syndrome(VAR_4, VAR_5, VAR_7);
 FUNC_1(VAR_6);
}
