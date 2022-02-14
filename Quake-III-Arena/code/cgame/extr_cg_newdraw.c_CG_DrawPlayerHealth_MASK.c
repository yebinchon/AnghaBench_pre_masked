
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
struct TYPE_8__ {int* stats; } ;
typedef TYPE_3__ playerState_t ;
typedef int num ;
struct TYPE_9__ {TYPE_1__* snap; } ;
struct TYPE_6__ {TYPE_3__ ps; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,float,int *,char*,int ,int ,int) ;
 int FUNC_2 (char*,float,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 size_t VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qhandle_t VAR_5, int VAR_6 ) {
 playerState_t *VAR_7;
  int VAR_8;
 char VAR_9[16];

 VAR_7 = &VAR_1.snap->ps;

 VAR_8 = VAR_7->stats[VAR_0];

 if (VAR_5) {
  FUNC_4( VAR_4 );
  FUNC_0(VAR_2->x, VAR_2->y, VAR_2->w, VAR_2->h, VAR_5);
  FUNC_4( ((void*)0) );
 } else {
  FUNC_3 (VAR_9, sizeof(VAR_9), "%i", VAR_8);
   VAR_8 = FUNC_2(VAR_9, VAR_3, 0);
   FUNC_1(VAR_2->x + (VAR_2->w - VAR_8) / 2, VAR_2->y + VAR_2->h, VAR_3, VAR_4, VAR_9, 0, 0, VAR_6);
 }
}
