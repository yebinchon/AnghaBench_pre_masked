
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int pad; int size; int stride; } ;
typedef TYPE_1__ convolutional_layer ;



int FUNC_0(convolutional_layer VAR_0)
{
    return (VAR_0.h + 2*VAR_0.pad - VAR_0.size) / VAR_0.stride + 1;
}
