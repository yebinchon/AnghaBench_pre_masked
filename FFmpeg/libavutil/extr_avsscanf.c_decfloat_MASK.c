
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int FFFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 long long VAR_8 ;
 int VAR_9 ;
 double FUNC_0 (double,double) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 double FUNC_4 (double,int) ;
 long long FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static double FUNC_9(FFFILE *VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
    uint32_t VAR_17[VAR_6];
    static const uint32_t VAR_18[] = { 128 };
    int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    long long VAR_24=0, VAR_25=0;
    long long VAR_26=0;
    int VAR_27 = 0;
    int VAR_28 = 0, VAR_29 = 0;
    int VAR_30;
    int VAR_31;
    int VAR_32 = -VAR_14-VAR_13+3;
    int VAR_33 = 0;
    double VAR_34;
    double VAR_35=0;
    double VAR_36=0;
    static const int VAR_37[] = { 10, 100, 1000, 10000,
        100000, 1000000, 10000000, 100000000 };

    VAR_20=0;
    VAR_21=0;


    for (; VAR_12=='0'; VAR_12 = FUNC_6(VAR_11)) VAR_28=1;
    if (VAR_12=='.') {
        VAR_29 = 1;
        for (VAR_12 = FUNC_6(VAR_11); VAR_12=='0'; VAR_12 = FUNC_6(VAR_11)) VAR_28=1, VAR_24--;
    }

    VAR_17[0] = 0;
    for (; VAR_12-'0'<10U || VAR_12=='.'; VAR_12 = FUNC_6(VAR_11)) {
        if (VAR_12 == '.') {
            if (VAR_29) break;
            VAR_29 = 1;
            VAR_24 = VAR_25;
        } else if (VAR_21 < VAR_6-3) {
            VAR_25++;
            if (VAR_12!='0') VAR_27 = VAR_25;
            if (VAR_20) VAR_17[VAR_21] = VAR_17[VAR_21]*10 + VAR_12-'0';
            else VAR_17[VAR_21] = VAR_12-'0';
            if (++VAR_20==9) {
                VAR_21++;
                VAR_20=0;
            }
            VAR_28=1;
        } else {
            VAR_25++;
            if (VAR_12!='0') {
                VAR_27 = (VAR_6-4)*9;
                VAR_17[VAR_6-4] |= 1;
            }
        }
    }
    if (!VAR_29) VAR_24=VAR_25;

    if (VAR_28 && (VAR_12|32)=='e') {
        VAR_26 = FUNC_5(VAR_11, VAR_16);
        if (VAR_26 == VAR_8) {
            if (VAR_16) {
                FUNC_8(VAR_11);
            } else {
                FUNC_7(VAR_11, 0);
                return 0;
            }
            VAR_26 = 0;
        }
        VAR_24 += VAR_26;
    } else if (VAR_12>=0) {
        FUNC_8(VAR_11);
    }
    if (!VAR_28) {
        VAR_10 = VAR_3;
        FUNC_7(VAR_11, 0);
        return 0;
    }


    if (!VAR_17[0]) return VAR_15 * 0.0;


    if (VAR_24==VAR_25 && VAR_25<10 && (VAR_13>30 || VAR_17[0]>>VAR_13==0))
        return VAR_15 * (double)VAR_17[0];
    if (VAR_24 > -VAR_14/2) {
        VAR_10 = VAR_4;
        return VAR_15 * VAR_1 * VAR_1;
    }
    if (VAR_24 < VAR_14-2*VAR_0) {
        VAR_10 = VAR_4;
        return VAR_15 * VAR_2 * VAR_2;
    }


    if (VAR_20) {
        for (; VAR_20<9; VAR_20++) VAR_17[VAR_21]*=10;
        VAR_21++;
        VAR_20=0;
    }

    VAR_22 = 0;
    VAR_23 = VAR_21;
    VAR_31 = 0;
    VAR_30 = VAR_24;


    if (VAR_27<9 && VAR_27<=VAR_30 && VAR_30 < 18) {
        int VAR_38;
        if (VAR_30 == 9) return VAR_15 * (double)VAR_17[0];
        if (VAR_30 < 9) return VAR_15 * (double)VAR_17[0] / VAR_37[8-VAR_30];
        VAR_38 = VAR_13-3*(int)(VAR_30-9);
        if (VAR_38>30 || VAR_17[0]>>VAR_38==0)
            return VAR_15 * (double)VAR_17[0] * VAR_37[VAR_30-10];
    }


    for (; !VAR_17[VAR_23-1]; VAR_23--);


    if (VAR_30 % 9) {
        int VAR_39 = VAR_30>=0 ? VAR_30%9 : VAR_30%9+9;
        int VAR_40 = VAR_37[8-VAR_39];
        uint32_t VAR_41 = 0;
        for (VAR_21=VAR_22; VAR_21!=VAR_23; VAR_21++) {
            uint32_t VAR_42 = VAR_17[VAR_21] % VAR_40;
            VAR_17[VAR_21] = VAR_17[VAR_21]/VAR_40 + VAR_41;
            VAR_41 = 1000000000/VAR_40 * VAR_42;
            if (VAR_21==VAR_22 && !VAR_17[VAR_21]) {
                VAR_22 = (VAR_22+1 & VAR_9);
                VAR_30 -= 9;
            }
        }
        if (VAR_41) VAR_17[VAR_23++] = VAR_41;
        VAR_30 += 9-VAR_39;
    }


    while (VAR_30 < 9*VAR_7 || (VAR_30 == 9*VAR_7 && VAR_17[VAR_22]<VAR_18[0])) {
        uint32_t VAR_43 = 0;
        VAR_31 -= 29;
        for (VAR_21=(VAR_23-1 & VAR_9); ; VAR_21=(VAR_21-1 & VAR_9)) {
            uint64_t VAR_44 = ((uint64_t)VAR_17[VAR_21] << 29) + VAR_43;
            if (VAR_44 > 1000000000) {
                VAR_43 = VAR_44 / 1000000000;
                VAR_17[VAR_21] = VAR_44 % 1000000000;
            } else {
                VAR_43 = 0;
                VAR_17[VAR_21] = VAR_44;
            }
            if (VAR_21==(VAR_23-1 & VAR_9) && VAR_21!=VAR_22 && !VAR_17[VAR_21]) VAR_23 = VAR_21;
            if (VAR_21==VAR_22) break;
        }
        if (VAR_43) {
            VAR_30 += 9;
            VAR_22 = (VAR_22-1 & VAR_9);
            if (VAR_22 == VAR_23) {
                VAR_23 = (VAR_23-1 & VAR_9);
                VAR_17[VAR_23-1 & VAR_9] |= VAR_17[VAR_23];
            }
            VAR_17[VAR_22] = VAR_43;
        }
    }


    for (;;) {
        uint32_t VAR_45 = 0;
        int VAR_46 = 1;
        for (VAR_19=0; VAR_19<VAR_7; VAR_19++) {
            VAR_21 = (VAR_22+VAR_19 & VAR_9);
            if (VAR_21 == VAR_23 || VAR_17[VAR_21] < VAR_18[VAR_19]) {
                VAR_19=VAR_7;
                break;
            }
            if (VAR_17[VAR_22+VAR_19 & VAR_9] > VAR_18[VAR_19]) break;
        }
        if (VAR_19==VAR_7 && VAR_30==9*VAR_7) break;

        if (VAR_30 > 9+9*VAR_7) VAR_46 = 9;
        VAR_31 += VAR_46;
        for (VAR_21=VAR_22; VAR_21!=VAR_23; VAR_21=(VAR_21+1 & VAR_9)) {
            uint32_t VAR_47 = VAR_17[VAR_21] & (1<<VAR_46)-1;
            VAR_17[VAR_21] = (VAR_17[VAR_21]>>VAR_46) + VAR_45;
            VAR_45 = (1000000000>>VAR_46) * VAR_47;
            if (VAR_21==VAR_22 && !VAR_17[VAR_21]) {
                VAR_22 = (VAR_22+1 & VAR_9);
                VAR_19--;
                VAR_30 -= 9;
            }
        }
        if (VAR_45) {
            if ((VAR_23+1 & VAR_9) != VAR_22) {
                VAR_17[VAR_23] = VAR_45;
                VAR_23 = (VAR_23+1 & VAR_9);
            } else VAR_17[VAR_23-1 & VAR_9] |= 1;
        }
    }


    for (VAR_34=VAR_19=0; VAR_19<VAR_7; VAR_19++) {
        if ((VAR_22+VAR_19 & VAR_9)==VAR_23) VAR_17[(VAR_23=(VAR_23+1 & VAR_9))-1] = 0;
        VAR_34 = 1000000000.0L * VAR_34 + VAR_17[VAR_22+VAR_19 & VAR_9];
    }

    VAR_34 *= VAR_15;


    if (VAR_13 > VAR_0+VAR_31-VAR_14) {
        VAR_13 = VAR_0+VAR_31-VAR_14;
        if (VAR_13<0) VAR_13=0;
        VAR_33 = 1;
    }


    if (VAR_13 < VAR_0) {
        VAR_36 = FUNC_0(FUNC_4(1, 2*VAR_0-VAR_13-1), VAR_34);
        VAR_35 = FUNC_2(VAR_34, FUNC_4(1, VAR_0-VAR_13));
        VAR_34 -= VAR_35;
        VAR_34 += VAR_36;
    }


    if ((VAR_22+VAR_19 & VAR_9) != VAR_23) {
        uint32_t VAR_48 = VAR_17[VAR_22+VAR_19 & VAR_9];
        if (VAR_48 < 500000000 && (VAR_48 || (VAR_22+VAR_19+1 & VAR_9) != VAR_23))
            VAR_35 += 0.25*VAR_15;
        else if (VAR_48 > 500000000)
            VAR_35 += 0.75*VAR_15;
        else if (VAR_48 == 500000000) {
            if ((VAR_22+VAR_19+1 & VAR_9) == VAR_23)
                VAR_35 += 0.5*VAR_15;
            else
                VAR_35 += 0.75*VAR_15;
        }
        if (VAR_0-VAR_13 >= 2 && !FUNC_2(VAR_35, 1))
            VAR_35++;
    }

    VAR_34 += VAR_35;
    VAR_34 -= VAR_36;

    if ((VAR_31+VAR_0 & VAR_5) > VAR_32-5) {
        if (FUNC_1(VAR_34) >= FUNC_3(2, VAR_0)) {
            if (VAR_33 && VAR_13==VAR_0+VAR_31-VAR_14)
                VAR_33 = 0;
            VAR_34 *= 0.5;
            VAR_31++;
        }
        if (VAR_31+VAR_0>VAR_32 || (VAR_33 && VAR_35))
            VAR_10 = VAR_4;
    }

    return FUNC_4(VAR_34, VAR_31);
}
