
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {TYPE_1__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int* teamScores; scalar_t__ warmupTime; } ;
struct TYPE_9__ {int* persistant; } ;
struct TYPE_8__ {TYPE_2__ ps; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_2( gentity_t *VAR_5, vec3_t VAR_6, int VAR_7 ) {
 if ( !VAR_5->client ) {
  return;
 }

 if ( VAR_4.warmupTime ) {
  return;
 }

 FUNC_1(VAR_5, VAR_6, VAR_7);

 VAR_5->client->ps.persistant[VAR_1] += VAR_7;
 if ( VAR_3.integer == VAR_0 )
  VAR_4.teamScores[ VAR_5->client->ps.persistant[VAR_2] ] += VAR_7;
 FUNC_0();
}
