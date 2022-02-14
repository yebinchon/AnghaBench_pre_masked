
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {double* filter; scalar_t__ passSolid; } ;
typedef TYPE_1__ trace_t ;
typedef int traceWork_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {float* origin; scalar_t__ type; float* normal; float dist; float* emitColor; float photons; float radiusByDist; float* color; scalar_t__ linearLight; scalar_t__ twosided; int w; struct TYPE_6__* next; } ;
typedef TYPE_2__ light_t ;


 float FUNC_0 (float*,float*) ;
 float FUNC_1 (float*,float*,int ) ;
 int FUNC_2 (float*,float*,float*,int *) ;
 int FUNC_3 (float*,float*,TYPE_1__*,int ,int *) ;
 int FUNC_4 (float*,float*) ;
 float FUNC_5 (float*) ;
 int FUNC_6 (float*,float,float*,float*) ;
 float FUNC_7 (float*,float*) ;
 int FUNC_8 (float*,float*,float*) ;
 float* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 float VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_9( vec3_t VAR_9, vec3_t VAR_10, vec3_t VAR_11,
       qboolean VAR_12, qboolean VAR_13, traceWork_t *VAR_14 ) {
 light_t *VAR_15;
 trace_t VAR_16;
 float VAR_17;
 float VAR_18;
 float VAR_19;
 vec3_t VAR_20;

 FUNC_4( VAR_0, VAR_11 );


 for ( VAR_15 = VAR_5 ; VAR_15 ; VAR_15 = VAR_15->next ) {


  if ( FUNC_0(VAR_15->origin, VAR_10) - FUNC_0(VAR_10, VAR_9) < 0 )
   continue;

  if ( VAR_4 && VAR_15->type == VAR_1 ) {
   float VAR_21;
   float VAR_22;
   vec3_t VAR_23;


   VAR_22 = FUNC_0( VAR_9, VAR_15->normal ) - VAR_15->dist;
   if ( !VAR_15->twosided ) {
    if ( VAR_22 < -1 ) {
     continue;
    }
   }



   if ( !VAR_7 && VAR_12 ) {
    FUNC_3( VAR_9, VAR_15->origin, &VAR_16, VAR_8, VAR_14 );


    if ( VAR_16.passSolid ) {
     continue;
    }
   } else {
    VAR_16.filter[0] = 1.0;
    VAR_16.filter[1] = 1.0;
    VAR_16.filter[2] = 1.0;
   }



   if ( VAR_22 > -8 && VAR_22 < 8 ) {
    FUNC_6( VAR_9, (8-VAR_22), VAR_15->normal, VAR_23 );
   } else {
    FUNC_4( VAR_9, VAR_23 );
   }


   VAR_21 = FUNC_1( VAR_23, VAR_10, VAR_15->w );
   if ( VAR_21 <= 0 ) {
    if ( VAR_15->twosided ) {
     VAR_21 = -VAR_21;
    } else {
     continue;
    }
   }
   VAR_11[0] += VAR_21 * VAR_15->emitColor[0] * VAR_16.filter[0];
   VAR_11[1] += VAR_21 * VAR_15->emitColor[1] * VAR_16.filter[1];
   VAR_11[2] += VAR_21 * VAR_15->emitColor[2] * VAR_16.filter[2];

   continue;
  }


  if ( VAR_15->type == VAR_2 ) {
   FUNC_8( VAR_15->origin, VAR_9, VAR_20 );
   VAR_19 = FUNC_7( VAR_20, VAR_20 );

   if ( VAR_19 < 16 ) {
    VAR_19 = 16;
   }
   VAR_17 = FUNC_0( VAR_10, VAR_20 );
   if ( VAR_15->linearLight ) {
    VAR_18 = VAR_17 * VAR_15->photons * VAR_6 - VAR_19;
    if ( VAR_18 < 0 ) {
     VAR_18 = 0;
    }
   } else {
    VAR_18 = VAR_15->photons / ( VAR_19 * VAR_19 ) * VAR_17;
   }
  } else if ( VAR_15->type == VAR_3 ) {
   float VAR_24;
   vec3_t VAR_25;
   float VAR_26;
   float VAR_27;
   vec3_t VAR_28;
   float VAR_29;

   FUNC_8( VAR_15->origin, VAR_9, VAR_20 );

   VAR_24 = -FUNC_0( VAR_20, VAR_15->normal );
   if ( VAR_24 < 0 ) {
    continue;
   }
   FUNC_6( VAR_15->origin, VAR_24, VAR_15->normal, VAR_25 );
   VAR_26 = VAR_15->radiusByDist * VAR_24;

   FUNC_8( VAR_9, VAR_25, VAR_28 );
   VAR_27 = FUNC_5( VAR_28 );

   if ( VAR_27 >= VAR_26 ) {
    continue;
   }
   if ( VAR_27 <= VAR_26 - 32 ) {
    VAR_29 = 1.0;
   } else {
    VAR_29 = ( VAR_26 - VAR_27 ) / 32.0;
   }

   VAR_19 = FUNC_7( VAR_20, VAR_20 );

   if ( VAR_19 < 16 ) {
    VAR_19 = 16;
   }
   VAR_17 = FUNC_0( VAR_10, VAR_20 );
   VAR_18 = VAR_15->photons / ( VAR_19 * VAR_19 ) * VAR_17 * VAR_29;

  } else if ( VAR_15->type == VAR_1 ) {
   FUNC_8( VAR_15->origin, VAR_9, VAR_20 );
   VAR_19 = FUNC_7( VAR_20, VAR_20 );

   if ( VAR_19 < 16 ) {
    VAR_19 = 16;
   }
   VAR_17 = FUNC_0( VAR_10, VAR_20 );
   if ( VAR_17 <= 0 ) {
    continue;
   }
   VAR_17 *= -FUNC_0( VAR_15->normal, VAR_20 );
   if ( VAR_17 <= 0 ) {
    continue;
   }

   if ( VAR_15->linearLight ) {
    VAR_18 = VAR_17 * VAR_15->photons * VAR_6 - VAR_19;
    if ( VAR_18 < 0 ) {
     VAR_18 = 0;
    }
   } else {
    VAR_18 = VAR_15->photons / ( VAR_19 * VAR_19 ) * VAR_17;
   }
  }

  if ( VAR_18 <= 1.0 ) {
   continue;
  }


  if ( !VAR_7 && VAR_12 ) {
   FUNC_3( VAR_9, VAR_15->origin, &VAR_16, VAR_8, VAR_14 );


   if ( VAR_16.passSolid ) {
    continue;
   }
  } else {
   VAR_16.filter[0] = 1;
   VAR_16.filter[1] = 1;
   VAR_16.filter[2] = 1;
  }


  VAR_11[0] += VAR_18 * VAR_15->color[0] * VAR_16.filter[0];
  VAR_11[1] += VAR_18 * VAR_15->color[1] * VAR_16.filter[1];
  VAR_11[2] += VAR_18 * VAR_15->color[2] * VAR_16.filter[2];
 }




 if ( VAR_12 || VAR_13 ) {
  FUNC_2( VAR_9, VAR_10, VAR_11, VAR_14 );
 }
}
