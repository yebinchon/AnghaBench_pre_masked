
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int sortKey; int numDisplayServers; int * displayServers; } ;
struct TYPE_4__ {TYPE_1__ serverStatus; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(int VAR_2, qboolean VAR_3) {

 if ( !VAR_3 ) {
  if ( VAR_1.serverStatus.sortKey == VAR_2 ) {
   return;
  }
 }

 VAR_1.serverStatus.sortKey = VAR_2;
 FUNC_0( &VAR_1.serverStatus.displayServers[0], VAR_1.serverStatus.numDisplayServers, sizeof(int), VAR_0);
}
