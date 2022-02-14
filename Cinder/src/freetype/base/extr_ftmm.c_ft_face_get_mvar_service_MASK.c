
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * FT_Service_MetricsVariations ;
typedef int FT_Face ;
typedef int FT_Error ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static FT_Error
  FUNC_4( FT_Face VAR_4,
                            FT_Service_MetricsVariations *VAR_5 )
  {
    FT_Error VAR_6;


    *VAR_5 = ((void*)0);

    if ( !VAR_4 )
      return FUNC_3( VAR_2 );

    VAR_6 = FUNC_0( VAR_1 );

    if ( FUNC_2( VAR_4 ) )
    {
      FUNC_1( VAR_4,
                              *VAR_5,
                              VAR_3 );

      if ( *VAR_5 )
        VAR_6 = VAR_0;
    }

    return VAR_6;
  }
