
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; int (* callout ) (int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_3)
{
 FUNC_0(VAR_1);
 for(int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4].callout != ((void*)0)) {
   VAR_2[VAR_4].callout(VAR_3, VAR_2[VAR_4].context);
  }
 }
 FUNC_1(VAR_1);
}
