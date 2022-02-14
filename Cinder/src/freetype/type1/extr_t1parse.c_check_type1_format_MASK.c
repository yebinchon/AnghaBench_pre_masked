
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor; } ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef TYPE_1__* FT_Stream ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,char const*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int*,int *) ;

__attribute__((used)) static FT_Error
  FUNC_6( FT_Stream VAR_2,
                      const char* VAR_3,
                      size_t VAR_4 )
  {
    FT_Error VAR_5;
    FT_UShort VAR_6;
    FT_ULong VAR_7;


    if ( FUNC_2( 0 ) )
      goto Exit;

    VAR_5 = FUNC_5( VAR_2, &VAR_6, &VAR_7 );
    if ( VAR_5 )
      goto Exit;




    if ( VAR_6 != 0x8001U && FUNC_2( 0 ) )
      goto Exit;

    if ( !FUNC_0( VAR_4 ) )
    {
      VAR_5 = VAR_0;

      if ( FUNC_4( VAR_2->cursor, VAR_3, VAR_4 ) != 0 )
        VAR_5 = FUNC_3( VAR_1 );

      FUNC_1();
    }

  Exit:
    return VAR_5;
  }
