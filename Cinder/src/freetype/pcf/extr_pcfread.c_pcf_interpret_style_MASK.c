
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* style_name; int style_flags; int memory; } ;
struct TYPE_6__ {char* atom; } ;
struct TYPE_7__ {TYPE_1__ value; scalar_t__ isString; } ;
typedef TYPE_2__* PCF_Property ;
typedef int PCF_Face ;
typedef int FT_Memory ;
typedef TYPE_3__* FT_Face ;
typedef int FT_Error ;


 scalar_t__ FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int ,char*) ;

__attribute__((used)) static FT_Error
  FUNC_5( PCF_Face VAR_3 )
  {
    FT_Error VAR_4 = VAR_0;
    FT_Face VAR_5 = FUNC_1( VAR_3 );
    FT_Memory VAR_6 = VAR_5->memory;

    PCF_Property VAR_7;

    size_t VAR_8, VAR_9;
    char* VAR_10[4] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
    size_t VAR_11[4];


    VAR_5->style_flags = 0;

    VAR_7 = FUNC_4( VAR_3, "SLANT" );
    if ( VAR_7 && VAR_7->isString &&
         ( *(VAR_7->value.atom) == 'O' || *(VAR_7->value.atom) == 'o' ||
           *(VAR_7->value.atom) == 'I' || *(VAR_7->value.atom) == 'i' ) )
    {
      VAR_5->style_flags |= VAR_2;
      VAR_10[2] = ( *(VAR_7->value.atom) == 'O' ||
                     *(VAR_7->value.atom) == 'o' ) ? (char *)"Oblique"
                                                  : (char *)"Italic";
    }

    VAR_7 = FUNC_4( VAR_3, "WEIGHT_NAME" );
    if ( VAR_7 && VAR_7->isString &&
         ( *(VAR_7->value.atom) == 'B' || *(VAR_7->value.atom) == 'b' ) )
    {
      VAR_5->style_flags |= VAR_1;
      VAR_10[1] = (char*)"Bold";
    }

    VAR_7 = FUNC_4( VAR_3, "SETWIDTH_NAME" );
    if ( VAR_7 && VAR_7->isString &&
         *(VAR_7->value.atom) &&
         !( *(VAR_7->value.atom) == 'N' || *(VAR_7->value.atom) == 'n' ) )
      VAR_10[3] = (char*)( VAR_7->value.atom );

    VAR_7 = FUNC_4( VAR_3, "ADD_STYLE_NAME" );
    if ( VAR_7 && VAR_7->isString &&
         *(VAR_7->value.atom) &&
         !( *(VAR_7->value.atom) == 'N' || *(VAR_7->value.atom) == 'n' ) )
      VAR_10[0] = (char*)( VAR_7->value.atom );

    for ( VAR_9 = 0, VAR_8 = 0; VAR_8 < 4; VAR_8++ )
    {
      VAR_11[VAR_8] = 0;
      if ( VAR_10[VAR_8] )
      {
        VAR_11[VAR_8] = FUNC_3( VAR_10[VAR_8] );
        VAR_9 += VAR_11[VAR_8] + 1;
      }
    }

    if ( VAR_9 == 0 )
    {
      VAR_10[0] = (char*)"Regular";
      VAR_11[0] = FUNC_3( VAR_10[0] );
      VAR_9 = VAR_11[0] + 1;
    }

    {
      char* VAR_12;


      if ( FUNC_0( VAR_5->style_name, VAR_9 ) )
        return VAR_4;

      VAR_12 = VAR_5->style_name;

      for ( VAR_8 = 0; VAR_8 < 4; VAR_8++ )
      {
        char* VAR_13 = VAR_10[VAR_8];


        VAR_9 = VAR_11[VAR_8];

        if ( !VAR_13 )
          continue;


        if ( VAR_12 != VAR_5->style_name )
          *VAR_12++ = ' ';

        FUNC_2( VAR_12, VAR_13, VAR_9 );



        if ( VAR_8 == 0 || VAR_8 == 3 )
        {
          size_t VAR_14;


          for ( VAR_14 = 0; VAR_14 < VAR_9; VAR_14++ )
            if ( VAR_12[VAR_14] == ' ' )
              VAR_12[VAR_14] = '-';
        }

        VAR_12 += VAR_9;
      }
      *VAR_12 = 0;
    }

    return VAR_4;
  }
