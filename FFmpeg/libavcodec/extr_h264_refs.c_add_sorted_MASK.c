
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int poc; } ;
typedef TYPE_1__ H264Picture ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(H264Picture **VAR_2, H264Picture * const *VAR_3,
                      int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9 = 0;

    for (;;) {
        VAR_8 = VAR_6 ? VAR_1 : VAR_0;

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            const int VAR_10 = VAR_3[VAR_7]->poc;
            if (((VAR_10 > VAR_5) ^ VAR_6) && ((VAR_10 < VAR_8) ^ VAR_6)) {
                VAR_8 = VAR_10;
                VAR_2[VAR_9] = VAR_3[VAR_7];
            }
        }
        if (VAR_8 == (VAR_6 ? VAR_1 : VAR_0))
            break;
        VAR_5 = VAR_2[VAR_9++]->poc - VAR_6;
    }
    return VAR_9;
}
