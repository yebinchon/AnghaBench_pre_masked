
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ctx_data; TYPE_1__* ctx_driver; } ;
typedef TYPE_2__ gl_t ;
struct TYPE_3__ {int (* suppress_screensaver ) (scalar_t__,int) ;} ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, bool VAR_1)
{
   bool VAR_2 = VAR_1;
   gl_t *VAR_3 = (gl_t*)VAR_0;

   if (VAR_3->ctx_data && VAR_3->ctx_driver->suppress_screensaver)
      return VAR_3->ctx_driver->suppress_screensaver(VAR_3->ctx_data, VAR_2);
   return 0;
}
