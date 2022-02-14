
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ screen_height; scalar_t__ screen_width; } ;
typedef int GLsizei ;
typedef TYPE_1__ CUBE_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float,float,float,float,float,float) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (double) ;

__attribute__((used)) static void FUNC_9(CUBE_STATE_T *VAR_7)
{
   float VAR_8 = 1.0f;
   float VAR_9 = 500.0f;
   float VAR_10;
   float VAR_11;

   FUNC_2( VAR_2, VAR_1 );

   FUNC_6(0, 0, (GLsizei)VAR_7->screen_width, (GLsizei)VAR_7->screen_height);

   FUNC_4(VAR_3);
   FUNC_3();

   VAR_10 = VAR_8 * (float)FUNC_8(45.0 / 2.0 / 180.0 * VAR_5);
   VAR_11 = VAR_10 * (float)VAR_7->screen_width / (float)VAR_7->screen_height;

   FUNC_1(-VAR_11, VAR_11, -VAR_10, VAR_10, VAR_8, VAR_9);

   FUNC_0( VAR_4 );
   FUNC_5( 3, VAR_0, 0, VAR_6 );

   FUNC_7(VAR_7);
}
