
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 double FUNC_0 (int ,double) ;
 double FUNC_1 (double,double) ;
 int VAR_0 ;
 int* FUNC_2 (int) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 int FUNC_5 (double) ;
 double FUNC_6 (double,double) ;

__attribute__((used)) static int16_t *FUNC_7(double VAR_1, int VAR_2)
{
    int VAR_3;
    double VAR_4, VAR_5, VAR_6;
    int16_t *VAR_7 = FUNC_2((512<<VAR_0)*sizeof(int16_t));
    if (!VAR_7)
        return ((void*)0);

    VAR_4 = FUNC_4(0.25) / FUNC_4(1.0 - FUNC_1(VAR_1,252.0)/255.0 - 0.00001);

    for (VAR_3 = -256<<VAR_0; VAR_3 < 256<<VAR_0; VAR_3++) {
        double VAR_8 = ((VAR_3<<(9-VAR_0)) + (1<<(8-VAR_0)) - 1) / 512.0;
        VAR_5 = FUNC_0(0, 1.0 - FUNC_3(VAR_8) / 255.0);
        VAR_6 = FUNC_6(VAR_5, VAR_4) * 256.0 * VAR_8;
        VAR_7[(256<<VAR_0)+VAR_3] = FUNC_5(VAR_6);
    }

    VAR_7[0] = !!VAR_1;
    return VAR_7;
}
