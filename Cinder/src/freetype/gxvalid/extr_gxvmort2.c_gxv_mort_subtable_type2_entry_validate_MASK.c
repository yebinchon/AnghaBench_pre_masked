
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_Validator ;
typedef int GXV_StateTable_GlyphOffsetCPtr ;
typedef int FT_UShort ;
typedef int FT_Bytes ;
typedef int FT_Byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void
  FUNC_2(
    FT_Byte VAR_0,
    FT_UShort VAR_1,
    GXV_StateTable_GlyphOffsetCPtr VAR_2,
    FT_Bytes VAR_3,
    FT_Bytes VAR_4,
    GXV_Validator VAR_5 )
  {




    FT_UShort VAR_6;

    FUNC_0( VAR_0 );
    FUNC_0( VAR_2 );
    FUNC_0( VAR_4 );







    VAR_6 = (FT_UShort)( VAR_1 & 0x3FFFU );

    if ( 0 < VAR_6 )
      FUNC_1( VAR_3, VAR_6,
                                                        VAR_5 );
  }
