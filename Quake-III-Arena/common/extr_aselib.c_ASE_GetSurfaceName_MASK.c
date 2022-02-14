
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numFrames; } ;
struct TYPE_5__ {char const* name; TYPE_1__ anim; } ;
typedef TYPE_2__ aseGeomObject_t ;
struct TYPE_6__ {TYPE_2__* objects; } ;


 TYPE_3__ VAR_0 ;

const char *FUNC_0( int VAR_1 )
{
 aseGeomObject_t *VAR_2 = &VAR_0.objects[VAR_1];

 if ( !VAR_2->anim.numFrames )
  return 0;

 return VAR_2->name;
}
