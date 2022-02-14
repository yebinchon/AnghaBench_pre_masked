
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int z; int w; } ;
struct TYPE_4__ {TYPE_1__ block0; int block1; } ;
typedef int Block ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;

void FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    FUNC_0(&VAR_0->block1, &VAR_0->block0, sizeof(Block));
    VAR_0->block0.x = VAR_1;
    VAR_0->block0.y = VAR_2;
    VAR_0->block0.z = VAR_3;
    VAR_0->block0.w = VAR_4;
}
