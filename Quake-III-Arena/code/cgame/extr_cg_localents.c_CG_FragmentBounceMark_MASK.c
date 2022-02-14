
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int normal; } ;
struct TYPE_10__ {TYPE_2__ plane; int endpos; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_11__ {scalar_t__ leMarkType; } ;
typedef TYPE_4__ localEntity_t ;
struct TYPE_8__ {int burnMarkShader; int bloodMarkShader; } ;
struct TYPE_12__ {TYPE_1__ media; } ;


 int FUNC_0 (int ,int ,int ,int,int,int,int,int,int ,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3( localEntity_t *VAR_6, trace_t *VAR_7 ) {
 int VAR_8;

 if ( VAR_6->leMarkType == VAR_0 ) {

  VAR_8 = 16 + (FUNC_1()&31);
  FUNC_0( VAR_3.media.bloodMarkShader, VAR_7->endpos, VAR_7->plane.normal, FUNC_2()*360,
   1,1,1,1, VAR_5, VAR_8, VAR_4 );
 } else if ( VAR_6->leMarkType == VAR_1 ) {

  VAR_8 = 8 + (FUNC_1()&15);
  FUNC_0( VAR_3.media.burnMarkShader, VAR_7->endpos, VAR_7->plane.normal, FUNC_2()*360,
   1,1,1,1, VAR_5, VAR_8, VAR_4 );
 }




 VAR_6->leMarkType = VAR_2;
}
