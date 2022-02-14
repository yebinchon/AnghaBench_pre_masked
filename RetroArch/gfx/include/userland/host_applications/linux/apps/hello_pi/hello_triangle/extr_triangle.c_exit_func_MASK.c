
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tex_buf3; int tex_buf2; int tex_buf1; int display; int context; int dispman_display; int dispman_element; int surface; int tex; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(void)

{
   DISPMANX_UPDATE_HANDLE_T VAR_4;
   int VAR_5;

   FUNC_7( VAR_2 );
   FUNC_4(VAR_3->display, VAR_3->surface);

   FUNC_8(6, VAR_3->tex);
   FUNC_2( VAR_3->display, VAR_3->surface );

   VAR_4 = FUNC_12( 0 );
   VAR_5 = FUNC_11(VAR_4, VAR_3->dispman_element);
   FUNC_0(VAR_5 == 0);
   FUNC_13( VAR_4 );
   VAR_5 = FUNC_10(VAR_3->dispman_display);
   FUNC_0 (VAR_5 == 0);


   FUNC_3( VAR_3->display, VAR_1, VAR_1, VAR_0 );
   FUNC_1( VAR_3->display, VAR_3->context );
   FUNC_5( VAR_3->display );


   FUNC_6(VAR_3->tex_buf1);
   FUNC_6(VAR_3->tex_buf2);
   FUNC_6(VAR_3->tex_buf3);

   FUNC_9("\ncube closed\n");
}
