
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int numPlayingClients; scalar_t__* teamScores; size_t* sortedClients; TYPE_1__* clients; } ;
struct TYPE_6__ {int* persistant; } ;
struct TYPE_5__ {TYPE_2__ ps; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;

qboolean FUNC_0( void ) {
 int VAR_7, VAR_8;

 if ( VAR_5.numPlayingClients < 2 ) {
  return VAR_6;
 }

 if ( VAR_4.integer >= VAR_0 ) {
  return VAR_5.teamScores[VAR_3] == VAR_5.teamScores[VAR_2];
 }

 VAR_7 = VAR_5.clients[VAR_5.sortedClients[0]].ps.persistant[VAR_1];
 VAR_8 = VAR_5.clients[VAR_5.sortedClients[1]].ps.persistant[VAR_1];

 return VAR_7 == VAR_8;
}
