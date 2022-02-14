
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * configstrings; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_1__ VAR_2 ;

void FUNC_2( int VAR_3, char *VAR_4, int VAR_5 ) {
 if ( VAR_5 < 1 ) {
  FUNC_0( VAR_0, "SV_GetConfigstring: bufferSize == %i", VAR_5 );
 }
 if ( VAR_3 < 0 || VAR_3 >= VAR_1 ) {
  FUNC_0 (VAR_0, "SV_GetConfigstring: bad index %i\n", VAR_3);
 }
 if ( !VAR_2.configstrings[VAR_3] ) {
  VAR_4[0] = 0;
  return;
 }

 FUNC_1( VAR_4, VAR_2.configstrings[VAR_3], VAR_5 );
}
