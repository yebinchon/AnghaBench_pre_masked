
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FFFILE ;


 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long long FUNC_2(FFFILE *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    long long VAR_7;
    int VAR_8 = 0;

    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5=='+' || VAR_5=='-') {
        VAR_8 = (VAR_5=='-');
        VAR_5 = FUNC_0(VAR_3);
        if (VAR_5-'0'>=10U && VAR_4) FUNC_1(VAR_3);
    }
    if (VAR_5-'0'>=10U) {
        FUNC_1(VAR_3);
        return VAR_2;
    }
    for (VAR_6=0; VAR_5-'0'<10U && VAR_6<VAR_0/10; VAR_5 = FUNC_0(VAR_3))
        VAR_6 = 10*VAR_6 + VAR_5-'0';
    for (VAR_7=VAR_6; VAR_5-'0'<10U && VAR_7<VAR_1/100; VAR_5 = FUNC_0(VAR_3))
        VAR_7 = 10*VAR_7 + VAR_5-'0';
    for (; VAR_5-'0'<10U; VAR_5 = FUNC_0(VAR_3));
    FUNC_1(VAR_3);
    return VAR_8 ? -VAR_7 : VAR_7;
}
