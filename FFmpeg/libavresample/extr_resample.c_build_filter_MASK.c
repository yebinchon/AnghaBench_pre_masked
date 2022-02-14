
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filter_length; int phase_shift; int filter_type; int kaiser_beta; int filter_bank; int (* set_filter ) (int ,double*,int,int) ;} ;
typedef TYPE_1__ ResampleContext ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 double VAR_1 ;
 int FUNC_2 (double*) ;
 double* FUNC_3 (int) ;
 double FUNC_4 (int) ;
 double FUNC_5 (int) ;
 double FUNC_6 (double) ;
 double FUNC_7 (double) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,double*,int,int) ;

__attribute__((used)) static int FUNC_10(ResampleContext *VAR_2, double VAR_3)
{
    int VAR_4, VAR_5;
    double VAR_6, VAR_7, VAR_8;
    double *VAR_9;
    int VAR_10 = VAR_2->filter_length;
    int VAR_11 = 1 << VAR_2->phase_shift;
    const int VAR_12 = (VAR_10 - 1) / 2;

    VAR_9 = FUNC_3(VAR_10 * sizeof(*VAR_9));
    if (!VAR_9)
        return FUNC_0(VAR_0);

    for (VAR_4 = 0; VAR_4 < VAR_11; VAR_4++) {
        double VAR_13 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
            VAR_6 = VAR_1 * ((double)(VAR_5 - VAR_12) - (double)VAR_4 / VAR_11) * VAR_3;
            if (VAR_6 == 0) VAR_7 = 1.0;
            else VAR_7 = FUNC_7(VAR_6) / VAR_6;
            switch (VAR_2->filter_type) {
            case 129: {
                const float VAR_14 = -0.5;
                VAR_6 = FUNC_6(((double)(VAR_5 - VAR_12) - (double)VAR_4 / VAR_11) * VAR_3);
                if (VAR_6 < 1.0) VAR_7 = 1 - 3 * VAR_6*VAR_6 + 2 * VAR_6*VAR_6*VAR_6 + VAR_14 * ( -VAR_6*VAR_6 + VAR_6*VAR_6*VAR_6);
                else VAR_7 = VAR_14 * (-4 + 8 * VAR_6 - 5 * VAR_6*VAR_6 + VAR_6*VAR_6*VAR_6);
                break;
            }
            case 130:
                VAR_8 = 2.0 * VAR_6 / (VAR_3 * VAR_10) + VAR_1;
                VAR_7 *= 0.3635819 - 0.4891775 * FUNC_5( VAR_8) +
                                 0.1365995 * FUNC_5(2 * VAR_8) -
                                 0.0106411 * FUNC_5(3 * VAR_8);
                break;
            case 128:
                VAR_8 = 2.0 * VAR_6 / (VAR_3 * VAR_10 * VAR_1);
                VAR_7 *= FUNC_4(VAR_2->kaiser_beta * FUNC_8(FUNC_1(1 - VAR_8 * VAR_8, 0)));
                break;
            }

            VAR_9[VAR_5] = VAR_7;
            VAR_13 += VAR_7;
        }

        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
            VAR_9[VAR_5] = VAR_9[VAR_5] / VAR_13;

        VAR_2->set_filter(VAR_2->filter_bank, VAR_9, VAR_4, VAR_10);
    }

    FUNC_2(VAR_9);
    return 0;
}
