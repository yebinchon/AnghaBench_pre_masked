
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * retro_proc_address_t ;
struct TYPE_4__ {TYPE_1__* ctx_driver; } ;
typedef TYPE_2__ gl_t ;
struct TYPE_3__ {int * (* get_proc_address ) (char const*) ;} ;


 int * FUNC_0 (char const*) ;

__attribute__((used)) static retro_proc_address_t FUNC_1(void *VAR_0, const char *VAR_1)
{
   gl_t *VAR_2 = (gl_t*)VAR_0;

   if (VAR_2 && VAR_2->ctx_driver->get_proc_address)
      return VAR_2->ctx_driver->get_proc_address(VAR_1);

   return ((void*)0);
}
