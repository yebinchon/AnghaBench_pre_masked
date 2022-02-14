
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numVertexes; } ;


 int FUNC_0 (float*) ;
 double FUNC_1 (float,float) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2( unsigned char *VAR_2 ) {
 int VAR_3;
 float VAR_4[VAR_0][2];




 FUNC_0( VAR_4[0] );

 for ( VAR_3 = 0; VAR_3 < VAR_1.numVertexes; VAR_3++, VAR_2 += 4 ) {
  float VAR_5 = 1.0 - FUNC_1( VAR_4[VAR_3][0], VAR_4[VAR_3][1] );
  VAR_2[0] *= VAR_5;
  VAR_2[1] *= VAR_5;
  VAR_2[2] *= VAR_5;
  VAR_2[3] *= VAR_5;
 }
}
