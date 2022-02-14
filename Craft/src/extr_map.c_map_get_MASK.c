
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int mask; TYPE_2__* data; scalar_t__ dz; scalar_t__ dy; scalar_t__ dx; } ;
struct TYPE_6__ {int x; int y; int z; int w; } ;
struct TYPE_7__ {TYPE_1__ e; } ;
typedef TYPE_2__ MapEntry ;
typedef TYPE_3__ Map ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int,int,int) ;

int FUNC_2(Map *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
    unsigned int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3) & VAR_0->mask;
    VAR_1 -= VAR_0->dx;
    VAR_2 -= VAR_0->dy;
    VAR_3 -= VAR_0->dz;
    if (VAR_1 < 0 || VAR_1 > 255) return 0;
    if (VAR_2 < 0 || VAR_2 > 255) return 0;
    if (VAR_3 < 0 || VAR_3 > 255) return 0;
    MapEntry *VAR_5 = VAR_0->data + VAR_4;
    while (!FUNC_0(VAR_5)) {
        if (VAR_5->e.x == VAR_1 && VAR_5->e.y == VAR_2 && VAR_5->e.z == VAR_3) {
            return VAR_5->e.w;
        }
        VAR_4 = (VAR_4 + 1) & VAR_0->mask;
        VAR_5 = VAR_0->data + VAR_4;
    }
    return 0;
}
