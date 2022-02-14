
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int int64_t ;
typedef enum AVMatrixEncoding { ____Placeholder_AVMatrixEncoding } AVMatrixEncoding ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 double FUNC_1 (double,double) ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 double VAR_23 ;
 double VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 double VAR_27 ;
 int FUNC_2 (unsigned long long) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (double*,int ,int) ;
 int FUNC_5 (unsigned long long) ;

int FUNC_6(uint64_t VAR_28, uint64_t VAR_29,
                            double VAR_30, double VAR_31,
                            double VAR_32, int VAR_33,
                            double *VAR_34, int VAR_35,
                            enum AVMatrixEncoding VAR_36)
{
    int VAR_37, VAR_38, VAR_39, VAR_40;
    double VAR_41[64][64] = {{0}};
    int64_t VAR_42;
    double VAR_43 = 0;
    int VAR_44, VAR_45;

    if ((VAR_29 & VAR_8) == VAR_8) {
        VAR_29 = VAR_7;
    }

    VAR_42 = VAR_28 & ~VAR_29;

    VAR_44 = FUNC_2( VAR_28);
    VAR_45 = FUNC_2(VAR_29);

    FUNC_4(VAR_34, 0, VAR_45 * VAR_35 * sizeof(*VAR_34));


    if (!VAR_28 || VAR_44 > VAR_1)
        return FUNC_0(VAR_16);
    if (!VAR_29 || VAR_45 > VAR_1)
        return FUNC_0(VAR_16);


    if (!FUNC_5(VAR_28) || !FUNC_5(VAR_29))
        return VAR_0;


    for (VAR_37 = 0; VAR_37 < 64; VAR_37++) {
        if (VAR_28 & VAR_29 & (1ULL << VAR_37))
            VAR_41[VAR_37][VAR_37] = 1.0;
    }


    if (VAR_42 & VAR_4) {
        if ((VAR_29 & VAR_7) == VAR_7) {
            if ((VAR_28 & VAR_7) == VAR_7) {
                VAR_41[VAR_18 ][VAR_17] += VAR_30;
                VAR_41[VAR_20][VAR_17] += VAR_30;
            } else {
                VAR_41[VAR_18 ][VAR_17] += VAR_23;
                VAR_41[VAR_20][VAR_17] += VAR_23;
            }
        } else
            return VAR_0;
    }

    if (VAR_42 & VAR_7) {
        if (VAR_29 & VAR_4) {
            VAR_41[VAR_17][VAR_18 ] += VAR_23;
            VAR_41[VAR_17][VAR_20] += VAR_23;

            if (VAR_28 & VAR_4)
                VAR_41[VAR_17][VAR_17] = VAR_30 * VAR_24;
        } else
            return VAR_0;
    }

