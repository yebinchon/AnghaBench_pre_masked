
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numDisplayServers; int numPlayersOnServers; scalar_t__ refreshActive; } ;
struct TYPE_6__ {TYPE_1__ serverStatus; } ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_3( void )
{
 int VAR_3;

 if (!VAR_1.serverStatus.refreshActive) {

  return;
 }
 VAR_1.serverStatus.refreshActive = VAR_0;
 FUNC_0("%d servers listed in browser with %d players.\n",
     VAR_1.serverStatus.numDisplayServers,
     VAR_1.serverStatus.numPlayersOnServers);
 VAR_3 = FUNC_2(VAR_2.integer);
 if (VAR_3 - VAR_1.serverStatus.numDisplayServers > 0) {
  FUNC_0("%d servers not listed due to packet loss or pings higher than %d\n",
      VAR_3 - VAR_1.serverStatus.numDisplayServers,
      (int) FUNC_1("cl_maxPing"));
 }

}
