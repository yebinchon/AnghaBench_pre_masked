
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FoSection ;


 int VAR_0 ;
 double FUNC_0 (int *,double) ;

__attribute__((used)) static double FUNC_1(FoSection *VAR_1, double VAR_2)
{
    double VAR_3 = VAR_2, VAR_4;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0 / 2; VAR_5++) {
        VAR_4 = FUNC_0(&VAR_1[VAR_5], VAR_3);
        VAR_3 = VAR_4;
    }

    return VAR_4;
}
