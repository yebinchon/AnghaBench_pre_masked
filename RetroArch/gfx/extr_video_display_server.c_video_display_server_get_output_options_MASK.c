
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* (* get_output_options ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int ) ;

const char *FUNC_1(void)
{
   if (VAR_0 && VAR_0->get_output_options)
      return VAR_0->get_output_options(VAR_1);
   return ((void*)0);
}
