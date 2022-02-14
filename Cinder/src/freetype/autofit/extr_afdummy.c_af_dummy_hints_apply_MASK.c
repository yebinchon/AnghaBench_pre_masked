
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt ;
typedef int FT_Outline ;
typedef int FT_Error ;
typedef int AF_GlyphHints ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_UInt VAR_0,
                        AF_GlyphHints VAR_1,
                        FT_Outline* VAR_2 )
  {
    FT_Error VAR_3;

    FUNC_0( VAR_0 );


    VAR_3 = FUNC_1( VAR_1, VAR_2 );
    if ( !VAR_3 )
      FUNC_2( VAR_1, VAR_2 );

    return VAR_3;
  }
