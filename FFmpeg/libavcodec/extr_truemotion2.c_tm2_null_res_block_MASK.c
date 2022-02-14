
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* D; scalar_t__ CD; } ;
typedef TYPE_1__ TM2Context ;
typedef int AVFrame ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int* VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int*,unsigned int*) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int*,int) ;

__attribute__((used)) static inline void FUNC_3(TM2Context *VAR_8, AVFrame *VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12;
    int VAR_13;
    unsigned VAR_14, VAR_15;
    int VAR_16;
    int VAR_17[16];
    FUNC_0();


    VAR_17[0] = VAR_17[1] = VAR_17[2] = VAR_17[3] = 0;
    FUNC_2(VAR_0, VAR_1, VAR_6, VAR_8->CD, VAR_17, VAR_10);

    VAR_17[0] = VAR_17[1] = VAR_17[2] = VAR_17[3] = 0;
    FUNC_2(VAR_2, VAR_3, VAR_6 + 2, VAR_8->CD + 2, VAR_17, VAR_10);


    for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
        VAR_17[VAR_12] = 0;

    VAR_13 = (unsigned)VAR_8->D[0] + VAR_8->D[1] + VAR_8->D[2] + VAR_8->D[3];

    if (VAR_10 > 0)
        VAR_14 = VAR_7[-1] - (unsigned)VAR_13;
    else
        VAR_14 = 0;

    VAR_15 = VAR_7[3];
    VAR_16 = VAR_15 - VAR_14;
    VAR_7[0] = VAR_14 + (VAR_16 >> 2);
    VAR_7[1] = VAR_14 + (VAR_16 >> 1);
    VAR_7[2] = VAR_15 - (VAR_16 >> 2);
    VAR_7[3] = VAR_15;
    {
        unsigned VAR_18 = VAR_14;

        VAR_8->D[0] = (VAR_18 + (VAR_13 >> 2)) - VAR_14;
        VAR_14 += VAR_8->D[0];
        VAR_8->D[1] = (VAR_18 + (VAR_13 >> 1)) - VAR_14;
        VAR_14 += VAR_8->D[1];
        VAR_8->D[2] = ((VAR_18 + VAR_13) - (VAR_13 >> 2)) - VAR_14;
        VAR_14 += VAR_8->D[2];
        VAR_8->D[3] = (VAR_18 + VAR_13) - VAR_14;
    }
    FUNC_1(VAR_8, VAR_4, VAR_5, VAR_17, VAR_7);
}
