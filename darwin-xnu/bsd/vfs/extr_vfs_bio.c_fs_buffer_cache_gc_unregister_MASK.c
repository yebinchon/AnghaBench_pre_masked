
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* callout ) (int,void*) ;void* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(void (* VAR_3)(int, void *), void *VAR_4)
{
 FUNC_0(VAR_1);
 for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2[VAR_5].callout == VAR_3 &&
      VAR_2[VAR_5].context == VAR_4) {
   VAR_2[VAR_5].callout = ((void*)0);
   VAR_2[VAR_5].context = ((void*)0);
  }
 }
 FUNC_1(VAR_1);
 return 0;
}
