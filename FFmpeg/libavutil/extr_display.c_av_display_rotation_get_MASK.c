
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 double FUNC_0 (int const) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (double,double) ;
 double FUNC_2 (double,double) ;

double FUNC_3(const int32_t VAR_2[9])
{
    double VAR_3, VAR_4[2];

    VAR_4[0] = FUNC_2(FUNC_0(VAR_2[0]), FUNC_0(VAR_2[3]));
    VAR_4[1] = FUNC_2(FUNC_0(VAR_2[1]), FUNC_0(VAR_2[4]));

    if (VAR_4[0] == 0.0 || VAR_4[1] == 0.0)
        return VAR_1;

    VAR_3 = FUNC_1(FUNC_0(VAR_2[1]) / VAR_4[1],
                     FUNC_0(VAR_2[0]) / VAR_4[0]) * 180 / VAR_0;

    return -VAR_3;
}
