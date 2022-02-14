
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t w; size_t size; size_t n; scalar_t__ h; } ;
typedef TYPE_1__ layer ;



__attribute__((used)) static size_t FUNC_0(layer VAR_0){
    return (size_t)VAR_0.h*VAR_0.w*VAR_0.size*VAR_0.size*VAR_0.n*sizeof(float);
}
