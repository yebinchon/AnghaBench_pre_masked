
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int spectatorLen; int spectatorWidth; scalar_t__* spectatorList; } ;
struct TYPE_5__ {TYPE_1__* clientinfo; } ;
struct TYPE_4__ {scalar_t__ team; int name; scalar_t__ infoValid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3() {
 int VAR_4;
 VAR_2.spectatorList[0] = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3.clientinfo[VAR_4].infoValid && VAR_3.clientinfo[VAR_4].team == VAR_1 ) {
   FUNC_0(VAR_2.spectatorList, sizeof(VAR_2.spectatorList), FUNC_2("%s     ", VAR_3.clientinfo[VAR_4].name));
  }
 }
 VAR_4 = FUNC_1(VAR_2.spectatorList);
 if (VAR_4 != VAR_2.spectatorLen) {
  VAR_2.spectatorLen = VAR_4;
  VAR_2.spectatorWidth = -1;
 }
}
