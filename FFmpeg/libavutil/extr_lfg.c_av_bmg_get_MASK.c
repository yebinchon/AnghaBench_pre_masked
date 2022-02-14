
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVLFG ;


 double VAR_0 ;
 double FUNC_0 (int *) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;

void FUNC_3(AVLFG *VAR_1, double VAR_2[2])
{
    double VAR_3, VAR_4, VAR_5;

    do {
        VAR_3 = 2.0 / VAR_0 * FUNC_0(VAR_1) - 1.0;
        VAR_4 = 2.0 / VAR_0 * FUNC_0(VAR_1) - 1.0;
        VAR_5 = VAR_3 * VAR_3 + VAR_4 * VAR_4;
    } while (VAR_5 >= 1.0);

    VAR_5 = FUNC_2((-2.0 * FUNC_1(VAR_5)) / VAR_5);
    VAR_2[0] = VAR_3 * VAR_5;
    VAR_2[1] = VAR_4 * VAR_5;
}
