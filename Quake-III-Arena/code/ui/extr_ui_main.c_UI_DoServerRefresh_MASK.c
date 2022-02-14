
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {scalar_t__ realTime; } ;
struct TYPE_6__ {scalar_t__ refreshtime; int refreshActive; } ;
struct TYPE_8__ {TYPE_1__ uiDC; TYPE_2__ serverStatus; } ;
struct TYPE_7__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_4( void )
{
 qboolean VAR_6 = VAR_2;

 if (!VAR_4.serverStatus.refreshActive) {
  return;
 }
 if (VAR_5.integer != VAR_0) {
  if (VAR_5.integer == VAR_1) {
   if (!FUNC_2(VAR_5.integer)) {
    VAR_6 = VAR_3;
   }
  } else {
   if (FUNC_2(VAR_5.integer) < 0) {
    VAR_6 = VAR_3;
   }
  }
 }

 if (VAR_4.uiDC.realTime < VAR_4.serverStatus.refreshtime) {
  if (VAR_6) {
   return;
  }
 }


 if (FUNC_3(VAR_5.integer)) {
  VAR_4.serverStatus.refreshtime = VAR_4.uiDC.realTime + 1000;
 } else if (!VAR_6) {

  FUNC_0(2);

  FUNC_1();
 }

 FUNC_0(VAR_2);
}