    if (VAR_42 & VAR_2) {
        if (VAR_29 & VAR_3) {
            VAR_41[VAR_14 ][VAR_13] += VAR_23;
            VAR_41[VAR_15][VAR_13] += VAR_23;
        } else if (VAR_29 & VAR_10) {
            VAR_41[VAR_25 ][VAR_13] += VAR_23;
            VAR_41[VAR_26][VAR_13] += VAR_23;
        } else if (VAR_29 & VAR_5) {
            if (VAR_36 == VAR_11 ||
                VAR_36 == VAR_12) {
                if (VAR_42 & (VAR_3 | VAR_10)) {
                    VAR_41[VAR_18 ][VAR_13] -= VAR_31 * VAR_23;
                    VAR_41[VAR_20][VAR_13] += VAR_31 * VAR_23;
                } else {
                    VAR_41[VAR_18 ][VAR_13] -= VAR_31;
                    VAR_41[VAR_20][VAR_13] += VAR_31;
                }
            } else {
                VAR_41[VAR_18 ][VAR_13] += VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_13] += VAR_31 * VAR_23;
            }
        } else if (VAR_29 & VAR_4) {
            VAR_41[VAR_17][VAR_13] += VAR_31 * VAR_23;
        } else
            return VAR_0;
    }

    if (VAR_42 & VAR_3) {
        if (VAR_29 & VAR_2) {
            VAR_41[VAR_13][VAR_14 ] += VAR_23;
            VAR_41[VAR_13][VAR_15] += VAR_23;
        } else if (VAR_29 & VAR_10) {


            if (VAR_28 & VAR_10) {
                VAR_41[VAR_25 ][VAR_14 ] += VAR_23;
                VAR_41[VAR_26][VAR_15] += VAR_23;
            } else {
                VAR_41[VAR_25 ][VAR_14 ] += 1.0;
                VAR_41[VAR_26][VAR_15] += 1.0;
            }
        } else if (VAR_29 & VAR_5) {
            if (VAR_36 == VAR_11) {
                VAR_41[VAR_18 ][VAR_14 ] -= VAR_31 * VAR_23;
                VAR_41[VAR_18 ][VAR_15] -= VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_14 ] += VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_15] += VAR_31 * VAR_23;
            } else if (VAR_36 == VAR_12) {
                VAR_41[VAR_18 ][VAR_14 ] -= VAR_31 * VAR_27;
                VAR_41[VAR_18 ][VAR_15] -= VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_14 ] += VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_15] += VAR_31 * VAR_27;
            } else {
                VAR_41[VAR_18 ][VAR_14 ] += VAR_31;
                VAR_41[VAR_20][VAR_15] += VAR_31;
            }
        } else if (VAR_29 & VAR_4) {
            VAR_41[VAR_17][VAR_14 ] += VAR_31 * VAR_23;
            VAR_41[VAR_17][VAR_15] += VAR_31 * VAR_23;
        } else
            return VAR_0;
    }

    if (VAR_42 & VAR_10) {
        if (VAR_29 & VAR_3) {


            if (VAR_28 & VAR_3) {
                VAR_41[VAR_14 ][VAR_25 ] += VAR_23;
                VAR_41[VAR_15][VAR_26] += VAR_23;
            } else {
                VAR_41[VAR_14 ][VAR_25 ] += 1.0;
                VAR_41[VAR_15][VAR_26] += 1.0;
            }
        } else if (VAR_29 & VAR_2) {
            VAR_41[VAR_13][VAR_25 ] += VAR_23;
            VAR_41[VAR_13][VAR_26] += VAR_23;
        } else if (VAR_29 & VAR_5) {
            if (VAR_36 == VAR_11) {
                VAR_41[VAR_18 ][VAR_25 ] -= VAR_31 * VAR_23;
                VAR_41[VAR_18 ][VAR_26] -= VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_25 ] += VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_26] += VAR_31 * VAR_23;
            } else if (VAR_36 == VAR_12) {
                VAR_41[VAR_18 ][VAR_25 ] -= VAR_31 * VAR_27;
                VAR_41[VAR_18 ][VAR_26] -= VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_25 ] += VAR_31 * VAR_23;
                VAR_41[VAR_20][VAR_26] += VAR_31 * VAR_27;
            } else {
                VAR_41[VAR_18 ][VAR_25 ] += VAR_31;
                VAR_41[VAR_20][VAR_26] += VAR_31;
            }
        } else if (VAR_29 & VAR_4) {
            VAR_41[VAR_17][VAR_25 ] += VAR_31 * VAR_23;
            VAR_41[VAR_17][VAR_26] += VAR_31 * VAR_23;
        } else
            return VAR_0;
    }

    if (VAR_42 & VAR_6) {
        if (VAR_29 & VAR_5) {
            VAR_41[VAR_18 ][VAR_19 ] += 1.0;
            VAR_41[VAR_20][VAR_21] += 1.0;
        } else if (VAR_29 & VAR_4) {
            VAR_41[VAR_17][VAR_19 ] += VAR_23;
            VAR_41[VAR_17][VAR_21] += VAR_23;
        } else
            return VAR_0;
    }

    if (VAR_42 & VAR_9) {
        if (VAR_29 & VAR_4) {
            VAR_41[VAR_17][VAR_22] += VAR_32;
        } else if (VAR_29 & VAR_5) {
            VAR_41[VAR_18 ][VAR_22] += VAR_32 * VAR_23;
            VAR_41[VAR_20][VAR_22] += VAR_32 * VAR_23;
        } else
            return VAR_0;
    }



    for (VAR_39 = VAR_37 = 0; VAR_39 < VAR_45 && VAR_37 < 64; VAR_37++) {
        double VAR_46 = 0;
        for (VAR_40 = VAR_38 = 0; VAR_40 < VAR_44 && VAR_38 < 64; VAR_38++) {
            VAR_34[VAR_39 * VAR_35 + VAR_40] = VAR_41[VAR_37][VAR_38];
            VAR_46 += FUNC_3(VAR_41[VAR_37][VAR_38]);
            if (VAR_28 & (1ULL << VAR_38))
                VAR_40++;
        }
        VAR_43 = FUNC_1(VAR_43, VAR_46);
        if (VAR_29 & (1ULL << VAR_37))
            VAR_39++;
    }


    if (VAR_33 && VAR_43 > 1.0) {
        for (VAR_37 = 0; VAR_37 < VAR_45; VAR_37++)
            for (VAR_38 = 0; VAR_38 < VAR_44; VAR_38++)
                VAR_34[VAR_37 * VAR_35 + VAR_38] /= VAR_43;
    }

    return 0;
}
