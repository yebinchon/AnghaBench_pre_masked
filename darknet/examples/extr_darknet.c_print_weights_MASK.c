
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_5__ {int n; int size; int c; double* weights; } ;
typedef TYPE_2__ layer ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(char *VAR_1, char *VAR_2, int VAR_3)
{
    VAR_0 = -1;
    network *VAR_4 = FUNC_0(VAR_1, VAR_2, 1);
    layer VAR_5 = VAR_4->layers[VAR_3];
    int VAR_6, VAR_7;

    for(VAR_6 = 0; VAR_6 < VAR_5.n; ++VAR_6){

        for(VAR_7 = 0; VAR_7 < VAR_5.size*VAR_5.size*VAR_5.c; ++VAR_7){

            FUNC_1("%g ", VAR_5.weights[VAR_6*VAR_5.size*VAR_5.size*VAR_5.c + VAR_7]);
        }
        FUNC_1("\n");

    }

}
