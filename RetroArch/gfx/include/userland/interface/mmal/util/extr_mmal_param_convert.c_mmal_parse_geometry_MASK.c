
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* height; void* width; void* y; void* x; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_RECT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,void**,void**,...) ;

MMAL_STATUS_T FUNC_1(MMAL_RECT_T *VAR_2, const char *VAR_3)
{
   MMAL_STATUS_T VAR_4;
   uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
   VAR_7 = VAR_8 = VAR_5 = VAR_6 = 0;

   if (FUNC_0(VAR_3, "%d*%d+%d+%d", &VAR_5,&VAR_6,&VAR_7,&VAR_8) == 4 ||
       FUNC_0(VAR_3, "%d*%d", &VAR_5,&VAR_6) == 2)
   {
      VAR_2->x = VAR_7;
      VAR_2->y = VAR_8;
      VAR_2->width = VAR_5;
      VAR_2->height = VAR_6;
      VAR_4 = VAR_1;
   }
   else
   {
      VAR_4 = VAR_0;
   }
   return VAR_4;
}
