
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numFrames; TYPE_1__* frames; } ;
struct TYPE_8__ {TYPE_2__ anim; } ;
typedef TYPE_3__ aseGeomObject_t ;
struct TYPE_9__ {TYPE_3__* objects; } ;
struct TYPE_6__ {scalar_t__ tfaces; scalar_t__ faces; scalar_t__ tvertexes; scalar_t__ vertexes; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2( int VAR_1 )
{
 aseGeomObject_t *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_0.objects[VAR_1];

 for ( VAR_3 = 0; VAR_3 < VAR_2->anim.numFrames; VAR_3++ )
 {
  if ( VAR_2->anim.frames[VAR_3].vertexes )
  {
   FUNC_0( VAR_2->anim.frames[VAR_3].vertexes );
  }
  if ( VAR_2->anim.frames[VAR_3].tvertexes )
  {
   FUNC_0( VAR_2->anim.frames[VAR_3].tvertexes );
  }
  if ( VAR_2->anim.frames[VAR_3].faces )
  {
   FUNC_0( VAR_2->anim.frames[VAR_3].faces );
  }
  if ( VAR_2->anim.frames[VAR_3].tfaces )
  {
   FUNC_0( VAR_2->anim.frames[VAR_3].tfaces );
  }
 }

 FUNC_1( VAR_2, 0, sizeof( *VAR_2 ) );
}
