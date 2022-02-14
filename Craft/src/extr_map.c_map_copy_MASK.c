
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; int * data; int size; int dz; int dy; int dx; } ;
typedef int MapEntry ;
typedef TYPE_1__ Map ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2(Map *VAR_0, Map *VAR_1) {
    VAR_0->dx = VAR_1->dx;
    VAR_0->dy = VAR_1->dy;
    VAR_0->dz = VAR_1->dz;
    VAR_0->mask = VAR_1->mask;
    VAR_0->size = VAR_1->size;
    VAR_0->data = (MapEntry *)FUNC_0(VAR_0->mask + 1, sizeof(MapEntry));
    FUNC_1(VAR_0->data, VAR_1->data, (VAR_0->mask + 1) * sizeof(MapEntry));
}
