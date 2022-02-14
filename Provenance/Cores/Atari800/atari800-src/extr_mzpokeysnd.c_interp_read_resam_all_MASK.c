
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double qev_t ;
struct TYPE_3__ {int qebeg; int qeend; double ovola; double* qev; scalar_t__* qet; scalar_t__ curtick; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 double FUNC_0 (scalar_t__,double) ;

__attribute__((used)) static double FUNC_1(PokeyState* VAR_1, double VAR_2)
{
    int VAR_3 = VAR_1->qebeg;
    qev_t VAR_4,VAR_5;
    double VAR_6;

    if (VAR_1->qebeg == VAR_1->qeend)
    {
        return VAR_1->ovola * FUNC_0(0,VAR_2);
    }

    VAR_4 = VAR_1->ovola;
    VAR_6 = 0;


    if (VAR_1->qeend < VAR_1->qebeg)
    {
        while (VAR_3 < VAR_0)
        {
            VAR_5 = VAR_1->qev[VAR_3];
            VAR_6 += (VAR_4-VAR_5)*FUNC_0(VAR_1->curtick - VAR_1->qet[VAR_3],VAR_2);
            VAR_4 = VAR_5;
            ++VAR_3;
        }
        VAR_3 = 0;
    }


    while (VAR_3 < VAR_1->qeend)
    {
        VAR_5 = VAR_1->qev[VAR_3];
        VAR_6 += (VAR_4-VAR_5)*FUNC_0(VAR_1->curtick - VAR_1->qet[VAR_3],VAR_2);
        VAR_4 = VAR_5;
        ++VAR_3;
    }

    VAR_6 += VAR_4*FUNC_0(0,VAR_2);

    return VAR_6;
}
