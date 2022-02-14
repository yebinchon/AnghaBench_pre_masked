
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef size_t ptrdiff_t ;
struct TYPE_4__ {int pitch; int gb; int * codebook; int * frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int,int ,int ,int,size_t) ;

__attribute__((used)) static int FUNC_4(SANMVideoContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, ptrdiff_t VAR_5)
{
    uint16_t *VAR_6 = VAR_1->frm0 + VAR_2 + VAR_3 * VAR_1->pitch;

    if (VAR_4 == 2) {
        uint32_t VAR_7;

        if (FUNC_0(&VAR_1->gb) < 4)
            return VAR_0;

        VAR_7 = FUNC_2(&VAR_1->gb);
        VAR_6[0] = VAR_1->codebook[VAR_7 & 0xFF];
        VAR_7 >>= 8;
        VAR_6[1] = VAR_1->codebook[VAR_7 & 0xFF];
        VAR_7 >>= 8;
        VAR_6[VAR_5] = VAR_1->codebook[VAR_7 & 0xFF];
        VAR_7 >>= 8;
        VAR_6[VAR_5 + 1] = VAR_1->codebook[VAR_7 & 0xFF];
    } else {
        uint16_t VAR_8, VAR_9;
        int VAR_10;

        if (FUNC_0(&VAR_1->gb) < 3)
            return VAR_0;

        VAR_10 = FUNC_1(&VAR_1->gb);
        VAR_9 = VAR_1->codebook[FUNC_1(&VAR_1->gb)];
        VAR_8 = VAR_1->codebook[FUNC_1(&VAR_1->gb)];

        FUNC_3(VAR_1, VAR_6, VAR_10, VAR_8, VAR_9, VAR_4, VAR_5);
    }
    return 0;
}
