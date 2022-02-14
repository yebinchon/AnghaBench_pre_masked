
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; int z; } ;
struct TYPE_6__ {int size; TYPE_2__* data; } ;
typedef TYPE_1__ SignList ;
typedef TYPE_2__ Sign ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

int FUNC_1(SignList *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
    int VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < VAR_0->size; VAR_5++) {
        Sign *VAR_6 = VAR_0->data + VAR_5;
        if (VAR_6->x == VAR_1 && VAR_6->y == VAR_2 && VAR_6->z == VAR_3) {
            Sign *VAR_7 = VAR_0->data + (--VAR_0->size);
            FUNC_0(VAR_6, VAR_7, sizeof(Sign));
            VAR_5--;
            VAR_4++;
        }
    }
    return VAR_4;
}
