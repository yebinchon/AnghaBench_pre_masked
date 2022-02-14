
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nfrag; int * frag; } ;
typedef int AudioFragment ;
typedef TYPE_1__ ATempoContext ;



__attribute__((used)) inline static AudioFragment *FUNC_0(ATempoContext *VAR_0)
{
    return &VAR_0->frag[VAR_0->nfrag % 2];
}
