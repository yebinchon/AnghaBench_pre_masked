
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FFFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 unsigned char* VAR_5 ;

__attribute__((used)) static unsigned long long FUNC_4(FFFILE *VAR_6, unsigned VAR_7, int VAR_8, unsigned long long VAR_9)
{
    const unsigned char *VAR_10 = VAR_5+1;
    int VAR_11, VAR_12=0;
    unsigned VAR_13;
    unsigned long long VAR_14;
    if (VAR_7 > 36 || VAR_7 == 1) {
        VAR_4 = VAR_0;
        return 0;
    }
    while (FUNC_0((VAR_11=FUNC_1(VAR_6))));
    if (VAR_11=='+' || VAR_11=='-') {
        VAR_12 = -(VAR_11=='-');
        VAR_11 = FUNC_1(VAR_6);
    }
    if ((VAR_7 == 0 || VAR_7 == 16) && VAR_11=='0') {
        VAR_11 = FUNC_1(VAR_6);
        if ((VAR_11|32)=='x') {
            VAR_11 = FUNC_1(VAR_6);
            if (VAR_10[VAR_11]>=16) {
                FUNC_3(VAR_6);
                if (VAR_8) FUNC_3(VAR_6);
                else FUNC_2(VAR_6, 0);
                return 0;
            }
            VAR_7 = 16;
        } else if (VAR_7 == 0) {
            VAR_7 = 8;
        }
    } else {
        if (VAR_7 == 0) VAR_7 = 10;
        if (VAR_10[VAR_11] >= VAR_7) {
            FUNC_3(VAR_6);
            FUNC_2(VAR_6, 0);
            VAR_4 = VAR_0;
            return 0;
        }
    }
    if (VAR_7 == 10) {
        for (VAR_13=0; VAR_11-'0'<10U && VAR_13<=VAR_2/10-1; VAR_11=FUNC_1(VAR_6))
            VAR_13 = VAR_13*10 + (VAR_11-'0');
        for (VAR_14=VAR_13; VAR_11-'0'<10U && VAR_14<=VAR_3/10 && 10*VAR_14<=VAR_3-(VAR_11-'0'); VAR_11=FUNC_1(VAR_6))
            VAR_14 = VAR_14*10 + (VAR_11-'0');
        if (VAR_11-'0'>=10U) goto done;
    } else if (!(VAR_7 & VAR_7-1)) {
        int VAR_15 = "\0\1\2\4\7\3\6\5"[(0x17*VAR_7)>>5&7];
        for (VAR_13=0; VAR_10[VAR_11]<VAR_7 && VAR_13<=VAR_2/32; VAR_11=FUNC_1(VAR_6))
            VAR_13 = VAR_13<<VAR_15 | VAR_10[VAR_11];
        for (VAR_14=VAR_13; VAR_10[VAR_11]<VAR_7 && VAR_14<=VAR_3>>VAR_15; VAR_11=FUNC_1(VAR_6))
            VAR_14 = VAR_14<<VAR_15 | VAR_10[VAR_11];
    } else {
        for (VAR_13=0; VAR_10[VAR_11]<VAR_7 && VAR_13<=VAR_2/36-1; VAR_11=FUNC_1(VAR_6))
            VAR_13 = VAR_13*VAR_7 + VAR_10[VAR_11];
        for (VAR_14=VAR_13; VAR_10[VAR_11]<VAR_7 && VAR_14<=VAR_3/VAR_7 && VAR_7*VAR_14<=VAR_3-VAR_10[VAR_11]; VAR_11=FUNC_1(VAR_6))
            VAR_14 = VAR_14*VAR_7 + VAR_10[VAR_11];
    }
    if (VAR_10[VAR_11]<VAR_7) {
        for (; VAR_10[VAR_11]<VAR_7; VAR_11=FUNC_1(VAR_6));
        VAR_4 = VAR_1;
        VAR_14 = VAR_9;
        if (VAR_9&1) VAR_12 = 0;
    }
done:
    FUNC_3(VAR_6);
    if (VAR_14>=VAR_9) {
        if (!(VAR_9&1) && !VAR_12) {
            VAR_4 = VAR_1;
            return VAR_9-1;
        } else if (VAR_14>VAR_9) {
            VAR_4 = VAR_1;
            return VAR_9;
        }
    }
    return (VAR_14^VAR_12)-VAR_12;
}
