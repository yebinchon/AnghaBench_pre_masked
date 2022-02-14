
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {int x; int w; scalar_t__ h; scalar_t__ y; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qhandle_t ;
struct TYPE_5__ {scalar_t__* killerName; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,scalar_t__,float,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,float,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, qhandle_t VAR_4, int VAR_5 ) {

 if ( VAR_0.killerName[0] ) {
  int VAR_6 = VAR_1->x + VAR_1->w / 2;
   FUNC_1(VAR_6 - FUNC_2(FUNC_0(), VAR_2, 0) / 2, VAR_1->y + VAR_1->h, VAR_2, VAR_3, FUNC_0(), 0, 0, VAR_5);
 }

}
