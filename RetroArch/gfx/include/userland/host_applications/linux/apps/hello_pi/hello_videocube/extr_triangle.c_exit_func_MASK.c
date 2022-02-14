
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int display; int context; int surface; } ;
typedef int EGLImageKHR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_8(void)

{
   if (VAR_3 != 0)
   {
      if (!FUNC_1(VAR_4->display, (EGLImageKHR) VAR_3))
         FUNC_7("eglDestroyImageKHR failed.");
   }


   FUNC_6( VAR_2 );
   FUNC_4(VAR_4->display, VAR_4->surface);


   FUNC_3( VAR_4->display, VAR_1, VAR_1, VAR_0 );
   FUNC_2( VAR_4->display, VAR_4->surface );
   FUNC_0( VAR_4->display, VAR_4->context );
   FUNC_5( VAR_4->display );

   FUNC_7("\ncube closed\n");
}
