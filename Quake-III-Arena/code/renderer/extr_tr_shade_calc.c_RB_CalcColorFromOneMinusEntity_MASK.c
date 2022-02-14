
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* currentEntity; } ;
struct TYPE_7__ {int numVertexes; } ;
struct TYPE_5__ {int* shaderRGBA; } ;
struct TYPE_6__ {TYPE_1__ e; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_0( unsigned char *VAR_2 )
{
 int VAR_3;
 int *VAR_4 = ( int * ) VAR_2;
 unsigned char VAR_5[3];
 int VAR_6;

 if ( !VAR_0.currentEntity )
  return;

 VAR_5[0] = 255 - VAR_0.currentEntity->e.shaderRGBA[0];
 VAR_5[1] = 255 - VAR_0.currentEntity->e.shaderRGBA[1];
 VAR_5[2] = 255 - VAR_0.currentEntity->e.shaderRGBA[2];
 VAR_5[3] = 255 - VAR_0.currentEntity->e.shaderRGBA[3];

 VAR_6 = * ( int * ) VAR_5;

 for ( VAR_3 = 0; VAR_3 < VAR_1.numVertexes; VAR_3++, VAR_4++ )
 {
  *VAR_4 = * ( int * ) VAR_5;
 }
}
