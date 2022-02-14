
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const FUNC_0 (double) ;
 int FUNC_1 (int,int const) ;
 double VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(int *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    int *VAR_7, *VAR_8, VAR_9;
    const int *VAR_10 = VAR_2;

    for(VAR_6=31;VAR_6>=3;VAR_6-=2) VAR_4[VAR_6] += VAR_4[VAR_6 - 2];

    VAR_7 = VAR_4 + 30;
    VAR_8 = VAR_4 + 2;
    do {
        VAR_7[0] += VAR_7[-4];
        VAR_7[1] += VAR_7[1 - 4];
        VAR_7 -= 4;
    } while (VAR_7 != VAR_8);

    VAR_7 = VAR_4 + 28;
    VAR_8 = VAR_4 + 4;
    do {
        VAR_7[0] += VAR_7[-8];
        VAR_7[1] += VAR_7[1-8];
        VAR_7[2] += VAR_7[2-8];
        VAR_7[3] += VAR_7[3-8];
        VAR_7 -= 8;
    } while (VAR_7 != VAR_8);

    VAR_7 = VAR_4;
    VAR_8 = VAR_4 + 32;
    do {
        VAR_7[ 3] = -VAR_7[ 3];
        VAR_7[ 6] = -VAR_7[ 6];

        VAR_7[11] = -VAR_7[11];
        VAR_7[12] = -VAR_7[12];
        VAR_7[13] = -VAR_7[13];
        VAR_7[15] = -VAR_7[15];
        VAR_7 += 16;
    } while (VAR_7 != VAR_8);


    VAR_7 = VAR_4;
    VAR_8 = VAR_4 + 8;
    do {
        int VAR_11, VAR_12, VAR_13, VAR_14;

        VAR_13 = FUNC_1(VAR_7[16], FUNC_0(VAR_0*0.5));
        VAR_14 = VAR_7[0] - VAR_13;
        VAR_13 = VAR_7[0] + VAR_13;

        VAR_12 = FUNC_1(-(VAR_7[24] + VAR_7[8]), FUNC_0(VAR_0*0.5));
        VAR_11 = FUNC_1((VAR_7[8] - VAR_12), VAR_10[0]);
        VAR_12 = FUNC_1((VAR_7[8] + VAR_12), VAR_10[1]);

        VAR_7[ 0] = VAR_13 + VAR_11;
        VAR_7[ 8] = VAR_14 - VAR_12;
        VAR_7[16] = VAR_14 + VAR_12;
        VAR_7[24] = VAR_13 - VAR_11;
        VAR_7++;
    } while (VAR_7 != VAR_8);

    VAR_10 += 2;
    VAR_7 = VAR_4;
    VAR_8 = VAR_4 + 4;
    do {
        VAR_9 = FUNC_1(VAR_7[28],VAR_10[0]);
        VAR_7[28] = (VAR_7[0] - VAR_9);
        VAR_7[0] = (VAR_7[0] + VAR_9);

        VAR_9 = FUNC_1(VAR_7[4],VAR_10[1]);
        VAR_7[ 4] = (VAR_7[24] - VAR_9);
        VAR_7[24] = (VAR_7[24] + VAR_9);

        VAR_9 = FUNC_1(VAR_7[20],VAR_10[2]);
        VAR_7[20] = (VAR_7[8] - VAR_9);
        VAR_7[ 8] = (VAR_7[8] + VAR_9);

        VAR_9 = FUNC_1(VAR_7[12],VAR_10[3]);
        VAR_7[12] = (VAR_7[16] - VAR_9);
        VAR_7[16] = (VAR_7[16] + VAR_9);
        VAR_7++;
    } while (VAR_7 != VAR_8);
    VAR_10 += 4;

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        VAR_9 = FUNC_1(VAR_4[30-VAR_5*4],VAR_10[0]);
        VAR_4[30-VAR_5*4] = (VAR_4[VAR_5*4] - VAR_9);
        VAR_4[ VAR_5*4] = (VAR_4[VAR_5*4] + VAR_9);

        VAR_9 = FUNC_1(VAR_4[ 2+VAR_5*4],VAR_10[1]);
        VAR_4[ 2+VAR_5*4] = (VAR_4[28-VAR_5*4] - VAR_9);
        VAR_4[28-VAR_5*4] = (VAR_4[28-VAR_5*4] + VAR_9);

        VAR_9 = FUNC_1(VAR_4[31-VAR_5*4],VAR_10[0]);
        VAR_4[31-VAR_5*4] = (VAR_4[1+VAR_5*4] - VAR_9);
        VAR_4[ 1+VAR_5*4] = (VAR_4[1+VAR_5*4] + VAR_9);

        VAR_9 = FUNC_1(VAR_4[ 3+VAR_5*4],VAR_10[1]);
        VAR_4[ 3+VAR_5*4] = (VAR_4[29-VAR_5*4] - VAR_9);
        VAR_4[29-VAR_5*4] = (VAR_4[29-VAR_5*4] + VAR_9);

        VAR_10 += 2;
    }

    VAR_7 = VAR_4 + 30;
    VAR_8 = VAR_4 + 1;
    do {
        VAR_9 = FUNC_1(VAR_8[0], *VAR_10);
        VAR_8[0] = (VAR_7[0] - VAR_9);
        VAR_7[0] = (VAR_7[0] + VAR_9);
        VAR_7 -= 2;
        VAR_8 += 2;
        VAR_10++;
    } while (VAR_7 >= VAR_4);

    for(VAR_5=0;VAR_5<32;VAR_5++) {
        VAR_3[VAR_5] = VAR_4[VAR_1[VAR_5]];
    }
}
