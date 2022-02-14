
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* font; } ;
struct TYPE_17__ {int y_ppem; } ;
struct TYPE_16__ {TYPE_1__* face; } ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {int pixel_height; } ;
struct TYPE_13__ {TYPE_3__ header; } ;
struct TYPE_12__ {TYPE_6__* available_sizes; } ;
typedef TYPE_3__* FT_WinFNT_Header ;
typedef TYPE_4__* FT_Size_Request ;
typedef TYPE_5__* FT_Size ;
typedef int FT_Long ;
typedef scalar_t__ FT_Error ;
typedef TYPE_6__ FT_Bitmap_Size ;
typedef TYPE_7__* FNT_Face ;


 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;


 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static FT_Error
  FUNC_4( FT_Size VAR_3,
                    FT_Size_Request VAR_4 )
  {
    FNT_Face VAR_5 = (FNT_Face)VAR_3->face;
    FT_WinFNT_Header VAR_6 = &VAR_5->font->header;
    FT_Bitmap_Size* VAR_7 = VAR_3->face->available_sizes;
    FT_Error VAR_8 = FUNC_1( VAR_1 );
    FT_Long VAR_9;


    VAR_9 = FUNC_2( VAR_4 );
    VAR_9 = ( VAR_9 + 32 ) >> 6;

    switch ( VAR_4->type )
    {
    case 129:
      if ( VAR_9 == ( ( VAR_7->y_ppem + 32 ) >> 6 ) )
        VAR_8 = VAR_0;
      break;

    case 128:
      if ( VAR_9 == VAR_6->pixel_height )
        VAR_8 = VAR_0;
      break;

    default:
      VAR_8 = FUNC_3( VAR_2 );
      break;
    }

    if ( VAR_8 )
      return VAR_8;
    else
      return FUNC_0( VAR_3, 0 );
  }
