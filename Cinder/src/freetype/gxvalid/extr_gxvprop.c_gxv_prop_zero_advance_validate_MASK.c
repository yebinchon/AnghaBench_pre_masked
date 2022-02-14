
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* glyph; } ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_9__ {TYPE_1__ advance; } ;
struct TYPE_8__ {TYPE_4__* face; } ;
typedef TYPE_2__* GXV_Validator ;
typedef int FT_UShort ;
typedef scalar_t__ FT_Pos ;
typedef TYPE_3__* FT_GlyphSlot ;
typedef TYPE_4__* FT_Face ;
typedef scalar_t__ FT_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
  FUNC_3( FT_UShort VAR_4,
                                  GXV_Validator VAR_5 )
  {
    FT_Face VAR_6;
    FT_Error VAR_7;
    FT_GlyphSlot VAR_8;


    FUNC_1( "zero advance" );

    VAR_6 = VAR_5->face;

    VAR_7 = FUNC_0( VAR_6,
                           VAR_4,
                           VAR_2 );
    if ( VAR_7 )
      VAR_1;

    VAR_8 = VAR_6->glyph;

    if ( VAR_8->advance.x != (FT_Pos)0 ||
         VAR_8->advance.y != (FT_Pos)0 )
    {
      FUNC_2(( "  found non-zero advance in zero-advance glyph\n" ));
      VAR_0;
    }

    VAR_3;
  }
