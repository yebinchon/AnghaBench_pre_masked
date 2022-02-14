
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_Bytes ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_0,
                                        FT_Bytes VAR_1,
                                        GXV_Validator VAR_2 )
  {
    FT_Bytes VAR_3 = VAR_0;
    FT_UShort VAR_4;


    FUNC_1( 2 );
    VAR_4 = FUNC_0( VAR_3 );

    FUNC_2( VAR_4, "type1:addGlyph", VAR_2 );

    VAR_2->subtable_length = (FT_ULong)( VAR_3 - VAR_0 );
  }
