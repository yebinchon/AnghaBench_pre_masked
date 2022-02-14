
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * views; scalar_t__ views_count; } ;
struct TYPE_4__ {int view_index; TYPE_1__ view_array; int * view; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 () ;

int FUNC_3(int VAR_1)
{
   VAR_1 = FUNC_0(0, FUNC_1(VAR_1, VAR_0->view_array.views_count - 1));

   VAR_0->view_index = VAR_1;
   VAR_0->view = VAR_0->view_array.views_count ?
      &VAR_0->view_array.views[VAR_1] : ((void*)0);

   FUNC_2();

   return VAR_1;
}
