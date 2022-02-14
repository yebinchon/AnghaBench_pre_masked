
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int* pixels; } ;
struct TYPE_4__ {unsigned int depth; unsigned int size; TYPE_3__* blocks; int member_0; } ;
typedef int MacroBlock ;
typedef int GetBitContext ;
typedef TYPE_1__ CodeBook ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static CodeBook FUNC_3(GetBitContext* VAR_1, unsigned VAR_2,
                                 unsigned VAR_3)
{
    unsigned VAR_4, VAR_5;
    CodeBook VAR_6 = { 0 };

    if (VAR_3 >= VAR_0 / 34 || FUNC_2(VAR_1) < VAR_3 * 34)
        return VAR_6;

    if (VAR_3 >= VAR_0 / sizeof(MacroBlock))
        return VAR_6;
    VAR_6.blocks = FUNC_0(VAR_3 ? VAR_3 * sizeof(MacroBlock) : 1);
    if (!VAR_6.blocks)
        return VAR_6;

    VAR_6.depth = VAR_2;
    VAR_6.size = VAR_3;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        unsigned VAR_7 = FUNC_1(VAR_1, 4);
        unsigned VAR_8 = FUNC_1(VAR_1, 15);
        unsigned VAR_9 = FUNC_1(VAR_1, 15);

        for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
            if (VAR_7 & (1 << VAR_5))
                VAR_6.blocks[VAR_4].pixels[VAR_5] = VAR_9;
            else
                VAR_6.blocks[VAR_4].pixels[VAR_5] = VAR_8;
        }
    }
    return VAR_6;
}
