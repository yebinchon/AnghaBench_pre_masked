
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_glyphs; scalar_t__* charstrings; scalar_t__** glyph_names; } ;
struct TYPE_5__ {TYPE_1__ type1; } ;
typedef TYPE_2__* T42_Face ;
typedef int FT_UInt ;
typedef scalar_t__ FT_String ;
typedef size_t FT_Int ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static FT_UInt
  FUNC_2( T42_Face VAR_0,
                      FT_String* VAR_1 )
  {
    FT_Int VAR_2;


    for ( VAR_2 = 0; VAR_2 < VAR_0->type1.num_glyphs; VAR_2++ )
    {
      FT_String* VAR_3 = VAR_0->type1.glyph_names[VAR_2];


      if ( VAR_1[0] == VAR_3[0] && !FUNC_0( VAR_1, VAR_3 ) )
        return (FT_UInt)FUNC_1( (const char *)VAR_0->type1.charstrings[VAR_2],
                                   ((void*)0), 10 );
    }

    return 0;
  }
