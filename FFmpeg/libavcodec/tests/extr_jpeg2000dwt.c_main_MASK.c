
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVLFG ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_3 (int*,int*,int**,int,int ,int ) ;
 int FUNC_4 (int*,int*,int**,int,double) ;

int FUNC_5(void) {
    AVLFG VAR_8;
    int VAR_9,VAR_10;
    int VAR_11[2][2];
    int VAR_12, VAR_13;

    FUNC_2(&VAR_8, 1);

    for (VAR_9 = 0; VAR_9<VAR_3 * VAR_3; VAR_9++)
        VAR_5[VAR_9] = VAR_7[VAR_9] = VAR_4[VAR_9] = VAR_6[VAR_9] = FUNC_1(&VAR_8) % 2048;

    for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
        for (VAR_10=0; VAR_10<4; VAR_10++)
            VAR_11[VAR_10>>1][VAR_10&1] = FUNC_1(&VAR_8) % VAR_3;
        if (VAR_11[0][0] >= VAR_11[0][1] || VAR_11[1][0] >= VAR_11[1][1])
            continue;
        VAR_13 = FUNC_1(&VAR_8) % VAR_2;

        VAR_12 = FUNC_3(VAR_4, VAR_6, VAR_11, VAR_13, VAR_0, 0);
        if (VAR_12)
            return VAR_12;
        VAR_12 = FUNC_3(VAR_4, VAR_6, VAR_11, VAR_13, VAR_1, FUNC_0(7+5*VAR_13, 15+3*VAR_13));
        if (VAR_12)
            return VAR_12;
        VAR_12 = FUNC_4(VAR_5, VAR_7, VAR_11, VAR_13, 0.05);
        if (VAR_12)
            return VAR_12;
    }

    return 0;
}
