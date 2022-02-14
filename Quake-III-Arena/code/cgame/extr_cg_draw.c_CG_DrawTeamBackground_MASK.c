
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_3__ {int teamStatusBar; } ;
struct TYPE_4__ {TYPE_1__ media; } ;


 int FUNC_0 (int,int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (float*) ;

void FUNC_2( int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7, int VAR_8 )
{
 vec4_t VAR_9;

 VAR_9[3] = VAR_7;
 if ( VAR_8 == VAR_1 ) {
  VAR_9[0] = 1;
  VAR_9[1] = 0;
  VAR_9[2] = 0;
 } else if ( VAR_8 == VAR_0 ) {
  VAR_9[0] = 0;
  VAR_9[1] = 0;
  VAR_9[2] = 1;
 } else {
  return;
 }
 FUNC_1( VAR_9 );
 FUNC_0( VAR_3, VAR_4, VAR_5, VAR_6, VAR_2.media.teamStatusBar );
 FUNC_1( ((void*)0) );
}
