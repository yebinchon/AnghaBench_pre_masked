
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_8__ {size_t* permutated; } ;
struct TYPE_7__ {int bits; int table; } ;
struct TYPE_6__ {int (* clear_block ) (int*) ;} ;
struct TYPE_9__ {int* dct_block; TYPE_3__ scantable; int gb; TYPE_2__ vlc; TYPE_1__ bdsp; } ;
typedef TYPE_4__ MimicContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int*) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_3(MimicContext *VAR_2, int VAR_3, int VAR_4)
{
    int16_t *VAR_5 = VAR_2->dct_block;
    unsigned int VAR_6;

    VAR_2->bdsp.clear_block(VAR_5);

    VAR_5[0] = FUNC_0(&VAR_2->gb, 8) << 3;

    for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
        uint32_t VAR_7, VAR_8;
        int VAR_9;
        int VAR_10;

        VAR_7 = FUNC_1(&VAR_2->gb, VAR_2->vlc.table, VAR_2->vlc.bits, 3);
        if (!VAR_7)
            return 0;
        if (VAR_7 == -1)
            return VAR_0;


        VAR_6 += VAR_7 & 15;
        VAR_8 = VAR_7 >> 4;

        if (VAR_6 >= 64)
            return VAR_0;

        VAR_9 = FUNC_0(&VAR_2->gb, VAR_8);




        VAR_10 = ((int8_t*)VAR_1[VAR_8])[VAR_9];
        if (VAR_6 < 3)
            VAR_10 *= 16;
        else
            VAR_10 = (VAR_10 * VAR_4) / 1001;

        VAR_5[VAR_2->scantable.permutated[VAR_6]] = VAR_10;
    }

    return 0;
}
