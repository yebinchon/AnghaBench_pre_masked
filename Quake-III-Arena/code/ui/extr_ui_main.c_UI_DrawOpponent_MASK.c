
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef int playerInfo_t ;
struct TYPE_5__ {int realTime; } ;
struct TYPE_7__ {TYPE_1__ uiDC; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int) ;
 int FUNC_2 (int *,int ,int ,int*,int ,int ,scalar_t__) ;
 int FUNC_3 (int *,char*,char*,char*) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 int FUNC_5 (int*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (char*,int ) ;
 TYPE_3__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_8(rectDef_t *VAR_11) {
  static playerInfo_t VAR_12;
  char VAR_13[VAR_1];
  char VAR_14[VAR_1];
  char VAR_15[256];
 vec3_t VAR_16;
 vec3_t VAR_17;

 if (VAR_9) {

  FUNC_7(VAR_13, FUNC_0("ui_opponentModel"));
   FUNC_7(VAR_14, FUNC_0("ui_opponentModel"));
  VAR_15[0] = '\0';

   FUNC_6( &VAR_12, 0, sizeof(playerInfo_t) );
   VAR_16[VAR_6] = 180 - 10;
   VAR_16[VAR_2] = 0;
   VAR_16[VAR_3] = 0;
   FUNC_5( VAR_17 );
    FUNC_3( &VAR_12, VAR_13, VAR_14, "");
    FUNC_2( &VAR_12, VAR_0, VAR_4, VAR_16, VAR_10, VAR_5, VAR_7 );
  FUNC_4( &VAR_12, VAR_13, VAR_14, VAR_15);
    VAR_9 = VAR_7;
  }

  FUNC_1( VAR_11->x, VAR_11->y, VAR_11->w, VAR_11->h, &VAR_12, VAR_8.uiDC.realTime / 2);

}
