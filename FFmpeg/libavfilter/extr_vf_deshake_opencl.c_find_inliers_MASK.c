
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int should_consider; } ;
typedef TYPE_1__ MotionVector ;


 int FUNC_0 (TYPE_1__*,int const,double const*,float*) ;

__attribute__((used)) static int FUNC_1(
    MotionVector *VAR_0,
    const int VAR_1,
    const double *VAR_2,
    float *VAR_3,
    double VAR_4
) {
    float VAR_5 = (float)(VAR_4 * VAR_4);
    int VAR_6, VAR_7 = VAR_1, VAR_8 = 0;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        if (VAR_3[VAR_6] <= VAR_5) {

            VAR_0[VAR_6].should_consider = 1;
            VAR_8 += 1;
        } else {
            VAR_0[VAR_6].should_consider = 0;
        }
    }

    return VAR_8;
}
