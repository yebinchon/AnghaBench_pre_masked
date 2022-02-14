
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dx; int dy; int dz; int mask; int * data; scalar_t__ size; } ;
typedef int MapEntry ;
typedef TYPE_1__ Map ;


 scalar_t__ FUNC_0 (int,int) ;

void FUNC_1(Map *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    VAR_0->dx = VAR_1;
    VAR_0->dy = VAR_2;
    VAR_0->dz = VAR_3;
    VAR_0->mask = VAR_4;
    VAR_0->size = 0;
    VAR_0->data = (MapEntry *)FUNC_0(VAR_0->mask + 1, sizeof(MapEntry));
}
