
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double) ;

void FUNC_3(int VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
    double VAR_6, VAR_7, VAR_8;

    VAR_6 = VAR_1 - FUNC_0(2.0 * VAR_0 * VAR_2 / VAR_3);
    VAR_7 = VAR_1 - 1.0;
    VAR_8 = (VAR_6 - FUNC_2((VAR_6 + VAR_7) * (VAR_6 - VAR_7))) / VAR_7;

    VAR_5[0] = FUNC_1(VAR_8 * 2.0 * (1 << VAR_4));
    VAR_5[1] = FUNC_1(-(VAR_8 * VAR_8) * (1 << VAR_4));
}
