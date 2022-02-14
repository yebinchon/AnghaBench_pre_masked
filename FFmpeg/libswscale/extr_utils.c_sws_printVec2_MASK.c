
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; double* coeff; } ;
typedef TYPE_1__ SwsVector ;
typedef int AVClass ;


 int FUNC_0 (int *,int,char*,...) ;

void FUNC_1(SwsVector *VAR_0, AVClass *VAR_1, int VAR_2)
{
    int VAR_3;
    double VAR_4 = 0;
    double VAR_5 = 0;
    double VAR_6;

    for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++)
        if (VAR_0->coeff[VAR_3] > VAR_4)
            VAR_4 = VAR_0->coeff[VAR_3];

    for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++)
        if (VAR_0->coeff[VAR_3] < VAR_5)
            VAR_5 = VAR_0->coeff[VAR_3];

    VAR_6 = VAR_4 - VAR_5;

    for (VAR_3 = 0; VAR_3 < VAR_0->length; VAR_3++) {
        int VAR_7 = (int)((VAR_0->coeff[VAR_3] - VAR_5) * 60.0 / VAR_6 + 0.5);
        FUNC_0(VAR_1, VAR_2, "%1.3f ", VAR_0->coeff[VAR_3]);
        for (; VAR_7 > 0; VAR_7--)
            FUNC_0(VAR_1, VAR_2, " ");
        FUNC_0(VAR_1, VAR_2, "|\n");
    }
}
