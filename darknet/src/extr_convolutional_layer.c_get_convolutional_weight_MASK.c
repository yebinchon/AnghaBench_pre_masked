
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int image ;
struct TYPE_3__ {int size; int c; int groups; scalar_t__ weights; } ;
typedef TYPE_1__ convolutional_layer ;


 int FUNC_0 (int,int,int,scalar_t__) ;

image FUNC_1(convolutional_layer VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0.size;
    int VAR_3 = VAR_0.size;
    int VAR_4 = VAR_0.c/VAR_0.groups;
    return FUNC_0(VAR_3,VAR_2,VAR_4,VAR_0.weights+VAR_1*VAR_2*VAR_3*VAR_4);
}
