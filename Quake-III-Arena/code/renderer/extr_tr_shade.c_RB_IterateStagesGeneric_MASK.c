
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_17__ {TYPE_10__* bundle; int stateBits; } ;
typedef TYPE_2__ shaderStage_t ;
struct TYPE_16__ {int * texcoords; int colors; } ;
struct TYPE_18__ {int indexes; int numIndexes; TYPE_1__ svars; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_24__ {scalar_t__ hardwareType; } ;
struct TYPE_23__ {scalar_t__ integer; } ;
struct TYPE_22__ {int integer; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {TYPE_2__** xstages; } ;
struct TYPE_19__ {int whiteImage; } ;
struct TYPE_15__ {scalar_t__* image; scalar_t__ vertexLightmap; scalar_t__ isLightmap; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (int ,int ) ;
 TYPE_9__ VAR_5 ;
 int FUNC_7 (int,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ,int ,int ) ;
 TYPE_8__* VAR_6 ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;

__attribute__((used)) static void FUNC_10( shaderCommands_t *VAR_12 )
{
 int VAR_13;

 for ( VAR_13 = 0; VAR_13 < VAR_4; VAR_13++ )
 {
  shaderStage_t *VAR_14 = VAR_10.xstages[VAR_13];

  if ( !VAR_14 )
  {
   break;
  }

  FUNC_0( VAR_14 );
  FUNC_1( VAR_14 );

  if ( !VAR_9 )
  {
   FUNC_8( VAR_1 );
   FUNC_7( 4, VAR_3, 0, VAR_12->svars.colors );
  }




  if ( VAR_14->bundle[1].image[0] != 0 )
  {
   FUNC_2( VAR_12, VAR_13 );
  }
  else
  {
   if ( !VAR_9 )
   {
    FUNC_9( 2, VAR_2, 0, VAR_12->svars.texcoords[0] );
   }




   if ( VAR_14->bundle[0].vertexLightmap && ( (VAR_8->integer && !VAR_7->integer) || VAR_5.hardwareType == VAR_0 ) && VAR_6->integer )
   {
    FUNC_3( VAR_11.whiteImage );
   }
   else
    FUNC_5( &VAR_14->bundle[0] );

   FUNC_4( VAR_14->stateBits );




   FUNC_6( VAR_12->numIndexes, VAR_12->indexes );
  }

  if ( VAR_6->integer && ( VAR_14->bundle[0].isLightmap || VAR_14->bundle[1].isLightmap || VAR_14->bundle[0].vertexLightmap ) )
  {
   break;
  }
 }
}
