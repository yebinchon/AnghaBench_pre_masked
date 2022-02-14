
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ realTime; } ;
struct TYPE_6__ {int numLines; } ;
struct TYPE_5__ {int numDisplayServers; } ;
struct TYPE_8__ {int q3HeadCount; int movieCount; int numFoundPlayerServers; scalar_t__ playerRefresh; int playerCount; int myTeamCount; int modCount; int demoCount; TYPE_3__ uiDC; TYPE_2__ serverStatusInfo; TYPE_1__ serverStatus; } ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__ VAR_14 ;

__attribute__((used)) static int FUNC_3(float VAR_15) {
 if (VAR_15 == VAR_4) {
  return FUNC_1();
 } else if (VAR_15 == VAR_8) {
  return VAR_14.q3HeadCount;
 } else if (VAR_15 == VAR_1) {
  return VAR_14.movieCount;
 } else if (VAR_15 == VAR_5 || VAR_15 == VAR_0) {
  return FUNC_2(VAR_15 == VAR_5 ? VAR_13 : VAR_12);
 } else if (VAR_15 == VAR_9) {
  return VAR_14.serverStatus.numDisplayServers;
 } else if (VAR_15 == VAR_10) {
  return VAR_14.serverStatusInfo.numLines;
 } else if (VAR_15 == VAR_3) {
  return VAR_14.numFoundPlayerServers;
 } else if (VAR_15 == VAR_7) {
  if (VAR_14.uiDC.realTime > VAR_14.playerRefresh) {
   VAR_14.playerRefresh = VAR_14.uiDC.realTime + 3000;
   FUNC_0();
  }
  return VAR_14.playerCount;
 } else if (VAR_15 == VAR_11) {
  if (VAR_14.uiDC.realTime > VAR_14.playerRefresh) {
   VAR_14.playerRefresh = VAR_14.uiDC.realTime + 3000;
   FUNC_0();
  }
  return VAR_14.myTeamCount;
 } else if (VAR_15 == VAR_6) {
  return VAR_14.modCount;
 } else if (VAR_15 == VAR_2) {
  return VAR_14.demoCount;
 }
 return 0;
}
