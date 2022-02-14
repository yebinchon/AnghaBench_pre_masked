
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_18__ {TYPE_4__* bundle; } ;
typedef TYPE_6__ shaderStage_t ;
struct TYPE_21__ {TYPE_3__* currentEntity; } ;
struct TYPE_20__ {int (* Error ) (int ,char*,int,int ) ;} ;
struct TYPE_17__ {void**** texcoords; } ;
struct TYPE_19__ {int numVertexes; TYPE_1__* shader; TYPE_5__ svars; int * xyz; void**** texCoords; } ;
struct TYPE_16__ {int tcGen; int numTexMods; TYPE_10__* texMods; int * tcGenVectors; } ;
struct TYPE_14__ {int shaderTexCoord; } ;
struct TYPE_15__ {TYPE_2__ e; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_12__ {int type; int rotateSpeed; int wave; int scale; int scroll; } ;


 int FUNC_0 (void***,int ,int) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (float*) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (int ,float*) ;
 int FUNC_5 (int ,float*) ;
 int FUNC_6 (int ,float*) ;
 int FUNC_7 (int *,float*) ;
 int FUNC_8 (TYPE_10__*,float*) ;
 int FUNC_9 (int *,float*) ;
 int VAR_2 ;
 TYPE_9__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 int FUNC_10 (int ,char*,int,int ) ;
 TYPE_7__ VAR_5 ;

__attribute__((used)) static void FUNC_11( shaderStage_t *VAR_6 ) {
 int VAR_7;
 int VAR_8;

 for ( VAR_8 = 0; VAR_8 < VAR_1; VAR_8++ ) {
  int VAR_9;




  switch ( VAR_6->bundle[VAR_8].tcGen )
  {
  case 139:
   FUNC_0( VAR_5.svars.texcoords[VAR_8], 0, sizeof( float ) * 2 * VAR_5.numVertexes );
   break;
  case 137:
   for ( VAR_7 = 0 ; VAR_7 < VAR_5.numVertexes ; VAR_7++ ) {
    VAR_5.svars.texcoords[VAR_8][VAR_7][0] = VAR_5.texCoords[VAR_7][0][0];
    VAR_5.svars.texcoords[VAR_8][VAR_7][1] = VAR_5.texCoords[VAR_7][0][1];
   }
   break;
  case 138:
   for ( VAR_7 = 0 ; VAR_7 < VAR_5.numVertexes ; VAR_7++ ) {
    VAR_5.svars.texcoords[VAR_8][VAR_7][0] = VAR_5.texCoords[VAR_7][1][0];
    VAR_5.svars.texcoords[VAR_8][VAR_7][1] = VAR_5.texCoords[VAR_7][1][1];
   }
   break;
  case 136:
   for ( VAR_7 = 0 ; VAR_7 < VAR_5.numVertexes ; VAR_7++ ) {
    VAR_5.svars.texcoords[VAR_8][VAR_7][0] = FUNC_1( VAR_5.xyz[VAR_7], VAR_6->bundle[VAR_8].tcGenVectors[0] );
    VAR_5.svars.texcoords[VAR_8][VAR_7][1] = FUNC_1( VAR_5.xyz[VAR_7], VAR_6->bundle[VAR_8].tcGenVectors[1] );
   }
   break;
  case 140:
   FUNC_3( ( float * ) VAR_5.svars.texcoords[VAR_8] );
   break;
  case 141:
   FUNC_2( ( float * ) VAR_5.svars.texcoords[VAR_8] );
   break;
  case 142:
   return;
  }




  for ( VAR_9 = 0; VAR_9 < VAR_6->bundle[VAR_8].numTexMods ; VAR_9++ ) {
   switch ( VAR_6->bundle[VAR_8].texMods[VAR_9].type )
   {
   case 134:
    VAR_9 = VAR_2;
    break;

   case 128:
    FUNC_9( &VAR_6->bundle[VAR_8].texMods[VAR_9].wave,
                       ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   case 135:
    FUNC_6( VAR_3.currentEntity->e.shaderTexCoord,
          ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   case 131:
    FUNC_6( VAR_6->bundle[VAR_8].texMods[VAR_9].scroll,
           ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   case 132:
    FUNC_5( VAR_6->bundle[VAR_8].texMods[VAR_9].scale,
          ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   case 130:
    FUNC_7( &VAR_6->bundle[VAR_8].texMods[VAR_9].wave,
                     ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   case 129:
    FUNC_8( &VAR_6->bundle[VAR_8].texMods[VAR_9],
                       ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   case 133:
    FUNC_4( VAR_6->bundle[VAR_8].texMods[VAR_9].rotateSpeed,
          ( float * ) VAR_5.svars.texcoords[VAR_8] );
    break;

   default:
    VAR_4.Error( VAR_0, "ERROR: unknown texmod '%d' in shader '%s'\n", VAR_6->bundle[VAR_8].texMods[VAR_9].type, VAR_5.shader->name );
    break;
   }
  }
 }
}
