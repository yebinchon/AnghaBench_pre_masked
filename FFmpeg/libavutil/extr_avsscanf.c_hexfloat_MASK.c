
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FFFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 double FUNC_0 (double,int) ;
 int VAR_5 ;
 double FUNC_1 (double,long long) ;
 long long FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static double FUNC_6(FFFILE *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    uint32_t VAR_11 = 0;
    double VAR_12 = 0;
    double VAR_13 = 1;
    double VAR_14 = 0;
    int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
    long long VAR_18 = 0;
    long long VAR_19 = 0;
    long long VAR_20 = 0;
    int VAR_21;
    int VAR_22;

    VAR_22 = FUNC_3(VAR_6);


    for (; VAR_22=='0'; VAR_22 = FUNC_3(VAR_6))
        VAR_17 = 1;

    if (VAR_22=='.') {
        VAR_16 = 1;
        VAR_22 = FUNC_3(VAR_6);

        for (VAR_18=0; VAR_22=='0'; VAR_22 = FUNC_3(VAR_6), VAR_18--) VAR_17 = 1;
    }

    for (; VAR_22-'0'<10U || (VAR_22|32)-'a'<6U || VAR_22=='.'; VAR_22 = FUNC_3(VAR_6)) {
        if (VAR_22=='.') {
            if (VAR_16) break;
            VAR_18 = VAR_19;
            VAR_16 = 1;
        } else {
            VAR_17 = 1;
            if (VAR_22 > '9') VAR_21 = (VAR_22|32)+10-'a';
            else VAR_21 = VAR_22-'0';
            if (VAR_19<8) {
                VAR_11 = VAR_11*16 + VAR_21;
            } else if (VAR_19 < VAR_0/4+1) {
                VAR_12 += VAR_21*(VAR_13/=16);
            } else if (VAR_21 && !VAR_15) {
                VAR_12 += 0.5*VAR_13;
                VAR_15 = 1;
            }
            VAR_19++;
        }
    }
    if (!VAR_17) {
        FUNC_5(VAR_6);
        if (VAR_10) {
            FUNC_5(VAR_6);
            if (VAR_16) FUNC_5(VAR_6);
        } else {
            FUNC_4(VAR_6, 0);
        }
        return VAR_9 * 0.0;
    }
    if (!VAR_16) VAR_18 = VAR_19;
    while (VAR_19<8) VAR_11 *= 16, VAR_19++;
    if ((VAR_22|32)=='p') {
        VAR_20 = FUNC_2(VAR_6, VAR_10);
        if (VAR_20 == VAR_4) {
            if (VAR_10) {
                FUNC_5(VAR_6);
            } else {
                FUNC_4(VAR_6, 0);
                return 0;
            }
            VAR_20 = 0;
        }
    } else {
        FUNC_5(VAR_6);
    }
    VAR_20 += 4*VAR_18 - 32;

    if (!VAR_11) return VAR_9 * 0.0;
    if (VAR_20 > -VAR_8) {
        VAR_5 = VAR_3;
        return VAR_9 * VAR_1 * VAR_1;
    }
    if (VAR_20 < VAR_8-2*VAR_0) {
        VAR_5 = VAR_3;
        return VAR_9 * VAR_2 * VAR_2;
    }

    while (VAR_11 < 0x80000000) {
        if (VAR_12>=0.5) {
            VAR_11 += VAR_11 + 1;
            VAR_12 += VAR_12 - 1;
        } else {
            VAR_11 += VAR_11;
            VAR_12 += VAR_12;
        }
        VAR_20--;
    }

    if (VAR_7 > 32+VAR_20-VAR_8) {
        VAR_7 = 32+VAR_20-VAR_8;
        if (VAR_7<0) VAR_7=0;
    }

    if (VAR_7 < VAR_0)
        VAR_14 = FUNC_0(FUNC_1(1, 32+VAR_0-VAR_7-1), VAR_9);

    if (VAR_7<32 && VAR_12 && !(VAR_11&1)) VAR_11++, VAR_12=0;

    VAR_12 = VAR_14 + VAR_9*(double)VAR_11 + VAR_9*VAR_12;
    VAR_12 -= VAR_14;

    if (!VAR_12) VAR_5 = VAR_3;

    return FUNC_1(VAR_12, VAR_20);
}
