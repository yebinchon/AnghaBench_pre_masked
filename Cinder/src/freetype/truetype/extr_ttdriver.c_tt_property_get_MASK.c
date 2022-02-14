
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interpreter_version; } ;
typedef TYPE_1__* TT_Driver ;
typedef int FT_UInt ;
typedef int FT_Module ;
typedef int FT_Error ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_Module VAR_2,
                   const char* VAR_3,
                   const void* VAR_4 )
  {
    FT_Error VAR_5 = VAR_0;
    TT_Driver VAR_6 = (TT_Driver)VAR_2;

    FT_UInt VAR_7 = VAR_6->interpreter_version;


    if ( !FUNC_2( VAR_3, "interpreter-version" ) )
    {
      FT_UInt* VAR_8 = (FT_UInt*)VAR_4;


      *VAR_8 = VAR_7;

      return VAR_5;
    }

    FUNC_1(( "tt_property_get: missing property `%s'\n",
                VAR_3 ));
    return FUNC_0( VAR_1 );
  }
