
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bleed; scalar_t__ resolution; scalar_t__ sharpness; } ;
typedef TYPE_1__ snes_ntsc_setup_t ;
struct TYPE_6__ {float* kernel; } ;
typedef TYPE_2__ init_t ;


 scalar_t__ VAR_0 ;
 float const VAR_1 ;
 scalar_t__ FUNC_0 (float const) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (float const,float const) ;
 float VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( init_t* VAR_6, snes_ntsc_setup_t const* VAR_7 )
{



 float* const VAR_8 = VAR_6->kernel;



 {

  float const VAR_9 = 1 + (float) VAR_7->sharpness * (float) 0.032;
  float const VAR_10 = 32;
  float const VAR_11 = (float) FUNC_2( VAR_9, VAR_10 );
  float VAR_12;
  int VAR_13;

  float VAR_14 = (float) VAR_7->resolution + 1;
  VAR_14 = VAR_1 / VAR_10 * (float) VAR_0 * (VAR_14 * VAR_14 + 1);

  VAR_8 [VAR_3 * 3 / 2] = VAR_10;
  for ( VAR_13 = 0; VAR_13 < VAR_2 * 2 + 1; VAR_13++ )
  {
   int VAR_15 = VAR_13 - VAR_2;
   float VAR_16 = VAR_15 * VAR_14;

   if ( VAR_15 || VAR_11 > (float) 1.056 || VAR_11 < (float) 0.981 )
   {
    float VAR_17 = VAR_9 * (float) FUNC_0( VAR_16 );
    float VAR_18 = 1 - VAR_17 -
      VAR_11 * (float) FUNC_0( VAR_10 * VAR_16 ) +
      VAR_11 * VAR_9 * (float) FUNC_0( (VAR_10 - 1) * VAR_16 );
    float VAR_19 = 1 - VAR_17 - VAR_17 + VAR_9 * VAR_9;
    float VAR_20 = VAR_18 / VAR_19;
    VAR_8 [VAR_3 * 3 / 2 - VAR_2 + VAR_13] = VAR_20 - (float) 0.5;
   }
  }


  VAR_12 = 0;
  for ( VAR_13 = 0; VAR_13 < VAR_2 * 2 + 1; VAR_13++ )
  {
   float VAR_21 = VAR_1 * 2 / (VAR_2 * 2) * VAR_13;
   float VAR_22 = 0.42f - 0.5f * (float) FUNC_0( VAR_21 ) + 0.08f * (float) FUNC_0( VAR_21 * 2 );
   VAR_12 += (VAR_8 [VAR_3 * 3 / 2 - VAR_2 + VAR_13] *= VAR_22);
  }


  VAR_12 = 1.0f / VAR_12;
  for ( VAR_13 = 0; VAR_13 < VAR_2 * 2 + 1; VAR_13++ )
  {
   int VAR_23 = VAR_3 * 3 / 2 - VAR_2 + VAR_13;
   VAR_8 [VAR_23] *= VAR_12;
   FUNC_3( VAR_8 [VAR_23] == VAR_8 [VAR_23] );
  }
 }


 {
  float const VAR_24 = -0.03125f;
  float VAR_25 = (float) VAR_7->bleed;
  int VAR_26;

  if ( VAR_25 < 0 )
  {

   VAR_25 *= VAR_25;
   VAR_25 *= VAR_25;
   VAR_25 *= VAR_25;
   VAR_25 *= -30.0f / 0.65f;
  }
  VAR_25 = VAR_24 - 0.65f * VAR_24 * VAR_25;

  for ( VAR_26 = -VAR_2; VAR_26 <= VAR_2; VAR_26++ )
   VAR_8 [VAR_3 / 2 + VAR_26] = (float) FUNC_1( VAR_26 * VAR_26 * VAR_25 );


  for ( VAR_26 = 0; VAR_26 < 2; VAR_26++ )
  {
   float VAR_27 = 0;
   int VAR_28;
   for ( VAR_28 = VAR_26; VAR_28 < VAR_3; VAR_28 += 2 )
    VAR_27 += VAR_8 [VAR_28];

   VAR_27 = 1.0f / VAR_27;
   for ( VAR_28 = VAR_26; VAR_28 < VAR_3; VAR_28 += 2 )
   {
    VAR_8 [VAR_28] *= VAR_27;
    FUNC_3( VAR_8 [VAR_28] == VAR_8 [VAR_28] );
   }
  }
 }
}
