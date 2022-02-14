
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_9__ {int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_8__ {int realTime; } ;
struct TYPE_7__ {scalar_t__ refreshActive; } ;
struct TYPE_11__ {TYPE_2__ uiDC; TYPE_1__ serverStatus; } ;
struct TYPE_10__ {char* integer; } ;


 int FUNC_0 (double*,double*,double*,double) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,float,double*,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 double FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6) {
 if (VAR_1.serverStatus.refreshActive) {
  vec4_t VAR_7, VAR_8;
  VAR_7[0] = 0.8 * VAR_5[0];
  VAR_7[1] = 0.8 * VAR_5[1];
  VAR_7[2] = 0.8 * VAR_5[2];
  VAR_7[3] = 0.8 * VAR_5[3];
  FUNC_0(VAR_5,VAR_7,VAR_8,0.5+0.5*FUNC_4(VAR_1.uiDC.realTime / VAR_0));
   FUNC_2(VAR_3->x, VAR_3->y, VAR_4, VAR_8, FUNC_6("Getting info for %d servers (ESC to cancel)", FUNC_5(VAR_2.integer)), 0, 0, VAR_6);
 } else {
  char VAR_9[64];
  FUNC_1(VAR_9, FUNC_3(FUNC_6("ui_lastServerRefresh_%i", VAR_2.integer)), 64);
   FUNC_2(VAR_3->x, VAR_3->y, VAR_4, VAR_5, FUNC_6("Refresh Time: %s", VAR_9), 0, 0, VAR_6);
 }
}
