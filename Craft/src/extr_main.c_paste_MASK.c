
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; scalar_t__ z; scalar_t__ x; } ;
struct TYPE_4__ {TYPE_1__ block0; TYPE_1__ block1; TYPE_1__ copy0; TYPE_1__ copy1; } ;
typedef TYPE_1__ Block ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,scalar_t__,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (scalar_t__,int,scalar_t__) ;

void FUNC_4() {
    Block *VAR_1 = &VAR_0->copy1;
    Block *VAR_2 = &VAR_0->copy0;
    Block *VAR_3 = &VAR_0->block1;
    Block *VAR_4 = &VAR_0->block0;
    int VAR_5 = FUNC_1(VAR_2->x - VAR_1->x);
    int VAR_6 = FUNC_1(VAR_2->z - VAR_1->z);
    int VAR_7 = FUNC_1(VAR_4->x - VAR_3->x);
    int VAR_8 = FUNC_1(VAR_4->z - VAR_3->z);
    int VAR_9 = VAR_3->y - VAR_1->y;
    int VAR_10 = FUNC_0(VAR_2->x - VAR_1->x);
    int VAR_11 = FUNC_0(VAR_2->z - VAR_1->z);
    for (int VAR_12 = 0; VAR_12 < 256; VAR_12++) {
        for (int VAR_13 = 0; VAR_13 <= VAR_10; VAR_13++) {
            for (int VAR_14 = 0; VAR_14 <= VAR_11; VAR_14++) {
                int VAR_15 = FUNC_3(VAR_1->x + VAR_13 * VAR_5, VAR_12, VAR_1->z + VAR_14 * VAR_6);
                FUNC_2(VAR_3->x + VAR_13 * VAR_7, VAR_12 + VAR_9, VAR_3->z + VAR_14 * VAR_8, VAR_15);
            }
        }
    }
}
