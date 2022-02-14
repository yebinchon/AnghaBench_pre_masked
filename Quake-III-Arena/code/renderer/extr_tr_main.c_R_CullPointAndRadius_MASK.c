
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {float dist; int normal; } ;
typedef TYPE_2__ cplane_t ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_5__ {TYPE_2__* frustum; } ;
struct TYPE_7__ {TYPE_1__ viewParms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;

int FUNC_1( vec3_t VAR_7, float VAR_8 )
{
 int VAR_9;
 float VAR_10;
 cplane_t *VAR_11;
 qboolean VAR_12 = VAR_3;

 if ( VAR_5->integer ) {
  return VAR_0;
 }


 for (VAR_9 = 0 ; VAR_9 < 4 ; VAR_9++)
 {
  VAR_11 = &VAR_6.viewParms.frustum[VAR_9];

  VAR_10 = FUNC_0( VAR_7, VAR_11->normal) - VAR_11->dist;
  if ( VAR_10 < -VAR_8 )
  {
   return VAR_2;
  }
  else if ( VAR_10 <= VAR_8 )
  {
   VAR_12 = VAR_4;
  }
 }

 if ( VAR_12 )
 {
  return VAR_0;
 }

 return VAR_1;
}
