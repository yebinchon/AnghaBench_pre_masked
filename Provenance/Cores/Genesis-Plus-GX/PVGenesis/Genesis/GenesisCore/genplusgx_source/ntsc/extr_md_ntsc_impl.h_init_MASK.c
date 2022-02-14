
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float* decoder_matrix; scalar_t__ saturation; scalar_t__ hue; scalar_t__ gamma; scalar_t__ fringing; scalar_t__ artifacts; int palette; scalar_t__ contrast; scalar_t__ brightness; } ;
typedef TYPE_1__ md_ntsc_setup_t ;
struct TYPE_9__ {float contrast; float artifacts; float fringing; float* to_rgb; scalar_t__ brightness; scalar_t__* to_float; } ;
typedef TYPE_2__ init_t ;


 float VAR_0 ;
 int FUNC_0 (float,float,float,float) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (float) ;
 float* VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int,float const) ;
 scalar_t__ VAR_10 ;
 float VAR_11 ;
 scalar_t__ FUNC_5 (float) ;
 float VAR_12 ;

__attribute__((used)) static void FUNC_6( init_t* VAR_13, md_ntsc_setup_t const* VAR_14 )
{
  VAR_13->brightness = (float) VAR_14->brightness * (0.5f * VAR_11) + VAR_10;
  VAR_13->contrast = (float) VAR_14->contrast * (0.5f * VAR_11) + VAR_11;





  VAR_13->artifacts = (float) VAR_14->artifacts;
  if ( VAR_13->artifacts > 0 )
    VAR_13->artifacts *= VAR_1 - VAR_2;
  VAR_13->artifacts = VAR_13->artifacts * VAR_2 + VAR_2;

  VAR_13->fringing = (float) VAR_14->fringing;
  if ( VAR_13->fringing > 0 )
    VAR_13->fringing *= VAR_7 - VAR_8;
  VAR_13->fringing = VAR_13->fringing * VAR_8 + VAR_8;

  FUNC_3( VAR_13, VAR_14 );


  if ( VAR_9 > 1 )
  {
    float const VAR_15 = 1.0f / (VAR_9 - (VAR_9 > 1));
    float const VAR_16 = 1.1333f - (float) VAR_14->gamma * 0.5f;

    int VAR_17;
    for ( VAR_17 = 0; VAR_17 < VAR_9; VAR_17++ )
      VAR_13->to_float [VAR_17] =
          (float) FUNC_4( VAR_17 * VAR_15, VAR_16 ) * VAR_13->contrast + VAR_13->brightness;
  }


  {
    float VAR_18 = (float) VAR_14->hue * VAR_0 + VAR_0 / 180 * VAR_6;
    float VAR_19 = (float) VAR_14->saturation + 1;
    float const* VAR_20 = VAR_14->decoder_matrix;
    if ( !VAR_20 )
    {
      VAR_20 = VAR_4;
      if ( FUNC_1( VAR_14 ) )
        VAR_18 += VAR_0 / 180 * (VAR_12 - VAR_6);
    }

    {
      float VAR_21 = (float) FUNC_5( VAR_18 ) * VAR_19;
      float VAR_22 = (float) FUNC_2( VAR_18 ) * VAR_19;
      float* VAR_23 = VAR_13->to_rgb;
      int VAR_24;

      VAR_24 = VAR_3;
      do
      {
        float const* VAR_25 = VAR_20;
        int VAR_26 = 3;
        do
        {
          float VAR_27 = *VAR_25++;
          float VAR_28 = *VAR_25++;
          *VAR_23++ = VAR_27 * VAR_22 - VAR_28 * VAR_21;
          *VAR_23++ = VAR_27 * VAR_21 + VAR_28 * VAR_22;
        }
        while ( --VAR_26 );
        if ( VAR_3 <= 1 )
          break;
        FUNC_0( VAR_21, VAR_22, 0.866025f, -0.5f );
      }
      while ( --VAR_24 );
    }
  }
}
