
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;
 double VAR_0 ;

__attribute__((used)) static void FUNC_2(double *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;




    VAR_1[0] = FUNC_0(VAR_1[0], 0.0015 * VAR_0);
    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++)
        VAR_1[VAR_3] = FUNC_0(VAR_1[VAR_3], VAR_1[VAR_3 - 1] + 0.0125 * VAR_0);
    VAR_1[VAR_2 - 1] = FUNC_1(VAR_1[VAR_2 - 1], 0.9985 * VAR_0);



    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_1[VAR_3] < VAR_1[VAR_3 - 1]) {
            for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
                double VAR_6 = VAR_1[VAR_4];
                for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--) {
                    if (VAR_1[VAR_5] <= VAR_6) break;
                    VAR_1[VAR_5 + 1] = VAR_1[VAR_5];
                }
                VAR_1[VAR_5 + 1] = VAR_6;
            }
            break;
        }
    }
}
