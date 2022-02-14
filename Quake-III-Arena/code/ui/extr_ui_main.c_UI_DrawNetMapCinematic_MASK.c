
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_8__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_7__ {scalar_t__ currentServerCinematic; } ;
struct TYPE_10__ {scalar_t__ mapCount; TYPE_1__ serverStatus; } ;
struct TYPE_9__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_2__*,float,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_5(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4) {
 if (VAR_1.integer < 0 || VAR_1.integer > VAR_0.mapCount) {
  VAR_1.integer = 0;
  FUNC_4("ui_currentNetMap", "0");
 }

 if (VAR_0.serverStatus.currentServerCinematic >= 0) {
   FUNC_2(VAR_0.serverStatus.currentServerCinematic);
   FUNC_3(VAR_0.serverStatus.currentServerCinematic, VAR_2->x, VAR_2->y, VAR_2->w, VAR_2->h);
    FUNC_1(VAR_0.serverStatus.currentServerCinematic);
 } else {
  FUNC_0(VAR_2, VAR_3, VAR_4);
 }
}
