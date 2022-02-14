
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int pitch; int width; int* small_codebook; int* codebook; int gb; int frm0; int frm1; int frm2; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int,int) ;
 int** VAR_1 ;
 int FUNC_6 (TYPE_1__*,int,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(SANMVideoContext *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int16_t VAR_6, VAR_7, VAR_8;
    int VAR_9;

    if (FUNC_0(&VAR_2->gb) < 1)
        return VAR_0;

    VAR_9 = FUNC_1(&VAR_2->gb);

    switch (VAR_9) {
    default:
        VAR_6 = VAR_1[VAR_9][0];
        VAR_7 = VAR_1[VAR_9][1];

        if (FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, VAR_5)) {
            FUNC_3(VAR_2->frm0 + VAR_3 + VAR_2->pitch * VAR_4,
                       VAR_2->frm2 + VAR_3 + VAR_6 + VAR_2->pitch * (VAR_4 + VAR_7),
                       VAR_5, VAR_2->pitch);
        }
        break;
    case 0xF5:
        if (FUNC_0(&VAR_2->gb) < 2)
            return VAR_0;
        VAR_8 = FUNC_2(&VAR_2->gb);

        VAR_6 = VAR_8 % VAR_2->width;
        VAR_7 = VAR_8 / VAR_2->width;

        if (FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, VAR_5)) {
            FUNC_3(VAR_2->frm0 + VAR_3 + VAR_2->pitch * VAR_4,
                       VAR_2->frm2 + VAR_3 + VAR_6 + VAR_2->pitch * (VAR_4 + VAR_7),
                       VAR_5, VAR_2->pitch);
        }
        break;
    case 0xF6:
        FUNC_3(VAR_2->frm0 + VAR_3 + VAR_2->pitch * VAR_4,
                   VAR_2->frm1 + VAR_3 + VAR_2->pitch * VAR_4,
                   VAR_5, VAR_2->pitch);
        break;
    case 0xF7:
        FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_2->pitch);
        break;

    case 0xF8:
        FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_2->pitch);
        break;
    case 0xF9:
    case 0xFA:
    case 0xFB:
    case 0xFC:
        FUNC_4(VAR_2->frm0 + VAR_3 + VAR_4 * VAR_2->pitch,
                   VAR_2->small_codebook[VAR_9 - 0xf9], VAR_5, VAR_2->pitch);
        break;
    case 0xFD:
        if (FUNC_0(&VAR_2->gb) < 1)
            return VAR_0;
        FUNC_4(VAR_2->frm0 + VAR_3 + VAR_4 * VAR_2->pitch,
                   VAR_2->codebook[FUNC_1(&VAR_2->gb)], VAR_5, VAR_2->pitch);
        break;
    case 0xFE:
        if (FUNC_0(&VAR_2->gb) < 2)
            return VAR_0;
        FUNC_4(VAR_2->frm0 + VAR_3 + VAR_4 * VAR_2->pitch,
                   FUNC_2(&VAR_2->gb), VAR_5, VAR_2->pitch);
        break;
    case 0xFF:
        if (VAR_5 == 2) {
            FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_2->pitch);
        } else {
            VAR_5 >>= 1;
            if (FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5))
                return VAR_0;
            if (FUNC_8(VAR_2, VAR_3 + VAR_5, VAR_4, VAR_5))
                return VAR_0;
            if (FUNC_8(VAR_2, VAR_3, VAR_4 + VAR_5, VAR_5))
                return VAR_0;
            if (FUNC_8(VAR_2, VAR_3 + VAR_5, VAR_4 + VAR_5, VAR_5))
                return VAR_0;
        }
        break;
    }
    return 0;
}
