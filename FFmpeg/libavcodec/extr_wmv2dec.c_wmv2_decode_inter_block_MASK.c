
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_8__ {int const* permutated; } ;
struct TYPE_10__ {int* block_last_index; TYPE_2__ inter_scantable; int gb; } ;
struct TYPE_9__ {size_t abt_type; size_t* abt_type_table; int ** abt_block2; TYPE_1__* abt_scantable; scalar_t__ per_block_abt; TYPE_4__ s; } ;
typedef TYPE_3__ Wmv2Context ;
struct TYPE_7__ {int * scantable; } ;
typedef TYPE_4__ MpegEncContext ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__* const,int *,int,int,int const*) ;

__attribute__((used)) static inline int FUNC_2(Wmv2Context *VAR_0, int16_t *VAR_1,
                                          int VAR_2, int VAR_3)
{
    MpegEncContext *const VAR_4 = &VAR_0->s;
    static const int VAR_5[3] = { 2, 3, 1 };
    int VAR_6, VAR_7;

    if (!VAR_3) {
        VAR_4->block_last_index[VAR_2] = -1;
        return 0;
    }

    if (VAR_0->per_block_abt)
        VAR_0->abt_type = FUNC_0(&VAR_4->gb);
    VAR_0->abt_type_table[VAR_2] = VAR_0->abt_type;

    if (VAR_0->abt_type) {

        const uint8_t *VAR_8 = VAR_0->abt_scantable[VAR_0->abt_type - 1].scantable;


        VAR_6 = VAR_5[FUNC_0(&VAR_4->gb)];

        if (VAR_6 & 1)
            if ((VAR_7 = FUNC_1(VAR_4, VAR_1, VAR_2, 1, VAR_8)) < 0)
                return VAR_7;

        if (VAR_6 & 2)
            if ((VAR_7 = FUNC_1(VAR_4, VAR_0->abt_block2[VAR_2], VAR_2, 1, VAR_8)) < 0)
                return VAR_7;

        VAR_4->block_last_index[VAR_2] = 63;

        return 0;
    } else {
        return FUNC_1(VAR_4, VAR_1, VAR_2, 1,
                                       VAR_4->inter_scantable.permutated);
    }
}
