
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ screen_height; scalar_t__ screen_width; } ;
typedef TYPE_1__ TEAPOT_STATE_T ;
typedef int GLsizei ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float,float,float,float,float,float) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (double) ;

__attribute__((used)) static void FUNC_8(TEAPOT_STATE_T *VAR_5)
{
   float VAR_6 = 0.1f;
   float VAR_7 = 500.0f;
   float VAR_8;
   float VAR_9;

   FUNC_2( VAR_1, VAR_0 );

   FUNC_5(0, 0, (GLsizei)VAR_5->screen_width, (GLsizei)VAR_5->screen_height);

   FUNC_4(VAR_2);
   FUNC_3();

   VAR_8 = VAR_6 * (float)FUNC_7(45.0 / 2.0 / 180.0 * VAR_4);
   VAR_9 = VAR_8 * (float)VAR_5->screen_width / (float)VAR_5->screen_height;

   FUNC_1(-VAR_9, VAR_9, -VAR_8, VAR_8, VAR_6, VAR_7);

   FUNC_0( VAR_3 );

   FUNC_6(VAR_5);
}
