
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* horiBearingX; void* horiBearingY; void* vertBearingX; void* width; void* vertBearingY; void* height; void* vertAdvance; void* horiAdvance; } ;
struct TYPE_5__ {TYPE_1__ metrics; } ;
typedef void* FT_Pos ;
typedef TYPE_1__ FT_Glyph_Metrics ;
typedef TYPE_2__* FT_GlyphSlot ;
typedef scalar_t__ FT_Bool ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void*,void*) ;

__attribute__((used)) static void
  FUNC_5( FT_GlyphSlot VAR_0,
                                 FT_Bool VAR_1 )
  {
    FT_Glyph_Metrics* VAR_2 = &VAR_0->metrics;
    FT_Pos VAR_3, VAR_4;


    if ( VAR_1 )
    {
      VAR_2->horiBearingX = FUNC_2( VAR_2->horiBearingX );
      VAR_2->horiBearingY = FUNC_1( VAR_2->horiBearingY );

      VAR_3 = FUNC_1( FUNC_0( VAR_2->vertBearingX,
                                           VAR_2->width ) );
      VAR_4 = FUNC_1( FUNC_0( VAR_2->vertBearingY,
                                           VAR_2->height ) );

      VAR_2->vertBearingX = FUNC_2( VAR_2->vertBearingX );
      VAR_2->vertBearingY = FUNC_2( VAR_2->vertBearingY );

      VAR_2->width = FUNC_4( VAR_3,
                                  VAR_2->vertBearingX );
      VAR_2->height = FUNC_4( VAR_4,
                                  VAR_2->vertBearingY );
    }
    else
    {
      VAR_2->vertBearingX = FUNC_2( VAR_2->vertBearingX );
      VAR_2->vertBearingY = FUNC_2( VAR_2->vertBearingY );

      VAR_3 = FUNC_1( FUNC_0( VAR_2->horiBearingX,
                                           VAR_2->width ) );
      VAR_4 = FUNC_2( FUNC_4( VAR_2->horiBearingY,
                                       VAR_2->height ) );

      VAR_2->horiBearingX = FUNC_2( VAR_2->horiBearingX );
      VAR_2->horiBearingY = FUNC_1( VAR_2->horiBearingY );

      VAR_2->width = FUNC_4( VAR_3,
                                  VAR_2->horiBearingX );
      VAR_2->height = FUNC_4( VAR_2->horiBearingY,
                                  VAR_4 );
    }

    VAR_2->horiAdvance = FUNC_3( VAR_2->horiAdvance );
    VAR_2->vertAdvance = FUNC_3( VAR_2->vertAdvance );
  }
