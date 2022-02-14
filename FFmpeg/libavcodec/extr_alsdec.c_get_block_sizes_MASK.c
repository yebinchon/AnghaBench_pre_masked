
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int block_switching; unsigned int frame_length; } ;
struct TYPE_5__ {unsigned int num_blocks; unsigned int cur_frame_length; TYPE_1__ sconf; int gb; } ;
typedef int GetBitContext ;
typedef TYPE_1__ ALSSpecificConfig ;
typedef TYPE_2__ ALSDecContext ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int,int ,int ,unsigned int**,unsigned int*) ;

__attribute__((used)) static void FUNC_2(ALSDecContext *VAR_0, unsigned int *VAR_1,
                            uint32_t *VAR_2)
{
    ALSSpecificConfig *VAR_3 = &VAR_0->sconf;
    GetBitContext *VAR_4 = &VAR_0->gb;
    unsigned int *VAR_5 = VAR_1;
    unsigned int VAR_6;

    if (VAR_3->block_switching) {
        unsigned int VAR_7 = 1 << (VAR_3->block_switching + 2);
        *VAR_2 = FUNC_0(VAR_4, VAR_7);
        *VAR_2 <<= (32 - VAR_7);
    }

    VAR_0->num_blocks = 0;
    FUNC_1(*VAR_2, 0, 0, &VAR_5, &VAR_0->num_blocks);
    for (VAR_6 = 0; VAR_6 < VAR_0->num_blocks; VAR_6++)
        VAR_1[VAR_6] = VAR_0->sconf.frame_length >> VAR_1[VAR_6];

    if (VAR_0->cur_frame_length != VAR_0->sconf.frame_length) {
        unsigned int VAR_8 = VAR_0->cur_frame_length;

        for (VAR_6 = 0; VAR_6 < VAR_0->num_blocks; VAR_6++) {
            if (VAR_8 <= VAR_1[VAR_6]) {
                VAR_1[VAR_6] = VAR_8;
                VAR_0->num_blocks = VAR_6 + 1;
                break;
            }

            VAR_8 -= VAR_1[VAR_6];
        }
    }
}
