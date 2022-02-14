
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int h; } ;


 int FUNC_0 (int ,int,int,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5( int VAR_6, int VAR_7, int VAR_8 )
{
 VAR_3.w = VAR_6;
 VAR_3.h = VAR_7;

 if ( FUNC_1( VAR_0 ) < 0 )
  FUNC_4( "SDL initialization failed" );
 FUNC_3( VAR_1 );

 VAR_4 = FUNC_2( VAR_6, VAR_7, 0, 0 );
 VAR_5 = FUNC_0( VAR_2, VAR_6, VAR_7, VAR_8, 0, 0, 0, 0 );
 if ( !VAR_4 || !VAR_5 )
  FUNC_4( "SDL initialization failed" );
}
