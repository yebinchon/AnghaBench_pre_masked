
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3(const uint8_t *VAR_1, int VAR_2, int VAR_3,
                   int VAR_4)
{
    int VAR_5[VAR_0];
    int VAR_6 = 0;
    int VAR_7;
    int VAR_8 = 0;

    FUNC_2(VAR_5, 0, VAR_3 * sizeof(*VAR_5));

    for (VAR_7 = 0; VAR_7 < VAR_2 - 3; VAR_7++) {
        if (VAR_1[VAR_7] == 0x47) {
            int VAR_9 = FUNC_0(VAR_1+1) & 0x1FFF;
            int VAR_10 = VAR_1[VAR_7 + 3] & 0x30;
            if (!VAR_4 || VAR_9 == 0x1FFF || VAR_10) {
                int VAR_11 = VAR_7 % VAR_3;
                VAR_5[VAR_11]++;
                VAR_6++;
                if (VAR_5[VAR_11] > VAR_8) {
                    VAR_8 = VAR_5[VAR_11];
                }
            }
        }
    }

    return VAR_8 - FUNC_1(VAR_6 - 10*VAR_8, 0)/10;
}
