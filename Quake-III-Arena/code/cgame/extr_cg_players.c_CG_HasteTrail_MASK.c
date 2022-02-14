
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_13__ {int leType; } ;
typedef TYPE_4__ localEntity_t ;
struct TYPE_10__ {int animationNumber; } ;
struct TYPE_11__ {TYPE_1__ legs; } ;
struct TYPE_14__ {scalar_t__ trailTime; int lerpOrigin; TYPE_2__ pe; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_16__ {scalar_t__ time; } ;
struct TYPE_12__ {int hastePuffShader; } ;
struct TYPE_15__ {TYPE_3__ media; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int*,int ,int,int,int,int,int,int,scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int*) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2( centity_t *VAR_7 ) {
 localEntity_t *VAR_8;
 vec3_t VAR_9;
 int VAR_10;

 if ( VAR_7->trailTime > VAR_4.time ) {
  return;
 }
 VAR_10 = VAR_7->pe.legs.animationNumber & ~VAR_0;
 if ( VAR_10 != VAR_2 && VAR_10 != VAR_1 ) {
  return;
 }

 VAR_7->trailTime += 100;
 if ( VAR_7->trailTime < VAR_4.time ) {
  VAR_7->trailTime = VAR_4.time;
 }

 FUNC_1( VAR_7->lerpOrigin, VAR_9 );
 VAR_9[2] -= 16;

 VAR_8 = FUNC_0( VAR_9, VAR_6,
      8,
      1, 1, 1, 1,
      500,
      VAR_4.time,
      0,
      0,
      VAR_5.media.hastePuffShader );


 VAR_8->leType = VAR_3;
}
