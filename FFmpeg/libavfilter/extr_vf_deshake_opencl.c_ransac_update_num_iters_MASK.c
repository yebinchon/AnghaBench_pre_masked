
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double,int) ;
 scalar_t__ FUNC_4 (double) ;

__attribute__((used)) static int FUNC_5(double VAR_1, double VAR_2, int VAR_3)
{
    double VAR_4, VAR_5;

    VAR_1 = FUNC_1(VAR_1, 0.0, 1.0);
    VAR_2 = FUNC_1(VAR_2, 0.0, 1.0);


    VAR_4 = FUNC_0(1.0 - VAR_1, VAR_0);
    VAR_5 = 1.0 - FUNC_3(1.0 - VAR_2, 3);
    if (VAR_5 < VAR_0) {
        return 0;
    }

    VAR_4 = FUNC_2(VAR_4);
    VAR_5 = FUNC_2(VAR_5);

    return VAR_5 >= 0 || -VAR_4 >= VAR_3 * (-VAR_5) ? VAR_3 : (int)FUNC_4(VAR_4 / VAR_5);
}
