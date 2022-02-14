
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__** mvs; scalar_t__ sb; scalar_t__ cid; } ;
struct TYPE_6__ {int b_height; int b_width; TYPE_2__* int_blocks; } ;
typedef TYPE_1__ MIContext ;
typedef TYPE_2__ Block ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(MIContext *VAR_0)
{
    Block *VAR_1;
    int VAR_2, VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->b_height; VAR_3++)
        for (VAR_2 = 0; VAR_2 < VAR_0->b_width; VAR_2++) {
            VAR_1 = &VAR_0->int_blocks[VAR_2 + VAR_3 * VAR_0->b_width];

            VAR_1->cid = 0;
            VAR_1->sb = 0;

            VAR_1->mvs[0][0] = 0;
            VAR_1->mvs[0][1] = 0;
        }

    for (VAR_3 = 0; VAR_3 < VAR_0->b_height; VAR_3++)
        for (VAR_2 = 0; VAR_2 < VAR_0->b_width; VAR_2++)
            FUNC_0(VAR_0, VAR_0->int_blocks, VAR_2, VAR_3, 0);
}
