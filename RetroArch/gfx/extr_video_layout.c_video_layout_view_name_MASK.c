
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* views; } ;
struct TYPE_6__ {TYPE_2__ view_array; } ;
struct TYPE_4__ {char const* name; } ;


 TYPE_3__* VAR_0 ;

const char *FUNC_0(int VAR_1)
{
   return VAR_0->view_array.views[VAR_1].name;
}
