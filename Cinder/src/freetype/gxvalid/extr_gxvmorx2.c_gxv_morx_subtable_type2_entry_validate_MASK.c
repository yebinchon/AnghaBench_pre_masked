
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u; } ;
typedef int GXV_Validator ;
typedef TYPE_1__* GXV_StateTable_GlyphOffsetCPtr ;
typedef int FT_UShort ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static void
  FUNC_3(
    FT_UShort VAR_0,
    FT_UShort VAR_1,
    GXV_StateTable_GlyphOffsetCPtr VAR_2,
    FT_Bytes VAR_3,
    FT_Bytes VAR_4,
    GXV_Validator VAR_5 )
  {





    FT_UShort VAR_6;
    FT_UShort VAR_7;

    FUNC_0( VAR_0 );
    FUNC_0( VAR_4 );
    VAR_6 = (FT_UShort)( VAR_1 & 0x1FFF );
    VAR_7 = VAR_2->u;

    if ( VAR_6 > 0 )
      FUNC_1(( "  reserved 14bit is non-zero\n" ));

    if ( 0 < VAR_7 )
      FUNC_2(
        VAR_3, VAR_7, VAR_5 );
  }
