
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int nb_samples; int uval; int* coding_mode; int gb; } ;
typedef TYPE_1__ TAKDecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(TAKDecContext *VAR_1, int32_t *VAR_2, int VAR_3)
{
    GetBitContext *VAR_4 = &VAR_1->gb;
    int VAR_5, VAR_6, VAR_7;

    if (VAR_3 > VAR_1->nb_samples)
        return VAR_0;

    if (FUNC_2(VAR_4)) {
        int VAR_8, VAR_9;

        VAR_8 = VAR_3 / VAR_1->uval;

        VAR_9 = VAR_3 - (VAR_8 * VAR_1->uval);

        if (VAR_9 < VAR_1->uval / 2)
            VAR_9 += VAR_1->uval;
        else
            VAR_8++;

        if (VAR_8 <= 1 || VAR_8 > 128)
            return VAR_0;

        VAR_1->coding_mode[0] = VAR_6 = FUNC_1(VAR_4, 6);

        for (VAR_5 = 1; VAR_5 < VAR_8; VAR_5++) {
            int VAR_10 = FUNC_3(VAR_4, 1, 6);

            switch (VAR_10) {
            case 6:
                VAR_6 = FUNC_1(VAR_4, 6);
                break;
            case 5:
            case 4:
            case 3: {

                int VAR_11 = FUNC_2(VAR_4);
                VAR_6 += (-VAR_11 ^ (VAR_10 - 1)) + VAR_11;
                break;
            }
            case 2:
                VAR_6++;
                break;
            case 1:
                VAR_6--;
                break;
            }
            VAR_1->coding_mode[VAR_5] = VAR_6;
        }

        VAR_5 = 0;
        while (VAR_5 < VAR_8) {
            int VAR_12 = 0;

            VAR_6 = VAR_1->coding_mode[VAR_5];
            do {
                if (VAR_5 >= VAR_8 - 1)
                    VAR_12 += VAR_9;
                else
                    VAR_12 += VAR_1->uval;
                VAR_5++;

                if (VAR_5 == VAR_8)
                    break;
            } while (VAR_1->coding_mode[VAR_5] == VAR_6);

            if ((VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_2, VAR_12)) < 0)
                return VAR_7;
            VAR_2 += VAR_12;
        }
    } else {
        VAR_6 = FUNC_1(VAR_4, 6);
        if ((VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_2, VAR_3)) < 0)
            return VAR_7;
    }

    return 0;
}
