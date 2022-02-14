
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int views_count; } ;
struct TYPE_4__ {int view_index; TYPE_1__ view_array; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(void)
{
   return FUNC_0(
      (VAR_0->view_index + 1) % VAR_0->view_array.views_count);
}
