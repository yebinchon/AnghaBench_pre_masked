
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float shaderTime; int numVertexes; } ;


 float FUNC_0 (float) ;
 TYPE_1__ VAR_0 ;

void FUNC_1( const float VAR_1[2], float *VAR_2 )
{
 int VAR_3;
 float VAR_4 = VAR_0.shaderTime;
 float VAR_5, VAR_6;

 VAR_5 = VAR_1[0] * VAR_4;
 VAR_6 = VAR_1[1] * VAR_4;



 VAR_5 = VAR_5 - FUNC_0( VAR_5 );
 VAR_6 = VAR_6 - FUNC_0( VAR_6 );

 for ( VAR_3 = 0; VAR_3 < VAR_0.numVertexes; VAR_3++, VAR_2 += 2 )
 {
  VAR_2[0] += VAR_5;
  VAR_2[1] += VAR_6;
 }
}
