
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* normal; int* sUnit; int* tUnit; scalar_t__* bmin; scalar_t__* bmax; TYPE_1__* mesh; } ;
struct TYPE_8__ {scalar_t__ s; int* coords; scalar_t__ t; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__ vHead; } ;
typedef TYPE_2__ TESSvertex ;
typedef TYPE_3__ TESStesselator ;
typedef int TESSreal ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int*) ;
 void* FUNC_2 (int*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5( TESStesselator *VAR_5 )
{
 TESSvertex *VAR_6, *VAR_7 = &VAR_5->mesh->vHead;
 TESSreal VAR_8[3];
 TESSreal *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13 = VAR_0;

 VAR_8[0] = VAR_5->normal[0];
 VAR_8[1] = VAR_5->normal[1];
 VAR_8[2] = VAR_5->normal[2];
 if( VAR_8[0] == 0 && VAR_8[1] == 0 && VAR_8[2] == 0 ) {
  FUNC_1( VAR_5, VAR_8 );
  VAR_13 = VAR_3;
 }
 VAR_9 = VAR_5->sUnit;
 VAR_10 = VAR_5->tUnit;
 VAR_11 = FUNC_3( VAR_8 );
 VAR_9[VAR_11] = 0;
 VAR_9[(VAR_11+1)%3] = VAR_1;
 VAR_9[(VAR_11+2)%3] = VAR_2;

 VAR_10[VAR_11] = 0;
 VAR_10[(VAR_11+1)%3] = (VAR_8[VAR_11] > 0) ? -VAR_2 : VAR_2;
 VAR_10[(VAR_11+2)%3] = (VAR_8[VAR_11] > 0) ? VAR_1 : -VAR_1;



 for( VAR_6 = VAR_7->next; VAR_6 != VAR_7; VAR_6 = VAR_6->next )
 {
  VAR_6->s = FUNC_2( VAR_6->coords, VAR_9 );
  VAR_6->t = FUNC_2( VAR_6->coords, VAR_10 );
 }
 if( VAR_13 ) {
  FUNC_0( VAR_5 );
 }


 VAR_12 = 1;
 for( VAR_6 = VAR_7->next; VAR_6 != VAR_7; VAR_6 = VAR_6->next )
 {
  if (VAR_12)
  {
   VAR_5->bmin[0] = VAR_5->bmax[0] = VAR_6->s;
   VAR_5->bmin[1] = VAR_5->bmax[1] = VAR_6->t;
   VAR_12 = 0;
  }
  else
  {
   if (VAR_6->s < VAR_5->bmin[0]) VAR_5->bmin[0] = VAR_6->s;
   if (VAR_6->s > VAR_5->bmax[0]) VAR_5->bmax[0] = VAR_6->s;
   if (VAR_6->t < VAR_5->bmin[1]) VAR_5->bmin[1] = VAR_6->t;
   if (VAR_6->t > VAR_5->bmax[1]) VAR_5->bmax[1] = VAR_6->t;
  }
 }
}
