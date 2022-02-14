
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_3,
                                        FT_Bytes VAR_4,
                                        GXV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_3;
    FT_Bytes VAR_7 = VAR_3 + FUNC_0( VAR_2 );
    FT_UInt VAR_8;


    FUNC_1( "just justDeltaClusters" );

    if ( VAR_4 <= VAR_7 )
      VAR_0;

    for ( VAR_8 = 0; VAR_6 <= VAR_7; VAR_8++ )
    {
      FUNC_2( VAR_6, VAR_4, VAR_5 );
      VAR_6 += VAR_5->subtable_length;
    }

    VAR_5->subtable_length = (FT_ULong)( VAR_6 - VAR_3 );

    VAR_1;
  }
