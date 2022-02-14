
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_glyphs; int ** glyph_names; } ;
struct TYPE_5__ {TYPE_1__ type1; } ;
typedef TYPE_2__* T1_Face ;
typedef int FT_UInt ;
typedef int FT_String ;
typedef size_t FT_Int ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static FT_UInt
  FUNC_1( T1_Face VAR_0,
                     FT_String* VAR_1 )
  {
    FT_Int VAR_2;


    for ( VAR_2 = 0; VAR_2 < VAR_0->type1.num_glyphs; VAR_2++ )
    {
      FT_String* VAR_3 = VAR_0->type1.glyph_names[VAR_2];


      if ( !FUNC_0( VAR_1, VAR_3 ) )
        return (FT_UInt)VAR_2;
    }

    return 0;
  }
