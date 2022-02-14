
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vq_indexes; } ;
typedef TYPE_1__ SiprParameters ;


 float FUNC_0 (float,double) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 float FUNC_1 (float) ;
 int FUNC_2 (float*,int ,int ) ;
 int FUNC_3 (float*,int ,int) ;
 int FUNC_4 (float*,int) ;
 int VAR_3 ;
 float* VAR_4 ;
 int FUNC_5 (float*,float*,int) ;

__attribute__((used)) static void FUNC_6(float *VAR_5, float *VAR_6,
                          const SiprParameters *VAR_7)
{
    int VAR_8;
    float VAR_9[VAR_0];

    FUNC_2(VAR_9, VAR_7->vq_indexes, VAR_3);

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        VAR_5[VAR_8] = VAR_6[VAR_8] * 0.33 + VAR_9[VAR_8] + VAR_4[VAR_8];

    FUNC_4(VAR_5, VAR_0 - 1);



    FUNC_3(VAR_5, VAR_1, VAR_0 - 1);
    VAR_5[9] = FUNC_0(VAR_5[VAR_0 - 1], 1.3 * VAR_2);

    FUNC_5(VAR_6, VAR_9, VAR_0 * sizeof(*VAR_6));

    for (VAR_8 = 0; VAR_8 < VAR_0 - 1; VAR_8++)
        VAR_5[VAR_8] = FUNC_1(VAR_5[VAR_8]);
    VAR_5[VAR_0 - 1] *= 6.153848 / VAR_2;
}
