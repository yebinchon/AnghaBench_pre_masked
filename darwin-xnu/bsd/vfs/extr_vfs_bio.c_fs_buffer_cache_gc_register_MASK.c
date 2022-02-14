
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* callout ) (int,void*) ;void* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(void (* VAR_4)(int, void *), void *VAR_5)
{
 FUNC_0(VAR_2);
 for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_3[VAR_6].callout == ((void*)0)) {
   VAR_3[VAR_6].callout = VAR_4;
   VAR_3[VAR_6].context = VAR_5;
   FUNC_1(VAR_2);
   return 0;
  }
 }

 FUNC_1(VAR_2);
 return VAR_0;
}
