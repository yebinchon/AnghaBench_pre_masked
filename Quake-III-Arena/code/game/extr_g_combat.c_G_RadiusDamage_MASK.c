
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int qboolean ;
struct TYPE_11__ {scalar_t__* absmin; scalar_t__* absmax; int currentOrigin; } ;
struct TYPE_12__ {TYPE_1__ r; int takedamage; } ;
typedef TYPE_2__ gentity_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_2__*,scalar_t__*,scalar_t__*,int,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 float FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int*,int) ;

qboolean FUNC_6 ( vec3_t VAR_5, gentity_t *VAR_6, float VAR_7, float VAR_8,
      gentity_t *VAR_9, int VAR_10) {
 float VAR_11, VAR_12;
 gentity_t *VAR_13;
 int VAR_14[VAR_1];
 int VAR_15;
 vec3_t VAR_16, VAR_17;
 vec3_t VAR_18;
 vec3_t VAR_19;
 int VAR_20, VAR_21;
 qboolean VAR_22 = VAR_3;

 if ( VAR_8 < 1 ) {
  VAR_8 = 1;
 }

 for ( VAR_20 = 0 ; VAR_20 < 3 ; VAR_20++ ) {
  VAR_16[VAR_20] = VAR_5[VAR_20] - VAR_8;
  VAR_17[VAR_20] = VAR_5[VAR_20] + VAR_8;
 }

 VAR_15 = FUNC_5( VAR_16, VAR_17, VAR_14, VAR_1 );

 for ( VAR_21 = 0 ; VAR_21 < VAR_15 ; VAR_21++ ) {
  VAR_13 = &VAR_2[VAR_14[ VAR_21 ]];

  if (VAR_13 == VAR_9)
   continue;
  if (!VAR_13->takedamage)
   continue;


  for ( VAR_20 = 0 ; VAR_20 < 3 ; VAR_20++ ) {
   if ( VAR_5[VAR_20] < VAR_13->r.absmin[VAR_20] ) {
    VAR_18[VAR_20] = VAR_13->r.absmin[VAR_20] - VAR_5[VAR_20];
   } else if ( VAR_5[VAR_20] > VAR_13->r.absmax[VAR_20] ) {
    VAR_18[VAR_20] = VAR_5[VAR_20] - VAR_13->r.absmax[VAR_20];
   } else {
    VAR_18[VAR_20] = 0;
   }
  }

  VAR_12 = FUNC_3( VAR_18 );
  if ( VAR_12 >= VAR_8 ) {
   continue;
  }

  VAR_11 = VAR_7 * ( 1.0 - VAR_12 / VAR_8 );

  if( FUNC_0 (VAR_13, VAR_5) ) {
   if( FUNC_2( VAR_13, VAR_6 ) ) {
    VAR_22 = VAR_4;
   }
   FUNC_4 (VAR_13->r.currentOrigin, VAR_5, VAR_19);


   VAR_19[2] += 24;
   FUNC_1 (VAR_13, ((void*)0), VAR_6, VAR_19, VAR_5, (int)VAR_11, VAR_0, VAR_10);
  }
 }

 return VAR_22;
}
