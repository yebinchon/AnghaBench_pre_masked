
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float sharpness; float hue_warping; int merge_fields; float* decoder_matrix; scalar_t__ hue; } ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__ VAR_11 ;
 int FUNC_6 () ;

int FUNC_7( int VAR_12, char** VAR_13 )
{
 int VAR_14 = 1;
 int VAR_15 = 0;

 VAR_11 = VAR_4;
 FUNC_2();
 FUNC_4( VAR_10, VAR_9, 16 );


 while ( FUNC_5() )
 {
  FUNC_0();

  switch ( VAR_0 )
  {
   case 133: VAR_14 = !VAR_14; break;

   case 132 : VAR_11 = VAR_4; break;

   case 128 : VAR_11 = VAR_7; break;

   case 129 : VAR_11 = VAR_6; break;

   case 130 : VAR_11 = VAR_5; break;

   case 131 : VAR_15 = !VAR_15; break;
  }

  if ( VAR_0 || VAR_1 )
  {

   float VAR_16 = VAR_2 * 2 - 1;
   float VAR_17 = VAR_3 * 2 - 1;



   VAR_11.sharpness = VAR_16;
   VAR_11.hue_warping = VAR_17;

   VAR_11.merge_fields = VAR_14;

   VAR_11.decoder_matrix = 0;
   VAR_11.hue = 0;
   if ( VAR_15 )
   {

    static float VAR_18 [6] = { 1.539, -0.622, -0.571, -0.185, 0.000, 2.000 };
    VAR_11.decoder_matrix = VAR_18;
    VAR_11.hue += 33 / 180.0;
   }

   FUNC_3( VAR_8, &VAR_11 );
  }
 }

 FUNC_1( VAR_8 );

 FUNC_6();

 return 0;
}
