
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ func; float base; int phase; int frequency; float amplitude; } ;
typedef TYPE_1__ waveForm_t ;
typedef int byte ;
struct TYPE_8__ {int shaderTime; int numVertexes; } ;
struct TYPE_7__ {float identityLight; } ;


 float FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 float FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_3( const waveForm_t *VAR_3, unsigned char *VAR_4 )
{
 int VAR_5;
 int VAR_6;
 float VAR_7;
 int *VAR_8 = ( int * ) VAR_4;
 byte VAR_9[4];


  if ( VAR_3->func == VAR_0 ) {
  VAR_7 = VAR_3->base + FUNC_1( 0, 0, 0, ( VAR_1.shaderTime + VAR_3->phase ) * VAR_3->frequency ) * VAR_3->amplitude;
 } else {
  VAR_7 = FUNC_0( VAR_3 ) * VAR_2.identityLight;
 }

 if ( VAR_7 < 0 ) {
  VAR_7 = 0;
 }
 else if ( VAR_7 > 1 ) {
  VAR_7 = 1;
 }

 VAR_6 = FUNC_2( 255 * VAR_7 );
 VAR_9[0] = VAR_9[1] = VAR_9[2] = VAR_6;
 VAR_9[3] = 255;
 VAR_6 = *(int *)VAR_9;

 for ( VAR_5 = 0; VAR_5 < VAR_1.numVertexes; VAR_5++, VAR_8++ ) {
  *VAR_8 = VAR_6;
 }
}
