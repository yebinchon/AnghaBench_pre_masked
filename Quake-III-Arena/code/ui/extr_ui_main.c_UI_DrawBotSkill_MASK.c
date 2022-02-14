
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ rectDef_t ;
struct TYPE_5__ {size_t skillIndex; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6) {
 if (VAR_2.skillIndex >= 0 && VAR_2.skillIndex < VAR_0) {
   FUNC_0(VAR_3->x, VAR_3->y, VAR_4, VAR_5, VAR_1[VAR_2.skillIndex], 0, 0, VAR_6);
 }
}
