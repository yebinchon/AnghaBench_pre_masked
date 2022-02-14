
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_ULong ;
typedef int FT_UInt32 ;
typedef int FT_UInt ;
typedef int FT_Stream ;
typedef int FT_Error ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static FT_UInt32
  FUNC_4( FT_Stream VAR_0,
                          FT_ULong VAR_1 )
  {
    FT_Error VAR_2;
    FT_UInt32 VAR_3 = 0;
    FT_UInt VAR_4;


    if ( FUNC_0( VAR_1 ) )
      return 0;

    for ( ; VAR_1 > 3; VAR_1 -= 4 )
      VAR_3 += (FT_UInt32)FUNC_3();

    for ( VAR_4 = 3; VAR_1 > 0; VAR_1--, VAR_4-- )
      VAR_3 += (FT_UInt32)FUNC_2() << ( VAR_4 * 8 );

    FUNC_1();

    return VAR_3;
  }
