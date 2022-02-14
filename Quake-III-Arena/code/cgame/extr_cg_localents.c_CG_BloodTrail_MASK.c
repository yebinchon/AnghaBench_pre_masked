
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int* trDelta; } ;
struct TYPE_9__ {TYPE_7__ pos; int leType; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_11__ {int time; int frametime; } ;
struct TYPE_8__ {int bloodTrailShader; } ;
struct TYPE_10__ {TYPE_1__ media; } ;


 int FUNC_0 (TYPE_7__*,int,int ) ;
 TYPE_2__* FUNC_1 (int ,int ,int,int,int,int,int,int,int,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;

void FUNC_2( localEntity_t *VAR_4 ) {
 int VAR_5;
 int VAR_6;
 int VAR_7;
 vec3_t VAR_8;
 localEntity_t *VAR_9;

 VAR_7 = 150;
 VAR_5 = VAR_7 * ( (VAR_1.time - VAR_1.frametime + VAR_7 ) / VAR_7 );
 VAR_6 = VAR_7 * ( VAR_1.time / VAR_7 );

 for ( ; VAR_5 <= VAR_6; VAR_5 += VAR_7 ) {
  FUNC_0( &VAR_4->pos, VAR_5, VAR_8 );

  VAR_9 = FUNC_1( VAR_8, VAR_3,
       20,
       1, 1, 1, 1,
       2000,
       VAR_5,
       0,
       0,
       VAR_2.media.bloodTrailShader );

  VAR_9->leType = VAR_0;

  VAR_9->pos.trDelta[2] = 40;
 }
}
