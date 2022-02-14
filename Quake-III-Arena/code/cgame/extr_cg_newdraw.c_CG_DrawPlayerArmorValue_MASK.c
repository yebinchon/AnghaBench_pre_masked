
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_7__ {int w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qhandle_t ;
struct TYPE_8__ {size_t clientNum; int* stats; } ;
typedef TYPE_3__ playerState_t ;
typedef int num ;
typedef int centity_t ;
struct TYPE_9__ {TYPE_1__* snap; } ;
struct TYPE_6__ {TYPE_3__ ps; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,float,int *,char*,int ,int ,int) ;
 int FUNC_2 (char*,float,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 size_t VAR_0 ;
 TYPE_4__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, qhandle_t VAR_6, int VAR_7) {
 char VAR_8[16];
  int VAR_9;
 centity_t *VAR_10;
 playerState_t *VAR_11;

  VAR_10 = &VAR_2[VAR_1.snap->ps.clientNum];
 VAR_11 = &VAR_1.snap->ps;

 VAR_9 = VAR_11->stats[VAR_0];


 if (VAR_6) {
    FUNC_4( VAR_5 );
  FUNC_0(VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_6);
   FUNC_4( ((void*)0) );
 } else {
  FUNC_3 (VAR_8, sizeof(VAR_8), "%i", VAR_9);
  VAR_9 = FUNC_2(VAR_8, VAR_4, 0);
   FUNC_1(VAR_3->x + (VAR_3->w - VAR_9) / 2, VAR_3->y + VAR_3->h, VAR_4, VAR_5, VAR_8, 0, 0, VAR_7);
 }
}
