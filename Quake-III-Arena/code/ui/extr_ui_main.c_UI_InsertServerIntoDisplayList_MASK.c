
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numDisplayServers; int* displayServers; } ;
struct TYPE_4__ {TYPE_1__ serverStatus; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, int VAR_2) {
 int VAR_3;

 if (VAR_2 < 0 || VAR_2 > VAR_0.serverStatus.numDisplayServers ) {
  return;
 }

 VAR_0.serverStatus.numDisplayServers++;
 for (VAR_3 = VAR_0.serverStatus.numDisplayServers; VAR_3 > VAR_2; VAR_3--) {
  VAR_0.serverStatus.displayServers[VAR_3] = VAR_0.serverStatus.displayServers[VAR_3-1];
 }
 VAR_0.serverStatus.displayServers[VAR_2] = VAR_1;
}
