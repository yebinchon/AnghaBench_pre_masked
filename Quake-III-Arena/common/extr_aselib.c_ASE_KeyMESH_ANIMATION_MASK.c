
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ faces; scalar_t__ vertexes; scalar_t__ tvertexes; } ;
typedef TYPE_3__ aseMesh_t ;
struct TYPE_10__ {size_t currentObject; TYPE_2__* objects; } ;
struct TYPE_7__ {scalar_t__ currentFrame; } ;
struct TYPE_8__ {TYPE_1__ anim; } ;


 TYPE_3__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void FUNC_7( const char *VAR_3 )
{
 aseMesh_t *VAR_4 = FUNC_0();


 if ( !FUNC_6( VAR_3, "*MESH" ) )
 {
  FUNC_3( ( "...found MESH\n" ) );
  FUNC_4( VAR_4->faces == 0 );
  FUNC_4( VAR_4->vertexes == 0 );
  FUNC_4( VAR_4->tvertexes == 0 );
  FUNC_5( VAR_4, 0, sizeof( *VAR_4 ) );

  FUNC_1( VAR_0 );

  if ( ++VAR_2.objects[VAR_2.currentObject].anim.currentFrame == VAR_1 )
  {
   FUNC_2( "Too many animation frames" );
  }
 }
 else
 {
  FUNC_2( "Unknown token '%s' while parsing MESH_ANIMATION", VAR_3 );
 }
}
