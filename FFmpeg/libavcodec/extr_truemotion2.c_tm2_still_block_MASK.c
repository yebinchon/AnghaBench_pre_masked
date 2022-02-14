
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** D; scalar_t__ CD; } ;
typedef TYPE_1__ TM2Context ;
typedef int AVFrame ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,scalar_t__,scalar_t__) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;
 void** VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void** VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static inline void FUNC_2(TM2Context *VAR_14, AVFrame *VAR_15, int VAR_16, int VAR_17)
{
    int VAR_18, VAR_19;
    FUNC_0();


    for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
        for (VAR_18 = 0; VAR_18 < 2; VAR_18++){
            VAR_0[VAR_18] = VAR_1[VAR_18];
            VAR_3[VAR_18] = VAR_4[VAR_18];
        }
        VAR_0 += VAR_2; VAR_3 += VAR_5;
        VAR_1 += VAR_11; VAR_4 += VAR_12;
    }
    VAR_0 -= VAR_2 * 2;
    VAR_3 -= VAR_5 * 2;
    FUNC_1(VAR_0, VAR_2, VAR_9, VAR_14->CD);
    FUNC_1(VAR_3, VAR_5, (VAR_9 + 2), (VAR_14->CD + 2));


    VAR_14->D[0] = VAR_7[3] - VAR_10[3];
    VAR_14->D[1] = VAR_7[3 + VAR_13] - VAR_7[3];
    VAR_14->D[2] = VAR_7[3 + VAR_13 * 2] - VAR_7[3 + VAR_13];
    VAR_14->D[3] = VAR_7[3 + VAR_13 * 3] - VAR_7[3 + VAR_13 * 2];

    for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
        for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
            VAR_6[VAR_18] = VAR_7[VAR_18];
            VAR_10[VAR_18] = VAR_7[VAR_18];
        }
        VAR_6 += VAR_8;
        VAR_7 += VAR_13;
    }
}
