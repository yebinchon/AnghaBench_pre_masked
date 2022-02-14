
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * blocksize; int previous_blocksize; scalar_t__ valid_extradata; } ;
typedef TYPE_1__ AVVorbisParseContext ;



void FUNC_0(AVVorbisParseContext *VAR_0)
{
    if (VAR_0->valid_extradata)
        VAR_0->previous_blocksize = VAR_0->blocksize[0];
}
