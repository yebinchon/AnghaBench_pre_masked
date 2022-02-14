
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {unsigned int sustain; int sustain_reset; int count_sustain_expired; scalar_t__ control; } ;
typedef TYPE_1__ hdcd_state ;
typedef int cdt_active ;
typedef int HDCDContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,int*,int const*,int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(HDCDContext *VAR_1, hdcd_state *VAR_2, int VAR_3, const int32_t *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9[VAR_0];
    FUNC_1(VAR_9, 0, sizeof(VAR_9));

    if (VAR_6 < VAR_3) VAR_6 = VAR_3;


    for(VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        if (VAR_2[VAR_8].sustain > 0) {
            VAR_9[VAR_8] = 1;
            if (VAR_2[VAR_8].sustain <= (unsigned)VAR_5) {
                VAR_2[VAR_8].control = 0;
                VAR_5 = VAR_2[VAR_8].sustain;
            }
            VAR_2[VAR_8].sustain -= VAR_5;
        }
    }

    VAR_7 = 0;
    while (VAR_7 < VAR_5) {
        int VAR_10;
        int VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_10, VAR_4, VAR_5 - VAR_7, VAR_6);
        VAR_7 += VAR_11;
        if (VAR_10) {

            for(VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
                if (VAR_10 & (1<<VAR_8)) {
                    VAR_2[VAR_8].sustain = VAR_2[VAR_8].sustain_reset;


                    if (VAR_2[VAR_8].count_sustain_expired == -1)
                        VAR_2[VAR_8].count_sustain_expired = 0;
                }
            }
            break;
        }
        VAR_4 += VAR_11 * VAR_6;
    }

    for(VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {

        if (VAR_9[VAR_8] && VAR_2[VAR_8].sustain == 0)
            VAR_2[VAR_8].count_sustain_expired++;
    }

    return VAR_7;
}
