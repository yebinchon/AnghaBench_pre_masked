
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
struct TYPE_3__ {int height; int width; } ;
typedef TYPE_1__ DISPMANX_MODEINFO_T ;
typedef scalar_t__ DISPMANX_DISPLAY_HANDLE_T ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const) ;

int32_t FUNC_3( const uint16_t VAR_0,
                                                    uint32_t *VAR_1,
                                                    uint32_t *VAR_2)
{
   DISPMANX_DISPLAY_HANDLE_T VAR_3 = 0;
   DISPMANX_MODEINFO_T VAR_4;
   int32_t VAR_5 = -1;


   VAR_3 = FUNC_2(VAR_0);

   if (VAR_3) {
      VAR_5 = FUNC_1(VAR_3, &VAR_4);

      if( VAR_5 >= 0 )
      {
         if( ((void*)0) != VAR_1 )
         {
            *VAR_1 = VAR_4.width;
         }

         if( ((void*)0) != VAR_2 )
         {
            *VAR_2 = VAR_4.height;
         }
      }
      FUNC_0(VAR_3);
      VAR_3 = 0;
   }

   return VAR_5;
}
