
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qev_t ;
struct TYPE_3__ {size_t qeend; int curtick; int * qet; int * qev; } ;
typedef TYPE_1__ PokeyState ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_1, qev_t VAR_2)
{
    VAR_1->qev[VAR_1->qeend] = VAR_2;
    VAR_1->qet[VAR_1->qeend] = VAR_1->curtick;
    ++VAR_1->qeend;
    if(VAR_1->qeend >= VAR_0)
        VAR_1->qeend = 0;
}
