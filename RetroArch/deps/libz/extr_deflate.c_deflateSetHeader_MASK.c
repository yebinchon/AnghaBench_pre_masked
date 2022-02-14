
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct internal_state_deflate {int wrap; int gzhead; } ;
typedef int gz_headerp ;
struct TYPE_4__ {struct TYPE_4__* state; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0 (z_streamp VAR_3, gz_headerp VAR_4)
{
   struct internal_state_deflate *VAR_5 = (struct internal_state_deflate*)VAR_3->state;
   if (VAR_3 == VAR_0 || VAR_3->state == VAR_0) return VAR_2;
   if (VAR_5->wrap != 2)
      return VAR_2;
   VAR_5->gzhead = VAR_4;
   return VAR_1;
}
