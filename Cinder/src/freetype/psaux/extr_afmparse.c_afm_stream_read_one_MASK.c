
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
typedef TYPE_1__* AFM_Stream ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static char*
  FUNC_8( AFM_Stream VAR_3 )
  {
    char* VAR_4;


    FUNC_7( VAR_3 );
    if ( FUNC_5( VAR_3 ) )
      return ((void*)0);

    VAR_4 = FUNC_6( VAR_3 );

    while ( 1 )
    {
      int VAR_5 = FUNC_0();


      if ( FUNC_4( VAR_5 ) )
        break;
      else if ( FUNC_2( VAR_5 ) )
      {
        VAR_3->status = VAR_2;
        break;
      }
      else if ( FUNC_3( VAR_5 ) )
      {
        VAR_3->status = VAR_0;
        break;
      }
      else if ( FUNC_1( VAR_5 ) )
      {
        VAR_3->status = VAR_1;
        break;
      }
    }

    return VAR_4;
  }
