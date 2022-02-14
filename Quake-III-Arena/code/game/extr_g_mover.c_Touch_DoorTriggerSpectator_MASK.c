
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec3_t ;
typedef int trace_t ;
struct TYPE_8__ {int* absmax; int* absmin; } ;
struct TYPE_7__ {scalar_t__* origin; } ;
struct TYPE_9__ {int count; TYPE_2__ r; TYPE_1__ s; } ;
typedef TYPE_3__ gentity_t ;


 int FUNC_0 (TYPE_3__*,double*,double*) ;
 int FUNC_1 (double*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (double*,double*) ;

__attribute__((used)) static void FUNC_4( gentity_t *VAR_0, gentity_t *VAR_1, trace_t *VAR_2 ) {
 int VAR_3, VAR_4;
 vec3_t VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_0->count;
 FUNC_1(VAR_6);
 if (FUNC_2(VAR_1->s.origin[VAR_4] - VAR_0->r.absmax[VAR_4]) <
  FUNC_2(VAR_1->s.origin[VAR_4] - VAR_0->r.absmin[VAR_4])) {
  VAR_5[VAR_4] = VAR_0->r.absmin[VAR_4] - 10;
  VAR_6[VAR_4] = -1;
 }
 else {
  VAR_5[VAR_4] = VAR_0->r.absmax[VAR_4] + 10;
  VAR_6[VAR_4] = 1;
 }
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  if (VAR_3 == VAR_4) continue;
  VAR_5[VAR_3] = (VAR_0->r.absmin[VAR_3] + VAR_0->r.absmax[VAR_3]) * 0.5;
 }
 FUNC_3(VAR_6, VAR_7);
 FUNC_0(VAR_1, VAR_5, VAR_7 );
}
