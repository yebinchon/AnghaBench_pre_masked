
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int deflate_state ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

int FUNC_2 (z_streamp VAR_1)
{
   int VAR_2;

   VAR_2 = FUNC_0(VAR_1);
   if (VAR_2 == VAR_0)
      FUNC_1((deflate_state*)VAR_1->state);
   return VAR_2;
}
