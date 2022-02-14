
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
typedef int qhandle_t ;
struct TYPE_11__ {int teamTask; } ;
typedef TYPE_4__ clientInfo_t ;
struct TYPE_13__ {TYPE_2__* snap; } ;
struct TYPE_12__ {TYPE_4__* clientinfo; } ;
struct TYPE_8__ {size_t clientNum; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_2( rectDef_t *VAR_2 ) {
 clientInfo_t *VAR_3 = &VAR_1.clientinfo[VAR_0.snap->ps.clientNum];
 if (VAR_3) {
  qhandle_t VAR_4 = FUNC_1(VAR_3->teamTask);
  FUNC_0( VAR_2->x, VAR_2->y, VAR_2->w, VAR_2->h, VAR_4);
 }
}
