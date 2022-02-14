
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_9__ {int allsolid; } ;
typedef TYPE_2__ trace_t ;
struct TYPE_11__ {TYPE_1__* ps; int tracemask; int maxs; int mins; int (* trace ) (TYPE_2__*,scalar_t__*,int ,int ,scalar_t__*,int ,int ) ;scalar_t__ debugLevel; } ;
struct TYPE_10__ {int groundPlane; int walking; TYPE_2__ groundTrace; } ;
struct TYPE_8__ {int groundEntityNum; int clientNum; scalar_t__* origin; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,int ,int ,scalar_t__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*,int ,int ,scalar_t__*,int ,int ) ;

__attribute__((used)) static int FUNC_4( trace_t *VAR_6 ) {
 int VAR_7, VAR_8, VAR_9;
 vec3_t VAR_10;

 if ( VAR_2->debugLevel ) {
  FUNC_0("%i:allsolid\n", VAR_1);
 }


 for (VAR_7 = -1; VAR_7 <= 1; VAR_7++) {
  for (VAR_8 = -1; VAR_8 <= 1; VAR_8++) {
   for (VAR_9 = -1; VAR_9 <= 1; VAR_9++) {
    FUNC_1(VAR_2->ps->origin, VAR_10);
    VAR_10[0] += (float) VAR_7;
    VAR_10[1] += (float) VAR_8;
    VAR_10[2] += (float) VAR_9;
    VAR_2->trace (VAR_6, VAR_10, VAR_2->mins, VAR_2->maxs, VAR_10, VAR_2->ps->clientNum, VAR_2->tracemask);
    if ( !VAR_6->allsolid ) {
     VAR_10[0] = VAR_2->ps->origin[0];
     VAR_10[1] = VAR_2->ps->origin[1];
     VAR_10[2] = VAR_2->ps->origin[2] - 0.25;

     VAR_2->trace (VAR_6, VAR_2->ps->origin, VAR_2->mins, VAR_2->maxs, VAR_10, VAR_2->ps->clientNum, VAR_2->tracemask);
     VAR_3.groundTrace = *VAR_6;
     return VAR_5;
    }
   }
  }
 }

 VAR_2->ps->groundEntityNum = VAR_0;
 VAR_3.groundPlane = VAR_4;
 VAR_3.walking = VAR_4;

 return VAR_4;
}
