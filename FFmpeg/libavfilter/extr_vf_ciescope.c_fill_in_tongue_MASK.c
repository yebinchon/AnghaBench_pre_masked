
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ColorSystem {int dummy; } ;


 double FUNC_0 (double,double,double) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (double*,double*,double*) ;
 int FUNC_3 (int* const,int const,int const,int,int*,int*,int*) ;
 int FUNC_4 (struct ColorSystem const* const,double*,double*,double*) ;
 int FUNC_5 (double,double,double*,double*) ;
 int FUNC_6 (double,double,double*,double*) ;
 int FUNC_7 (double const**,double,double,double,double*,double*,double*) ;

__attribute__((used)) static void
FUNC_8(uint16_t* const VAR_3,
               int const VAR_4,
               int const VAR_5,
               int const VAR_6,
               uint16_t const VAR_7,
               const struct ColorSystem * const VAR_8,
               double const VAR_9[3][3],
               int const VAR_10,
               int const VAR_11,
               float const VAR_12)
{
    int VAR_13;






    for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {
        int VAR_14;
        int VAR_15;
        int VAR_16;

        FUNC_3(VAR_3, VAR_5, VAR_4, VAR_13, &VAR_14, &VAR_15, &VAR_16);

        if (VAR_14) {
            int VAR_17;

            for (VAR_17 = VAR_15; VAR_17 <= VAR_16; ++VAR_17) {
                double VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
                int VAR_25, VAR_26, VAR_27, VAR_28 = VAR_7;

                if (VAR_10 == VAR_0) {
                    double VAR_29, VAR_30;
                    VAR_29 = ((double) VAR_17) / (VAR_5 - 1);
                    VAR_30 = 1.0 - ((double) VAR_13) / (VAR_6 - 1);
                    FUNC_5(VAR_29, VAR_30, &VAR_18, &VAR_19);
                    VAR_20 = 1.0 - (VAR_18 + VAR_19);
                } else if (VAR_10 == VAR_1) {
                    double VAR_31, VAR_32;
                    VAR_31 = ((double) VAR_17) / (VAR_5 - 1);
                    VAR_32 = 1.0 - ((double) VAR_13) / (VAR_6 - 1);
                    FUNC_6(VAR_31, VAR_32, &VAR_18, &VAR_19);
                    VAR_20 = 1.0 - (VAR_18 + VAR_19);
                } else if (VAR_10 == VAR_2) {
                    VAR_18 = ((double) VAR_17) / (VAR_5 - 1);
                    VAR_19 = 1.0 - ((double) VAR_13) / (VAR_6 - 1);
                    VAR_20 = 1.0 - (VAR_18 + VAR_19);
                } else {
                    FUNC_1(0);
                }

                FUNC_7(VAR_9, VAR_18, VAR_19, VAR_20, &VAR_21, &VAR_22, &VAR_23);






                if (FUNC_2(&VAR_21, &VAR_22, &VAR_23))
                    VAR_28 *= VAR_12;

                VAR_24 = FUNC_0(VAR_21, VAR_22, VAR_23);
                if (VAR_24 > 0) {
                    VAR_21 = VAR_21 / VAR_24;
                    VAR_22 = VAR_22 / VAR_24;
                    VAR_23 = VAR_23 / VAR_24;
                }

                if (VAR_11)
                    FUNC_4(VAR_8, &VAR_21, &VAR_22, &VAR_23);
                VAR_25 = VAR_28 * VAR_21;
                VAR_26 = VAR_28 * VAR_22;
                VAR_27 = VAR_28 * VAR_23;
                VAR_3[VAR_13 * VAR_4 + VAR_17 * 4 + 0] = VAR_25;
                VAR_3[VAR_13 * VAR_4 + VAR_17 * 4 + 1] = VAR_26;
                VAR_3[VAR_13 * VAR_4 + VAR_17 * 4 + 2] = VAR_27;
                VAR_3[VAR_13 * VAR_4 + VAR_17 * 4 + 3] = 65535;
            }
        }
    }
}
