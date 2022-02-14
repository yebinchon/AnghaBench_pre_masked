
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double* VAR_1 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        double VAR_4 = VAR_2 == 0 ? FUNC_1(0.125) : 0.5;

        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            VAR_1[VAR_2*8+VAR_3] = VAR_4*FUNC_0((VAR_0/8.0)*VAR_2*(VAR_3+0.5));
    }
}
