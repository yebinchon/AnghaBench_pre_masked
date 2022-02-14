
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int int32_t ;
struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ DISPMANX_MODEINFO_T ;
typedef int DISPMANX_DISPLAY_HANDLE_T ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

int32_t FUNC_4( const uint16_t VAR_1,
                                   uint32_t *VAR_2,
                                   uint32_t *VAR_3)
{
   DISPMANX_MODEINFO_T VAR_4;
   int32_t VAR_5 = -1;
   DISPMANX_DISPLAY_HANDLE_T VAR_6;
   FUNC_2(VAR_2 && VAR_3);
   *VAR_2 = *VAR_3 = 0;

   if(FUNC_3(VAR_1 < VAR_0))
   {

      if (FUNC_0(VAR_1, &VAR_6) < 0)
      {
         FUNC_2(0);
         return -1;
      }
      VAR_5 = FUNC_1(VAR_6, &VAR_4);

      if( VAR_5 >= 0 )
      {
         *VAR_2 = VAR_4.width;
         *VAR_3 = VAR_4.height;
         FUNC_2(*VAR_3 > 64);
      }
      else
      {
         FUNC_2(0);
      }
   }

   return VAR_5;
}
