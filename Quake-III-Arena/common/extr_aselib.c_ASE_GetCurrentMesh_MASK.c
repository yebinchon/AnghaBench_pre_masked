
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int aseMesh_t ;
struct TYPE_4__ {size_t currentFrame; int * frames; } ;
struct TYPE_5__ {TYPE_1__ anim; } ;
typedef TYPE_2__ aseGeomObject_t ;
struct TYPE_6__ {size_t currentObject; TYPE_2__* objects; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static aseMesh_t *FUNC_1( void )
{
 aseGeomObject_t *VAR_3;

 if ( VAR_2.currentObject >= VAR_1 )
 {
  FUNC_0( "Too many GEOMOBJECTs" );
  return 0;
 }

 VAR_3 = &VAR_2.objects[VAR_2.currentObject];

 if ( VAR_3->anim.currentFrame >= VAR_0 )
 {
  FUNC_0( "Too many MESHes" );
  return 0;
 }

 return &VAR_3->anim.frames[VAR_3->anim.currentFrame];
}
