
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* font; } ;
struct TYPE_7__ {int ascender; int descender; int max_advance; } ;
struct TYPE_10__ {TYPE_1__ metrics; int face; } ;
struct TYPE_9__ {int ascent; int pixel_height; int max_width; } ;
struct TYPE_8__ {TYPE_3__ header; } ;
typedef TYPE_3__* FT_WinFNT_Header ;
typedef int FT_ULong ;
typedef TYPE_4__* FT_Size ;
typedef int FT_Error ;
typedef TYPE_5__* FNT_Face ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static FT_Error
  FUNC_2( FT_Size VAR_1,
                   FT_ULong VAR_2 )
  {
    FNT_Face VAR_3 = (FNT_Face)VAR_1->face;
    FT_WinFNT_Header VAR_4 = &VAR_3->font->header;

    FUNC_1( VAR_2 );


    FUNC_0( VAR_1->face, 0 );

    VAR_1->metrics.ascender = VAR_4->ascent * 64;
    VAR_1->metrics.descender = -( VAR_4->pixel_height -
                                   VAR_4->ascent ) * 64;
    VAR_1->metrics.max_advance = VAR_4->max_width * 64;

    return VAR_0;
  }
