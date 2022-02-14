
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double qev_t ;
struct TYPE_3__ {int qebeg; int qeend; double ovola; double* qev; size_t curtick; size_t* qet; } ;
typedef TYPE_1__ PokeyState ;


 double* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static double FUNC_0(PokeyState* VAR_2)
{
    int VAR_3 = VAR_2->qebeg;
    qev_t VAR_4,VAR_5;
    double VAR_6;

    if(VAR_2->qebeg == VAR_2->qeend)
    {
        return VAR_2->ovola * VAR_0[0];
    }

    VAR_4 = VAR_2->ovola;
    VAR_6 = 0;


    if(VAR_2->qeend < VAR_2->qebeg)
    {
        while(VAR_3<VAR_1)
        {
            VAR_5 = VAR_2->qev[VAR_3];
            VAR_6 += (VAR_4-VAR_5)*VAR_0[VAR_2->curtick - VAR_2->qet[VAR_3]];
            VAR_4 = VAR_5;
            ++VAR_3;
        }
        VAR_3=0;
    }


    while(VAR_3<VAR_2->qeend)
    {
        VAR_5 = VAR_2->qev[VAR_3];
        VAR_6 += (VAR_4-VAR_5)*VAR_0[VAR_2->curtick - VAR_2->qet[VAR_3]];
        VAR_4 = VAR_5;
        ++VAR_3;
    }

    VAR_6 += VAR_4*VAR_0[0];
    return VAR_6;
}
