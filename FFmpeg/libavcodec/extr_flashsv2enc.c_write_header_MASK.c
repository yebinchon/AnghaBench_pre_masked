
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int block_width; int image_width; int block_height; int image_height; int flags; } ;
typedef int PutBitContext ;
typedef TYPE_1__ FlashSV2Context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_4(FlashSV2Context * VAR_1, uint8_t * VAR_2, int VAR_3)
{
    PutBitContext VAR_4;
    int VAR_5, VAR_6;

    if (VAR_3 < 5)
        return -1;

    FUNC_1(&VAR_4, VAR_2, VAR_3);

    FUNC_2(&VAR_4, 4, (VAR_1->block_width >> 4) - 1);
    FUNC_2(&VAR_4, 12, VAR_1->image_width);
    FUNC_2(&VAR_4, 4, (VAR_1->block_height >> 4) - 1);
    FUNC_2(&VAR_4, 12, VAR_1->image_height);

    FUNC_0(&VAR_4);
    VAR_5 = 4;

    VAR_2[VAR_5++] = VAR_1->flags;

    if (VAR_1->flags & VAR_0) {
        VAR_6 = FUNC_3(VAR_1, VAR_2 + VAR_5, VAR_3 - VAR_5);
        if (VAR_6 < 0)
            return -1;
        VAR_5 += VAR_6;
    }

    return VAR_5;
}
