
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_window_decorations ) (int ,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

bool FUNC_1(bool VAR_2)
{
   if (VAR_0 && VAR_0->set_window_decorations)
      return VAR_0->set_window_decorations(VAR_1, VAR_2);
   return 0;
}
