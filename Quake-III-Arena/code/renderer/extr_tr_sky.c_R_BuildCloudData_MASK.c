
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cloudHeight; } ;
struct TYPE_8__ {TYPE_1__ sky; int isSky; } ;
typedef TYPE_2__ shader_t ;
struct TYPE_9__ {TYPE_2__* shader; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_10__ {int * xstages; scalar_t__ numVertexes; scalar_t__ numIndexes; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 double VAR_1 ;
 double VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_2( shaderCommands_t *VAR_4 )
{
 int VAR_5;
 shader_t *VAR_6;

 VAR_6 = VAR_4->shader;

 FUNC_1( VAR_6->isSky );

 VAR_2 = 1.0 / 256.0f;
 VAR_1 = 255.0 / 256.0f;


 VAR_3.numIndexes = 0;
 VAR_3.numVertexes = 0;

 if ( VAR_4->shader->sky.cloudHeight )
 {
  for ( VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
  {
   if ( !VAR_3.xstages[VAR_5] ) {
    break;
   }
   FUNC_0( VAR_4->shader, VAR_5 );
  }
 }
}
