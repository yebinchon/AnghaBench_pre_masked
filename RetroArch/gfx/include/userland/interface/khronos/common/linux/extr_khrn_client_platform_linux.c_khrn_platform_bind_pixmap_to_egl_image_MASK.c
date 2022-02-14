
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; int send; int egl_image; int pixmap; } ;
typedef int EGLNativePixmapType ;
typedef int EGLImageKHR ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(EGLNativePixmapType VAR_2, EGLImageKHR VAR_3, bool VAR_4)
{
   int VAR_5;
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      if (!VAR_1[VAR_5].used)
      {

         FUNC_2("khrn_platform_bind_pixmap_to_egl_image %d", VAR_5);

         VAR_1[VAR_5].used = 1;
         VAR_1[VAR_5].pixmap = VAR_2;
         VAR_1[VAR_5].egl_image = VAR_3;
         VAR_1[VAR_5].send = VAR_4;
         if(VAR_4)
            FUNC_0(VAR_5);
         return;
      }
   }
   FUNC_1(0);
}
