
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_7__ {double fraction; int entityNum; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_8__ {int contentmask; scalar_t__* start; scalar_t__* end; scalar_t__* mins; scalar_t__* maxs; int passEntityNum; int capsule; scalar_t__* boxmins; scalar_t__* boxmaxs; TYPE_1__ trace; } ;
typedef TYPE_2__ moveclip_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__* const,scalar_t__* const,scalar_t__*,scalar_t__*,int ,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__* const,scalar_t__*) ;
 scalar_t__* VAR_2 ;

void FUNC_4( trace_t *VAR_3, const vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6, const vec3_t VAR_7, int VAR_8, int VAR_9, int VAR_10 ) {
 moveclip_t VAR_11;
 int VAR_12;

 if ( !VAR_5 ) {
  VAR_5 = VAR_2;
 }
 if ( !VAR_6 ) {
  VAR_6 = VAR_2;
 }

 FUNC_1 ( &VAR_11, 0, sizeof ( moveclip_t ) );


 FUNC_0( &VAR_11.trace, VAR_4, VAR_7, VAR_5, VAR_6, 0, VAR_9, VAR_10 );
 VAR_11.trace.entityNum = VAR_11.trace.fraction != 1.0 ? VAR_1 : VAR_0;
 if ( VAR_11.trace.fraction == 0 ) {
  *VAR_3 = VAR_11.trace;
  return;
 }

 VAR_11.contentmask = VAR_9;
 VAR_11.start = VAR_4;

 FUNC_3( VAR_7, VAR_11.end );
 VAR_11.mins = VAR_5;
 VAR_11.maxs = VAR_6;
 VAR_11.passEntityNum = VAR_8;
 VAR_11.capsule = VAR_10;





 for ( VAR_12=0 ; VAR_12<3 ; VAR_12++ ) {
  if ( VAR_7[VAR_12] > VAR_4[VAR_12] ) {
   VAR_11.boxmins[VAR_12] = VAR_11.start[VAR_12] + VAR_11.mins[VAR_12] - 1;
   VAR_11.boxmaxs[VAR_12] = VAR_11.end[VAR_12] + VAR_11.maxs[VAR_12] + 1;
  } else {
   VAR_11.boxmins[VAR_12] = VAR_11.end[VAR_12] + VAR_11.mins[VAR_12] - 1;
   VAR_11.boxmaxs[VAR_12] = VAR_11.start[VAR_12] + VAR_11.maxs[VAR_12] + 1;
  }
 }


 FUNC_2 ( &VAR_11 );

 *VAR_3 = VAR_11.trace;
}
