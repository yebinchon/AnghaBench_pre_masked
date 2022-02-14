
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int n; scalar_t__* seen; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_7__ {int n; int c; int weights; int biases; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int,double,int,int) ;

void FUNC_6(char *VAR_1, char *VAR_2, char *VAR_3)
{
    VAR_0 = -1;
    network *VAR_4 = FUNC_2(VAR_1);
    int VAR_5 = VAR_4->layers[VAR_4->n - 2].n;
    int VAR_6 = VAR_4->layers[VAR_4->n - 2].c;
    FUNC_5(VAR_5*VAR_6, .1, VAR_4->layers[VAR_4->n - 2].weights, 1);
    FUNC_5(VAR_5, 0, VAR_4->layers[VAR_4->n - 2].biases, 1);
    VAR_4->layers[VAR_4->n - 2].n = 11921;
    VAR_4->layers[VAR_4->n - 2].biases += 5;
    VAR_4->layers[VAR_4->n - 2].weights += 5*VAR_6;
    if(VAR_2){
        FUNC_1(VAR_4, VAR_2);
    }
    VAR_4->layers[VAR_4->n - 2].biases -= 5;
    VAR_4->layers[VAR_4->n - 2].weights -= 5*VAR_6;
    VAR_4->layers[VAR_4->n - 2].n = VAR_5;
    FUNC_3("%d\n", VAR_5);
    layer VAR_7 = VAR_4->layers[VAR_4->n - 2];
    FUNC_0(VAR_7.n/3, VAR_7.biases, 1, VAR_7.biases + VAR_7.n/3, 1);
    FUNC_0(VAR_7.n/3, VAR_7.biases, 1, VAR_7.biases + 2*VAR_7.n/3, 1);
    FUNC_0(VAR_7.n/3*VAR_7.c, VAR_7.weights, 1, VAR_7.weights + VAR_7.n/3*VAR_7.c, 1);
    FUNC_0(VAR_7.n/3*VAR_7.c, VAR_7.weights, 1, VAR_7.weights + 2*VAR_7.n/3*VAR_7.c, 1);
    *VAR_4->seen = 0;
    FUNC_4(VAR_4, VAR_3);
}
