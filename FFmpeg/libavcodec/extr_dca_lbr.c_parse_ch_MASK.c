
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int table; } ;
struct TYPE_5__ {float*** time_samples; unsigned int* ch_pres; int gb; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 float* VAR_1 ;
 float* VAR_2 ;
 float* VAR_3 ;
 float* VAR_4 ;
 float* VAR_5 ;
 float* VAR_6 ;
 size_t** VAR_7 ;
 int* VAR_8 ;
 TYPE_4__ VAR_9 ;
 size_t FUNC_3 (int *,int) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *,int ,int,int) ;
 float FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_8(DCALbrDecoder *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
    float *VAR_15 = VAR_10->time_samples[VAR_11][VAR_12];
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

    if (FUNC_2(&VAR_10->gb, 20))
        return;

    VAR_20 = FUNC_4(&VAR_10->gb);

    switch (VAR_13) {
    case 1:
        VAR_19 = FUNC_0(FUNC_5(&VAR_10->gb) / 8, VAR_0 / 8);
        for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++, VAR_15 += 8) {
            VAR_18 = FUNC_3(&VAR_10->gb, 8);
            for (VAR_17 = 0; VAR_17 < 8; VAR_17++)
                VAR_15[VAR_17] = VAR_2[(VAR_18 >> VAR_17) & 1];
        }
        VAR_16 = VAR_19 * 8;
        break;

    case 2:
        if (VAR_20) {
            for (VAR_16 = 0; VAR_16 < VAR_0 && FUNC_5(&VAR_10->gb) >= 2; VAR_16++) {
                if (FUNC_4(&VAR_10->gb))
                    VAR_15[VAR_16] = VAR_3[FUNC_4(&VAR_10->gb)];
                else
                    VAR_15[VAR_16] = 0;
            }
        } else {
            VAR_19 = FUNC_0(FUNC_5(&VAR_10->gb) / 8, (VAR_0 + 4) / 5);
            for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++, VAR_15 += 5) {
                VAR_18 = VAR_8[FUNC_3(&VAR_10->gb, 8)];
                for (VAR_17 = 0; VAR_17 < 5; VAR_17++)
                    VAR_15[VAR_17] = VAR_4[(VAR_18 >> VAR_17 * 2) & 3];
            }
            VAR_16 = VAR_19 * 5;
        }
        break;

    case 3:
        VAR_19 = FUNC_0(FUNC_5(&VAR_10->gb) / 7, (VAR_0 + 2) / 3);
        for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++, VAR_15 += 3) {
            VAR_18 = FUNC_3(&VAR_10->gb, 7);
            for (VAR_17 = 0; VAR_17 < 3; VAR_17++)
                VAR_15[VAR_17] = VAR_5[VAR_7[VAR_18][VAR_17]];
        }
        VAR_16 = VAR_19 * 3;
        break;

    case 4:
        for (VAR_16 = 0; VAR_16 < VAR_0 && FUNC_5(&VAR_10->gb) >= 6; VAR_16++)
            VAR_15[VAR_16] = VAR_6[FUNC_6(&VAR_10->gb, VAR_9.table, 6, 1)];
        break;

    case 5:
        VAR_19 = FUNC_0(FUNC_5(&VAR_10->gb) / 4, VAR_0);
        for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
            VAR_15[VAR_16] = VAR_1[FUNC_3(&VAR_10->gb, 4)];
        break;

    default:
        FUNC_1(0);
    }

    if (VAR_14 && FUNC_5(&VAR_10->gb) < 20)
        return;

    for (; VAR_16 < VAR_0; VAR_16++)
        VAR_10->time_samples[VAR_11][VAR_12][VAR_16] = FUNC_7(VAR_10, VAR_12);

    VAR_10->ch_pres[VAR_11] |= 1U << VAR_12;
}
