
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FFFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 double FUNC_1 (int *,int,int,int,int,int) ;
 int VAR_7 ;
 double FUNC_2 (int *,int,int,int,int) ;
 char FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static double FUNC_6(FFFILE *VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11 = 1;
    size_t VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;

    switch (VAR_9) {
    case 0:
        VAR_13 = VAR_3;
        VAR_14 = VAR_4-VAR_13;
        break;
    case 1:
        VAR_13 = VAR_0;
        VAR_14 = VAR_1-VAR_13;
        break;
    case 2:
        VAR_13 = VAR_0;
        VAR_14 = VAR_1-VAR_13;
        break;
    default:
        return 0;
    }

    while (FUNC_0((VAR_15 = FUNC_3(VAR_8))));

    if (VAR_15=='+' || VAR_15=='-') {
        VAR_11 -= 2*(VAR_15=='-');
        VAR_15 = FUNC_3(VAR_8);
    }

    for (VAR_12=0; VAR_12<8 && (VAR_15|32)=="infinity"[VAR_12]; VAR_12++)
        if (VAR_12<7) VAR_15 = FUNC_3(VAR_8);
    if (VAR_12==3 || VAR_12==8 || (VAR_12>3 && VAR_10)) {
        if (VAR_12!=8) {
            FUNC_5(VAR_8);
            if (VAR_10) for (; VAR_12>3; VAR_12--) FUNC_5(VAR_8);
        }
        return VAR_11 * VAR_5;
    }
    if (!VAR_12) for (VAR_12=0; VAR_12<3 && (VAR_15|32)=="nan"[VAR_12]; VAR_12++)
        if (VAR_12<2) VAR_15 = FUNC_3(VAR_8);
    if (VAR_12==3) {
        if (FUNC_3(VAR_8) != '(') {
            FUNC_5(VAR_8);
            return VAR_6;
        }
        for (VAR_12=1; ; VAR_12++) {
            VAR_15 = FUNC_3(VAR_8);
            if (VAR_15-'0'<10U || VAR_15-'A'<26U || VAR_15-'a'<26U || VAR_15=='_')
                continue;
            if (VAR_15==')') return VAR_6;
            FUNC_5(VAR_8);
            if (!VAR_10) {
                VAR_7 = VAR_2;
                FUNC_4(VAR_8, 0);
                return 0;
            }
            while (VAR_12--) FUNC_5(VAR_8);
            return VAR_6;
        }
        return VAR_6;
    }

    if (VAR_12) {
        FUNC_5(VAR_8);
        VAR_7 = VAR_2;
        FUNC_4(VAR_8, 0);
        return 0;
    }

    if (VAR_15=='0') {
        VAR_15 = FUNC_3(VAR_8);
        if ((VAR_15|32) == 'x')
            return FUNC_2(VAR_8, VAR_13, VAR_14, VAR_11, VAR_10);
        FUNC_5(VAR_8);
        VAR_15 = '0';
    }

    return FUNC_1(VAR_8, VAR_15, VAR_13, VAR_14, VAR_11, VAR_10);
}
