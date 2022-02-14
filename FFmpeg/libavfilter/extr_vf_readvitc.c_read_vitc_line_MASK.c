
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ scan_max; int* line_data; scalar_t__ threshold_white; scalar_t__ threshold_black; int grp_width; scalar_t__ threshold_gray; } ;
typedef TYPE_1__ ReadVitcContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ,int ) ;

__attribute__((used)) static int FUNC_5( ReadVitcContext *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5 )
{
    uint8_t *VAR_6;
    int VAR_7, VAR_8;
    int VAR_9;
    uint8_t VAR_10;
    int VAR_11, VAR_12, VAR_13 = 0;

    if (VAR_1->scan_max >= 0)
        VAR_5 = FUNC_1(VAR_5, VAR_1->scan_max);


    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
        VAR_6 = VAR_2;
        FUNC_4(VAR_1->line_data, 0, VAR_0);
        VAR_7 = 0;
        VAR_11 = 0;
        while ((VAR_11 < VAR_4) && (VAR_7 < 9)) {

            while ((VAR_11 < VAR_4) && (VAR_6[VAR_11] < VAR_1->threshold_white))
                VAR_11++;
            while ((VAR_11 < VAR_4) && (VAR_6[VAR_11] > VAR_1->threshold_black))
                VAR_11++;
            VAR_11 = FUNC_0(VAR_11 - ((VAR_1->grp_width+10) / 20), 1);
            VAR_9 = VAR_11;
            if ((VAR_9 + VAR_1->grp_width) > VAR_4)
                break;
            VAR_10 = FUNC_2(VAR_6, VAR_11);
            if (VAR_10 < VAR_1->threshold_white)
               break;
            VAR_11 = VAR_9 + ((VAR_1->grp_width) / 10);
            VAR_10 = FUNC_2(VAR_6, VAR_11);
            if (VAR_10 > VAR_1->threshold_black )
                break;
            for (VAR_8 = 0; VAR_8 <= 7; VAR_8++) {
                VAR_11 = VAR_9 + (((VAR_8+2)*VAR_1->grp_width) / 10);
                VAR_10 = FUNC_2(VAR_6, VAR_11);
                if (VAR_10 > VAR_1->threshold_gray)
                    VAR_1->line_data[VAR_7] |= (1 << VAR_8);
            }
            VAR_7++;
        }
        if ((VAR_7 == 9) && (FUNC_3(VAR_1->line_data) == VAR_1->line_data[8])) {
            VAR_13 = 1;
            break;
        }
        VAR_2 += VAR_3;
    }

    return VAR_13;
}
