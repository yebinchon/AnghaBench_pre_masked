
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mesh; } ;
struct TYPE_6__ {scalar_t__* coords; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__ vHead; } ;
typedef TYPE_2__ TESSvertex ;
typedef TYPE_3__ TESStesselator ;
typedef scalar_t__ TESSreal ;


 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1( TESStesselator *VAR_0, TESSreal VAR_1[3] )
{
 TESSvertex *VAR_2, *VAR_3, *VAR_4;
 TESSreal VAR_5, VAR_6, VAR_7;
 TESSreal VAR_8[3], VAR_9[3], VAR_10[3], VAR_11[3], VAR_12[3];
 TESSvertex *VAR_13[3], *VAR_14[3];
 TESSvertex *VAR_15 = &VAR_0->mesh->vHead;
 int VAR_16;

 VAR_2 = VAR_15->next;
 for( VAR_16 = 0; VAR_16 < 3; ++VAR_16 ) {
  VAR_5 = VAR_2->coords[VAR_16];
  VAR_9[VAR_16] = VAR_5;
  VAR_14[VAR_16] = VAR_2;
  VAR_8[VAR_16] = VAR_5;
  VAR_13[VAR_16] = VAR_2;
 }

 for( VAR_2 = VAR_15->next; VAR_2 != VAR_15; VAR_2 = VAR_2->next ) {
  for( VAR_16 = 0; VAR_16 < 3; ++VAR_16 ) {
   VAR_5 = VAR_2->coords[VAR_16];
   if( VAR_5 < VAR_9[VAR_16] ) { VAR_9[VAR_16] = VAR_5; VAR_14[VAR_16] = VAR_2; }
   if( VAR_5 > VAR_8[VAR_16] ) { VAR_8[VAR_16] = VAR_5; VAR_13[VAR_16] = VAR_2; }
  }
 }




 VAR_16 = 0;
 if( VAR_8[1] - VAR_9[1] > VAR_8[0] - VAR_9[0] ) { VAR_16 = 1; }
 if( VAR_8[2] - VAR_9[2] > VAR_8[VAR_16] - VAR_9[VAR_16] ) { VAR_16 = 2; }
 if( VAR_9[VAR_16] >= VAR_8[VAR_16] ) {

  VAR_1[0] = 0; VAR_1[1] = 0; VAR_1[2] = 1;
  return;
 }




 VAR_7 = 0;
 VAR_3 = VAR_14[VAR_16];
 VAR_4 = VAR_13[VAR_16];
 VAR_10[0] = VAR_3->coords[0] - VAR_4->coords[0];
 VAR_10[1] = VAR_3->coords[1] - VAR_4->coords[1];
 VAR_10[2] = VAR_3->coords[2] - VAR_4->coords[2];
 for( VAR_2 = VAR_15->next; VAR_2 != VAR_15; VAR_2 = VAR_2->next ) {
  VAR_11[0] = VAR_2->coords[0] - VAR_4->coords[0];
  VAR_11[1] = VAR_2->coords[1] - VAR_4->coords[1];
  VAR_11[2] = VAR_2->coords[2] - VAR_4->coords[2];
  VAR_12[0] = VAR_10[1]*VAR_11[2] - VAR_10[2]*VAR_11[1];
  VAR_12[1] = VAR_10[2]*VAR_11[0] - VAR_10[0]*VAR_11[2];
  VAR_12[2] = VAR_10[0]*VAR_11[1] - VAR_10[1]*VAR_11[0];
  VAR_6 = VAR_12[0]*VAR_12[0] + VAR_12[1]*VAR_12[1] + VAR_12[2]*VAR_12[2];
  if( VAR_6 > VAR_7 ) {
   VAR_7 = VAR_6;
   VAR_1[0] = VAR_12[0];
   VAR_1[1] = VAR_12[1];
   VAR_1[2] = VAR_12[2];
  }
 }

 if( VAR_7 <= 0 ) {

  VAR_1[0] = VAR_1[1] = VAR_1[2] = 0;
  VAR_1[FUNC_0(VAR_10)] = 1;
 }
}
