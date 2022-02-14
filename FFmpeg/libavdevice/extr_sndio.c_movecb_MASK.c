
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwpos; int channels; int bps; } ;
typedef TYPE_1__ SndioData ;



__attribute__((used)) static inline void FUNC_0(void *VAR_0, int VAR_1)
{
    SndioData *VAR_2 = VAR_0;

    VAR_2->hwpos += VAR_1 * VAR_2->channels * VAR_2->bps;
}
