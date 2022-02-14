
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ul; } ;
typedef int GXV_Validator ;
typedef TYPE_1__* GXV_StateTable_GlyphOffsetCPtr ;
typedef int FT_UShort ;
typedef int FT_Bytes ;
typedef scalar_t__ FT_Byte ;
typedef int FT_Bool ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
  FUNC_3(
    FT_UShort VAR_0,
    FT_UShort VAR_1,
    GXV_StateTable_GlyphOffsetCPtr VAR_2,
    FT_Bytes VAR_3,
    FT_Bytes VAR_4,
    GXV_Validator VAR_5 )
  {
    FT_Byte VAR_6;
    FT_Byte VAR_7;
    FT_Byte VAR_8;
    FT_UShort VAR_9;

    FUNC_1( VAR_0 );
    VAR_6 = (FT_Byte)( ( VAR_1 >> 5 ) & 0x1F );
    VAR_7 = (FT_Byte)( VAR_1 & 0x001F );

    VAR_8 = (FT_Byte) ( VAR_2->ul >> 16 );
    VAR_9 = (FT_UShort)( VAR_2->ul );

    if ( VAR_8 && 0 != VAR_6 )
      FUNC_2( VAR_8,
                                                   VAR_6,
                                                   VAR_3, VAR_4,
                                                   VAR_5 );

    if ( VAR_9 && 0 != VAR_7 )
      FUNC_2( VAR_9,
                                                   VAR_7,
                                                   VAR_3, VAR_4,
                                                   VAR_5 );
  }
