
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ num_glyphs; } ;
struct TYPE_17__ {int horiBearingY; scalar_t__ horiBearingX; void* horiAdvance; void* height; void* width; } ;
struct TYPE_16__ {TYPE_5__* font; } ;
struct TYPE_11__ {int default_char; int version; int file_size; int pixel_height; int ascent; } ;
struct TYPE_15__ {TYPE_1__ header; int * fnt_frame; } ;
struct TYPE_14__ {int width; int rows; int pitch; scalar_t__ buffer; int pixel_mode; } ;
struct TYPE_13__ {int bitmap_top; TYPE_2__* internal; int face; TYPE_7__ metrics; int format; scalar_t__ bitmap_left; TYPE_4__ bitmap; } ;
struct TYPE_12__ {int flags; } ;
typedef int FT_ULong ;
typedef int FT_UInt ;
typedef int FT_Size ;
typedef void* FT_Pos ;
typedef int FT_Memory ;
typedef int FT_Int32 ;
typedef TYPE_3__* FT_GlyphSlot ;
typedef int FT_Error ;
typedef int FT_Byte ;
typedef scalar_t__ FT_Bool ;
typedef TYPE_4__ FT_Bitmap ;
typedef TYPE_5__* FNT_Font ;
typedef TYPE_6__* FNT_Face ;


 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_8__* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_7__*,void*) ;

__attribute__((used)) static FT_Error
  FUNC_11( FT_GlyphSlot VAR_8,
                  FT_Size VAR_9,
                  FT_UInt VAR_10,
                  FT_Int32 VAR_11 )
  {
    FNT_Face VAR_12 = (FNT_Face)FUNC_6( VAR_9 );
    FNT_Font VAR_13;
    FT_Error VAR_14 = VAR_0;
    FT_Byte* VAR_15;
    FT_UInt VAR_16;
    FT_Bitmap* VAR_17 = &VAR_8->bitmap;
    FT_ULong VAR_18;
    FT_Bool VAR_19;


    if ( !VAR_12 )
    {
      VAR_14 = FUNC_7( VAR_6 );
      goto Exit;
    }

    VAR_13 = VAR_12->font;

    if ( !VAR_13 ||
         VAR_10 >= (FT_UInt)( FUNC_2( VAR_12 )->num_glyphs ) )
    {
      VAR_14 = FUNC_7( VAR_5 );
      goto Exit;
    }

    FUNC_8(( "FNT_Load_Glyph: glyph index %d\n", VAR_10 ));

    if ( VAR_10 > 0 )
      VAR_10--;
    else
      VAR_10 = VAR_13->header.default_char;

    VAR_19 = FUNC_1( VAR_13->header.version == 0x300 );
    VAR_16 = VAR_19 ? 6 : 4;


    VAR_18 = ( VAR_19 ? 148 : 118 ) + VAR_16 * VAR_10;

    if ( VAR_18 >= VAR_13->header.file_size - 2 - ( VAR_19 ? 4 : 2 ) )
    {
      FUNC_9(( "invalid FNT offset\n" ));
      VAR_14 = FUNC_7( VAR_7 );
      goto Exit;
    }

    VAR_15 = VAR_13->fnt_frame + VAR_18;

    VAR_17->width = FUNC_5( VAR_15 );


    if ( VAR_19 )
      VAR_18 = FUNC_4( VAR_15 );
    else
      VAR_18 = FUNC_5( VAR_15 );

    if ( VAR_18 >= VAR_13->header.file_size )
    {
      FUNC_9(( "invalid FNT offset\n" ));
      VAR_14 = FUNC_7( VAR_7 );
      goto Exit;
    }

    VAR_17->rows = VAR_13->header.pixel_height;
    VAR_17->pixel_mode = VAR_4;

    VAR_8->bitmap_left = 0;
    VAR_8->bitmap_top = VAR_13->header.ascent;
    VAR_8->format = VAR_1;


    VAR_8->metrics.width = (FT_Pos)( VAR_17->width << 6 );
    VAR_8->metrics.height = (FT_Pos)( VAR_17->rows << 6 );
    VAR_8->metrics.horiAdvance = (FT_Pos)( VAR_17->width << 6 );
    VAR_8->metrics.horiBearingX = 0;
    VAR_8->metrics.horiBearingY = VAR_8->bitmap_top << 6;

    FUNC_10( &VAR_8->metrics,
                                    (FT_Pos)( VAR_17->rows << 6 ) );

    if ( VAR_11 & VAR_3 )
      goto Exit;


    VAR_15 = VAR_13->fnt_frame + + VAR_18;


    {
      FT_Memory VAR_20 = FUNC_3( VAR_8->face );
      FT_UInt VAR_21 = ( VAR_17->width + 7 ) >> 3;
      FT_Byte* VAR_22;
      FT_Byte* VAR_23;


      VAR_17->pitch = (int)VAR_21;
      if ( !VAR_21 ||
           VAR_18 + VAR_21 * VAR_17->rows > VAR_13->header.file_size )
      {
        FUNC_9(( "invalid bitmap width\n" ));
        VAR_14 = FUNC_7( VAR_7 );
        goto Exit;
      }



      if ( FUNC_0( VAR_17->buffer, VAR_17->rows, VAR_21 ) )
        goto Exit;

      VAR_22 = (FT_Byte*)VAR_17->buffer;

      for ( ; VAR_21 > 0; VAR_21--, VAR_22++ )
      {
        FT_Byte* VAR_24 = VAR_15 + VAR_17->rows;


        for ( VAR_23 = VAR_22; VAR_15 < VAR_24; VAR_15++, VAR_23 += VAR_17->pitch )
          *VAR_23 = *VAR_15;
      }

      VAR_8->internal->flags = VAR_2;
    }

  Exit:
    return VAR_14;
  }
