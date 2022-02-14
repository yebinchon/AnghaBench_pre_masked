
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t u; } ;
typedef int GXV_Validator ;
typedef TYPE_1__* GXV_LookupValueCPtr ;
typedef size_t FT_UShort ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;

__attribute__((used)) static void
  FUNC_3( FT_UShort VAR_5,
                                 GXV_LookupValueCPtr VAR_6,
                                 GXV_Validator VAR_7 )
  {
    FT_UShort VAR_8 = VAR_6->u;
    FT_UShort* VAR_9;

    FUNC_0( VAR_5 );


    FUNC_2( "lookup value" );

    if ( VAR_8 >= VAR_1 )
      VAR_0;

    VAR_9 = (FT_UShort*)FUNC_1( VAR_4 );
    if ( VAR_9 && VAR_9[VAR_8] == VAR_2 )
      VAR_0;

    VAR_3;
  }
