
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {float radius; float* color; int additive; int origin; } ;
typedef TYPE_1__ dlight_t ;
struct TYPE_8__ {TYPE_1__* dlights; } ;
struct TYPE_7__ {scalar_t__ hardwareType; } ;
struct TYPE_6__ {size_t smpFrame; int registered; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const,int ) ;
 TYPE_4__** VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;

void FUNC_1( const vec3_t VAR_7, float VAR_8, float VAR_9, float VAR_10, float VAR_11, int VAR_12 ) {
 dlight_t *VAR_13;

 if ( !VAR_6.registered ) {
  return;
 }
 if ( VAR_5 >= VAR_2 ) {
  return;
 }
 if ( VAR_8 <= 0 ) {
  return;
 }

 if ( VAR_4.hardwareType == VAR_1 || VAR_4.hardwareType == VAR_0 ) {
  return;
 }
 VAR_13 = &VAR_3[VAR_6.smpFrame]->dlights[VAR_5++];
 FUNC_0 (VAR_7, VAR_13->origin);
 VAR_13->radius = VAR_8;
 VAR_13->color[0] = VAR_9;
 VAR_13->color[1] = VAR_10;
 VAR_13->color[2] = VAR_11;
 VAR_13->additive = VAR_12;
}
