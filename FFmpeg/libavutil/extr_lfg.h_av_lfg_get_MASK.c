
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* state; int index; } ;
typedef TYPE_1__ AVLFG ;



__attribute__((used)) static inline unsigned int FUNC_0(AVLFG *VAR_0){
    VAR_0->state[VAR_0->index & 63] = VAR_0->state[(VAR_0->index-24) & 63] + VAR_0->state[(VAR_0->index-55) & 63];
    return VAR_0->state[VAR_0->index++ & 63];
}
