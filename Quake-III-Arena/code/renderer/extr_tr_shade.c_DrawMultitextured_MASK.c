
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int * bundle; int stateBits; } ;
typedef TYPE_4__ shaderStage_t ;
struct TYPE_12__ {int * texcoords; } ;
struct TYPE_14__ {int indexes; int numIndexes; TYPE_3__ svars; } ;
typedef TYPE_5__ shaderCommands_t ;
struct TYPE_10__ {scalar_t__ isPortal; } ;
struct TYPE_17__ {TYPE_1__ viewParms; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {TYPE_2__* shader; TYPE_4__** xstages; } ;
struct TYPE_11__ {int multitextureEnv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 TYPE_8__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int ,int ,int ) ;
 TYPE_7__* VAR_7 ;
 TYPE_6__ VAR_8 ;

__attribute__((used)) static void FUNC_10( shaderCommands_t *VAR_9, int VAR_10 ) {
 shaderStage_t *VAR_11;

 VAR_11 = VAR_8.xstages[VAR_10];

 FUNC_1( VAR_11->stateBits );



 if ( VAR_6.viewParms.isPortal ) {
  FUNC_8( VAR_2, VAR_0 );
 }




 FUNC_0( 0 );
 FUNC_9( 2, VAR_1, 0, VAR_9->svars.texcoords[0] );
 FUNC_3( &VAR_11->bundle[0] );




 FUNC_0( 1 );
 FUNC_6( VAR_4 );
 FUNC_7( VAR_5 );

 if ( VAR_7->integer ) {
  FUNC_2( VAR_3 );
 } else {
  FUNC_2( VAR_8.shader->multitextureEnv );
 }

 FUNC_9( 2, VAR_1, 0, VAR_9->svars.texcoords[1] );

 FUNC_3( &VAR_11->bundle[1] );

 FUNC_4( VAR_9->numIndexes, VAR_9->indexes );





 FUNC_5( VAR_4 );

 FUNC_0( 0 );
}
