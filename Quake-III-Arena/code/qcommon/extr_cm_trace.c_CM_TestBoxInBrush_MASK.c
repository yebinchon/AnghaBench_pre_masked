
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int contents; scalar_t__ fraction; int allsolid; int startsolid; } ;
struct TYPE_9__ {float radius; int offset; scalar_t__ use; } ;
struct TYPE_11__ {scalar_t__** bounds; TYPE_2__ trace; int start; int * offsets; TYPE_1__ sphere; } ;
typedef TYPE_3__ traceWork_t ;
struct TYPE_12__ {float dist; size_t signbits; int normal; } ;
typedef TYPE_4__ cplane_t ;
struct TYPE_13__ {TYPE_4__* plane; } ;
typedef TYPE_5__ cbrushside_t ;
struct TYPE_14__ {int numsides; scalar_t__** bounds; int contents; TYPE_5__* sides; } ;
typedef TYPE_6__ cbrush_t ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

void FUNC_3( traceWork_t *VAR_1, cbrush_t *VAR_2 ) {
 int VAR_3;
 cplane_t *VAR_4;
 float VAR_5;
 float VAR_6;
 cbrushside_t *VAR_7;
 float VAR_8;
 vec3_t VAR_9;

 if (!VAR_2->numsides) {
  return;
 }


 if ( VAR_1->bounds[0][0] > VAR_2->bounds[1][0]
  || VAR_1->bounds[0][1] > VAR_2->bounds[1][1]
  || VAR_1->bounds[0][2] > VAR_2->bounds[1][2]
  || VAR_1->bounds[1][0] < VAR_2->bounds[0][0]
  || VAR_1->bounds[1][1] < VAR_2->bounds[0][1]
  || VAR_1->bounds[1][2] < VAR_2->bounds[0][2]
  ) {
  return;
 }

   if ( VAR_1->sphere.use ) {


  for ( VAR_3 = 6 ; VAR_3 < VAR_2->numsides ; VAR_3++ ) {
   VAR_7 = VAR_2->sides + VAR_3;
   VAR_4 = VAR_7->plane;


   VAR_5 = VAR_4->dist + VAR_1->sphere.radius;

   VAR_8 = FUNC_0( VAR_4->normal, VAR_1->sphere.offset );
   if ( VAR_8 > 0 )
   {
    FUNC_2( VAR_1->start, VAR_1->sphere.offset, VAR_9 );
   }
   else
   {
    FUNC_1( VAR_1->start, VAR_1->sphere.offset, VAR_9 );
   }
   VAR_6 = FUNC_0( VAR_9, VAR_4->normal ) - VAR_5;

   if ( VAR_6 > 0 ) {
    return;
   }
  }
 } else {


  for ( VAR_3 = 6 ; VAR_3 < VAR_2->numsides ; VAR_3++ ) {
   VAR_7 = VAR_2->sides + VAR_3;
   VAR_4 = VAR_7->plane;


   VAR_5 = VAR_4->dist - FUNC_0( VAR_1->offsets[ VAR_4->signbits ], VAR_4->normal );

   VAR_6 = FUNC_0( VAR_1->start, VAR_4->normal ) - VAR_5;


   if ( VAR_6 > 0 ) {
    return;
   }
  }
 }


 VAR_1->trace.startsolid = VAR_1->trace.allsolid = VAR_0;
 VAR_1->trace.fraction = 0;
 VAR_1->trace.contents = VAR_2->contents;
}
