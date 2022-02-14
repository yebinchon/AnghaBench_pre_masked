
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numDisplayServers; int * displayServers; int sortDir; int sortKey; } ;
struct TYPE_6__ {TYPE_1__ serverStatus; } ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2) {
 int VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_6 = VAR_0.serverStatus.numDisplayServers;
 VAR_3 = VAR_6;
 VAR_4 = 0;
 VAR_5 = 0;
 while(VAR_3 > 0) {
  VAR_3 = VAR_6 >> 1;

  VAR_5 = FUNC_1( VAR_1.integer, VAR_0.serverStatus.sortKey,
     VAR_0.serverStatus.sortDir, VAR_2, VAR_0.serverStatus.displayServers[VAR_4+VAR_3]);

  if (VAR_5 == 0) {
   FUNC_0(VAR_2, VAR_4+VAR_3);
   return;
  }

  else if (VAR_5 == 1) {
   VAR_4 += VAR_3;
   VAR_6 -= VAR_3;
  }

  else {
   VAR_6 -= VAR_3;
  }
 }
 if (VAR_5 == 1) {
  VAR_4++;
 }
 FUNC_0(VAR_2, VAR_4);
}
