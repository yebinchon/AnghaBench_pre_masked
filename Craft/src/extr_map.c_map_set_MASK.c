
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int mask; int size; TYPE_2__* data; scalar_t__ dz; scalar_t__ dy; scalar_t__ dx; } ;
struct TYPE_7__ {int x; int y; int z; int w; } ;
struct TYPE_8__ {TYPE_1__ e; } ;
typedef TYPE_2__ MapEntry ;
typedef TYPE_3__ Map ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(Map *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    unsigned int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3) & VAR_0->mask;
    VAR_1 -= VAR_0->dx;
    VAR_2 -= VAR_0->dy;
    VAR_3 -= VAR_0->dz;
    MapEntry *VAR_6 = VAR_0->data + VAR_5;
    int VAR_7 = 0;
    while (!FUNC_0(VAR_6)) {
        if (VAR_6->e.x == VAR_1 && VAR_6->e.y == VAR_2 && VAR_6->e.z == VAR_3) {
            VAR_7 = 1;
            break;
        }
        VAR_5 = (VAR_5 + 1) & VAR_0->mask;
        VAR_6 = VAR_0->data + VAR_5;
    }
    if (VAR_7) {
        if (VAR_6->e.w != VAR_4) {
            VAR_6->e.w = VAR_4;
            return 1;
        }
    }
    else if (VAR_4) {
        VAR_6->e.x = VAR_1;
        VAR_6->e.y = VAR_2;
        VAR_6->e.z = VAR_3;
        VAR_6->e.w = VAR_4;
        VAR_0->size++;
        if (VAR_0->size * 2 > VAR_0->mask) {
            FUNC_2(VAR_0);
        }
        return 1;
    }
    return 0;
}
