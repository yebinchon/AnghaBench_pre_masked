
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_kern_Dialect ;
typedef int GXV_Validator ;
typedef int FT_UShort ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;

__attribute__((used)) static GXV_kern_Dialect
  FUNC_9( FT_UShort VAR_4,
                              FT_UShort* VAR_5,
                              GXV_Validator VAR_6 )
  {
    GXV_kern_Dialect VAR_7 = VAR_3;


    FUNC_0( "validating coverage" );

    FUNC_1(( "interpret coverage 0x%04x by Apple style\n", VAR_4 ));

    if ( FUNC_5( VAR_6 ) )
    {
      if ( FUNC_8( VAR_4,
                                                 VAR_5,
                                                 VAR_6 ) )
      {
        VAR_7 = VAR_1;
        goto Exit;
      }
    }

    if ( FUNC_4( VAR_6 ) && FUNC_2( VAR_6 ) )
    {
      if ( FUNC_6( VAR_4,
                                                     VAR_5,
                                                     VAR_6 ) )
      {
        VAR_7 = VAR_1;
        goto Exit;
      }
    }

    if ( FUNC_4( VAR_6 ) && FUNC_3( VAR_6 ) )
    {
      if ( FUNC_7( VAR_4,
                                                         VAR_5,
                                                         VAR_6 ) )
      {
        VAR_7 = VAR_2;
        goto Exit;
      }
    }

    FUNC_1(( "cannot interpret coverage, broken kern subtable\n" ));

  Exit:
    VAR_0;
    return VAR_7;
  }
