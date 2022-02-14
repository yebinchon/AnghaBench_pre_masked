
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float (* dot_productf ) (float const*,int ,int ) ;} ;
typedef TYPE_1__ CELPMContext ;


 float const* VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (float const*,int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_1(float *VAR_3, const float *VAR_4, int VAR_5, CELPMContext *VAR_6)
{
    const float *VAR_7 = VAR_4 - VAR_0 + 1;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11 = 0, VAR_12;

    VAR_8 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_5 / 5; VAR_9++) {
        VAR_3[VAR_8] = VAR_4[VAR_11];
        VAR_12 = 4;
        VAR_8++;

        for (VAR_10 = 1; VAR_10 < 5; VAR_10++) {
            VAR_3[VAR_8] = VAR_6->dot_productf(VAR_7 + VAR_11,
                                                  VAR_2[4 - VAR_12],
                                                  VAR_1);
            VAR_11++;
            VAR_12--;
            VAR_8++;
        }
    }
}
