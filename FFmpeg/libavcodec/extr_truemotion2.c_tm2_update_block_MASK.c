
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* D; scalar_t__ CD; } ;
typedef TYPE_1__ TM2Context ;
typedef int AVFrame ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static inline void FUNC_3(TM2Context *VAR_15, AVFrame *VAR_16, int VAR_17, int VAR_18)
{
    int VAR_19, VAR_20;
    unsigned VAR_21;
    FUNC_1();


    for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
        for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
            VAR_1[VAR_19] = VAR_2[VAR_19] + FUNC_0(VAR_15, VAR_0);
            VAR_4[VAR_19] = VAR_5[VAR_19] + FUNC_0(VAR_15, VAR_0);
        }
        VAR_1 += VAR_3;
        VAR_4 += VAR_6;
        VAR_2 += VAR_12;
        VAR_5 += VAR_13;
    }
    VAR_1 -= VAR_3 * 2;
    VAR_4 -= VAR_6 * 2;
    FUNC_2(VAR_1, VAR_3, VAR_10, VAR_15->CD);
    FUNC_2(VAR_4, VAR_6, (VAR_10 + 2), (VAR_15->CD + 2));


    VAR_15->D[0] = VAR_8[3] - VAR_11[3];
    VAR_15->D[1] = VAR_8[3 + VAR_14] - VAR_8[3];
    VAR_15->D[2] = VAR_8[3 + VAR_14 * 2] - VAR_8[3 + VAR_14];
    VAR_15->D[3] = VAR_8[3 + VAR_14 * 3] - VAR_8[3 + VAR_14 * 2];

    for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
        VAR_21 = VAR_11[3];
        for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
            VAR_7[VAR_19] = VAR_8[VAR_19] + (unsigned)FUNC_0(VAR_15, VAR_0);
            VAR_11[VAR_19] = VAR_7[VAR_19];
        }
        VAR_15->D[VAR_20] = VAR_11[3] - VAR_21;
        VAR_7 += VAR_9;
        VAR_8 += VAR_14;
    }
}
