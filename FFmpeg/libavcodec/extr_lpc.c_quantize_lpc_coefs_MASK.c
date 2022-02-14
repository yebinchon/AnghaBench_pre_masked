
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int32_t ;


 double FUNC_0 (double,int ) ;
 double FUNC_1 (int ,double,double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (double) ;
 int FUNC_4 (double*,int ,int) ;

__attribute__((used)) static void FUNC_5(double *VAR_0, int VAR_1, int VAR_2,
                               int32_t *VAR_3, int *VAR_4, int VAR_5,
                               int VAR_6, int VAR_7)
{
    int VAR_8;
    double VAR_9, VAR_10;
    int32_t VAR_11;
    int VAR_12;


    VAR_11 = (1 << (VAR_2 - 1)) - 1;


    VAR_9 = 0.0;
    for(VAR_8=0; VAR_8<VAR_1; VAR_8++) {
        VAR_9= FUNC_0(VAR_9, FUNC_2(VAR_0[VAR_8]));
    }


    if(VAR_9 * (1 << VAR_6) < 1.0) {
        *VAR_4 = VAR_7;
        FUNC_4(VAR_3, 0, sizeof(int32_t) * VAR_1);
        return;
    }


    VAR_12 = VAR_6;
    while((VAR_9 * (1 << VAR_12) > VAR_11) && (VAR_12 > VAR_5)) {
        VAR_12--;
    }



    if(VAR_12 == 0 && VAR_9 > VAR_11) {
        double VAR_13 = ((double)VAR_11) / VAR_9;
        for(VAR_8=0; VAR_8<VAR_1; VAR_8++) {
            VAR_0[VAR_8] *= VAR_13;
        }
    }


    VAR_10=0;
    for(VAR_8=0; VAR_8<VAR_1; VAR_8++) {
        VAR_10 -= VAR_0[VAR_8] * (1 << VAR_12);
        VAR_3[VAR_8] = FUNC_1(FUNC_3(VAR_10), -VAR_11, VAR_11);
        VAR_10 -= VAR_3[VAR_8];
    }
    *VAR_4 = VAR_12;
}
