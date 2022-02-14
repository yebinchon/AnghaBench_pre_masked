
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int colorInt; } ;
typedef TYPE_4__ fog_t ;
struct TYPE_8__ {scalar_t__* texcoords; int * colors; } ;
struct TYPE_12__ {int fogNum; int numVertexes; int indexes; int numIndexes; TYPE_3__* shader; TYPE_2__ svars; } ;
struct TYPE_11__ {int fogImage; TYPE_1__* world; } ;
struct TYPE_9__ {scalar_t__ fogPass; } ;
struct TYPE_7__ {TYPE_4__* fogs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (float*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,scalar_t__) ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;

__attribute__((used)) static void FUNC_7( void ) {
 fog_t *VAR_10;
 int VAR_11;

 FUNC_5( VAR_4 );
 FUNC_4( 4, VAR_7, 0, VAR_8.svars.colors );

 FUNC_5( VAR_6);
 FUNC_6( 2, VAR_5, 0, VAR_8.svars.texcoords[0] );

 VAR_10 = VAR_9.world->fogs + VAR_8.fogNum;

 for ( VAR_11 = 0; VAR_11 < VAR_8.numVertexes; VAR_11++ ) {
  * ( int * )&VAR_8.svars.colors[VAR_11] = VAR_10->colorInt;
 }

 FUNC_2( ( float * ) VAR_8.svars.texcoords[0] );

 FUNC_0( VAR_9.fogImage );

 if ( VAR_8.shader->fogPass == VAR_0 ) {
  FUNC_1( VAR_3 | VAR_2 | VAR_1 );
 } else {
  FUNC_1( VAR_3 | VAR_2 );
 }

 FUNC_3( VAR_8.numIndexes, VAR_8.indexes );
}
