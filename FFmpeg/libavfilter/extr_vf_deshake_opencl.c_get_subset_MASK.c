
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MotionVector ;
typedef int AVLFG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int const,int *) ;

__attribute__((used)) static bool FUNC_2(
    AVLFG *VAR_0,
    const MotionVector *VAR_1,
    const int VAR_2,
    MotionVector *VAR_3,
    int VAR_4
) {
    int VAR_5[3];
    int VAR_6 = 0, VAR_7, VAR_8 = 0;

    for (; VAR_8 < VAR_4; VAR_8++) {
        for (VAR_6 = 0; VAR_6 < 3 && VAR_8 < VAR_4;) {
            int VAR_9 = 0;

            for (;;) {
                VAR_9 = VAR_5[VAR_6] = FUNC_1(0, VAR_2, VAR_0);

                for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
                    if (VAR_9 == VAR_5[VAR_7]) {
                        break;
                    }
                }

                if (VAR_7 == VAR_6) {
                    break;
                }
            }

            VAR_3[VAR_6] = VAR_1[VAR_5[VAR_6]];
            VAR_6++;
        }

        if (VAR_6 == 3 && !FUNC_0(VAR_3)) {
            continue;
        }
        break;
    }

    return VAR_6 == 3 && VAR_8 < VAR_4;
}
