
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int max; int ** order; int heap; int initialized; int * keys; } ;
struct TYPE_5__ {int userData; scalar_t__ (* memalloc ) (int ,size_t) ;} ;
typedef TYPE_1__ TESSalloc ;
typedef TYPE_2__ PriorityQ ;
typedef int PQkey ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int **,int **) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,size_t) ;

int FUNC_7( TESSalloc* VAR_1, PriorityQ *VAR_2 )
{
 PQkey **VAR_3, **VAR_4, **VAR_5, **VAR_6, *VAR_7;
 struct { PQkey **p, **r; } VAR_8[50], *VAR_9 = VAR_8;
 unsigned int VAR_10 = 2016473283;
 VAR_2->order = (PQkey **)VAR_1->memalloc( VAR_1->userData,
            (size_t)((VAR_2->size+1) * sizeof(VAR_2->order[0])) );




 if (VAR_2->order == ((void*)0)) return 0;

 VAR_3 = VAR_2->order;
 VAR_4 = VAR_3 + VAR_2->size - 1;
 for( VAR_7 = VAR_2->keys, VAR_5 = VAR_3; VAR_5 <= VAR_4; ++VAR_7, ++VAR_5 ) {
  *VAR_5 = VAR_7;
 }




 VAR_9->p = VAR_3; VAR_9->r = VAR_4; ++VAR_9;
 while( --VAR_9 >= VAR_8 ) {
  VAR_3 = VAR_9->p;
  VAR_4 = VAR_9->r;
  while( VAR_4 > VAR_3 + 10 ) {
   VAR_10 = VAR_10 * 1539415821 + 1;
   VAR_5 = VAR_3 + VAR_10 % (VAR_4 - VAR_3 + 1);
   VAR_7 = *VAR_5;
   *VAR_5 = *VAR_3;
   *VAR_3 = VAR_7;
   VAR_5 = VAR_3 - 1;
   VAR_6 = VAR_4 + 1;
   do {
    do { ++VAR_5; } while( FUNC_0( **VAR_5, *VAR_7 ));
    do { --VAR_6; } while( FUNC_2( **VAR_6, *VAR_7 ));
    FUNC_3( VAR_5, VAR_6 );
   } while( VAR_5 < VAR_6 );
   FUNC_3( VAR_5, VAR_6 );
   if( VAR_5 - VAR_3 < VAR_4 - VAR_6 ) {
    VAR_9->p = VAR_6+1; VAR_9->r = VAR_4; ++VAR_9;
    VAR_4 = VAR_5-1;
   } else {
    VAR_9->p = VAR_3; VAR_9->r = VAR_5-1; ++VAR_9;
    VAR_3 = VAR_6+1;
   }
  }

  for( VAR_5 = VAR_3+1; VAR_5 <= VAR_4; ++VAR_5 ) {
   VAR_7 = *VAR_5;
   for( VAR_6 = VAR_5; VAR_6 > VAR_3 && FUNC_2( **(VAR_6-1), *VAR_7 ); --VAR_6 ) {
    *VAR_6 = *(VAR_6-1);
   }
   *VAR_6 = VAR_7;
  }
 }
 VAR_2->max = VAR_2->size;
 VAR_2->initialized = VAR_0;
 FUNC_5( VAR_2->heap );


 VAR_3 = VAR_2->order;
 VAR_4 = VAR_3 + VAR_2->size - 1;
 for( VAR_5 = VAR_3; VAR_5 < VAR_4; ++VAR_5 ) {
  FUNC_4( FUNC_1( **(VAR_5+1), **VAR_5 ));
 }


 return 1;
}
