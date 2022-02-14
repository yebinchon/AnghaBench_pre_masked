
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int gb; int avctx; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(DCALbrDecoder *VAR_4, uint8_t *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;


    if (FUNC_1(&VAR_4->gb, 20))
        return 0;


    VAR_8 = FUNC_2(&VAR_4->gb, &VAR_1, 2);

    for (VAR_7 = 0; VAR_7 < 7; VAR_7 += VAR_10) {
        VAR_5[VAR_7] = VAR_8;

        if (FUNC_1(&VAR_4->gb, 20))
            return 0;


        VAR_10 = FUNC_2(&VAR_4->gb, &VAR_3, 1) + 1;
        if (VAR_10 > 7 - VAR_7) {
            FUNC_0(VAR_4->avctx, VAR_0, "Invalid scale factor distance\n");
            return -1;
        }

        if (FUNC_1(&VAR_4->gb, 20))
            return 0;


        VAR_9 = FUNC_2(&VAR_4->gb, &VAR_2, 2);

        if (VAR_9 & 1)
            VAR_9 = VAR_8 + ((VAR_9 + 1) >> 1);
        else
            VAR_9 = VAR_8 - ( VAR_9 >> 1);


        switch (VAR_10) {
        case 2:
            if (VAR_9 > VAR_8)
                VAR_5[VAR_7 + 1] = VAR_8 + ((VAR_9 - VAR_8) >> 1);
            else
                VAR_5[VAR_7 + 1] = VAR_8 - ((VAR_8 - VAR_9) >> 1);
            break;

        case 4:
            if (VAR_9 > VAR_8) {
                VAR_5[VAR_7 + 1] = VAR_8 + ( (VAR_9 - VAR_8) >> 2);
                VAR_5[VAR_7 + 2] = VAR_8 + ( (VAR_9 - VAR_8) >> 1);
                VAR_5[VAR_7 + 3] = VAR_8 + (((VAR_9 - VAR_8) * 3) >> 2);
            } else {
                VAR_5[VAR_7 + 1] = VAR_8 - ( (VAR_8 - VAR_9) >> 2);
                VAR_5[VAR_7 + 2] = VAR_8 - ( (VAR_8 - VAR_9) >> 1);
                VAR_5[VAR_7 + 3] = VAR_8 - (((VAR_8 - VAR_9) * 3) >> 2);
            }
            break;

        default:
            for (VAR_6 = 1; VAR_6 < VAR_10; VAR_6++)
                VAR_5[VAR_7 + VAR_6] = VAR_8 + (VAR_9 - VAR_8) * VAR_6 / VAR_10;
            break;
        }

        VAR_8 = VAR_9;
    }

    VAR_5[VAR_7] = VAR_9;

    return 0;
}
