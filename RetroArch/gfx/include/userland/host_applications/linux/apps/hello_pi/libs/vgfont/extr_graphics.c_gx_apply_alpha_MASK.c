
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef double uint8_t ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ type; double alpha; } ;
typedef TYPE_1__* GRAPHICS_RESOURCE_HANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int32_t FUNC_1( GRAPHICS_RESOURCE_HANDLE VAR_1,
                        const uint8_t VAR_2 )
{
   FUNC_0(VAR_1);
   if (VAR_1->type != VAR_0)
   {
      FUNC_0(0);
      return -1;
   }
   VAR_1->alpha = 1.0*VAR_2/255;
   return 0;
}
