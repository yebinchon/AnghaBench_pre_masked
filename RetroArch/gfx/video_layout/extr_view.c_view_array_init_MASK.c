
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int view_t ;
struct TYPE_3__ {int views_count; int * views; } ;
typedef TYPE_1__ view_array_t ;


 int * FUNC_0 (int,int) ;

void FUNC_1(view_array_t *VAR_0, int VAR_1)
{
   VAR_0->views = (view_t*)(VAR_1 > 0 ?
      FUNC_0(VAR_1, sizeof(view_t)) : ((void*)0));
   VAR_0->views_count = VAR_1;
}
