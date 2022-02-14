
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ realTime; } ;
struct TYPE_5__ {scalar_t__ refreshtime; int refreshActive; } ;
struct TYPE_8__ {TYPE_2__ uiDC; TYPE_1__ serverStatus; } ;
struct TYPE_7__ {int integer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1() {
 FUNC_0(VAR_2.integer);
 VAR_1.serverStatus.refreshActive = VAR_0;
 VAR_1.serverStatus.refreshtime = VAR_1.uiDC.realTime + 1000;

}
